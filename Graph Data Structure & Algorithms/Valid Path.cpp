bool isPossible(int m,int n,int k,int r,vector<int >X,vector<int >Y){
    int rec[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){rec[i][j]=0;}
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            for(int p=0;p<k;p++){
                if(sqrt(pow((X[p]-1-i),2)+pow((Y[p]-1-j),2))<=r){
                    rec[i][j]=-1;
                }
            }
        }
    }
    if(rec[0][0]==-1){return false;}
    vector<vector<int>>qu;
    rec[0][0]=1;
    qu.push_back({0,0});
    while(!qu.empty()){
        vector<int >arr=qu.front();
        qu.erase(qu.begin());
        int elex=arr[0];
        int eley=arr[1];
        //1
        if ((elex > 0) && (eley > 0) && 
        (rec[elex - 1][eley - 1] == 0)) 
    { 
    rec[elex - 1][eley - 1] = 1; 
    vector<int> v = {elex - 1, eley - 1}; 
    qu.push_back(v); 
    }
//2
    if ((elex > 0) && 
        (rec[elex - 1][eley] == 0)) 
    { 
    rec[elex - 1][eley] = 1; 
    vector<int> v = {elex - 1, eley}; 
    qu.push_back(v); 
    }
//3
    if ((elex > 0) && (eley < n - 1) && 
        (rec[elex - 1][eley + 1] == 0)) 
    { 
    rec[elex - 1][eley + 1] = 1; 
    vector<int> v = {elex - 1, eley + 1}; 
    qu.push_back(v); 
    }
        //4
        if ((eley > 0) && 
        (rec[elex][eley - 1] == 0)) 
    { 
    rec[elex][eley - 1] = 1; 
    vector<int> v = {elex, eley - 1}; 
    qu.push_back(v); 
    }
//5
    if ((eley > n - 1) && 
        (rec[elex][eley + 1] == 0)) 
    { 
    rec[elex][eley + 1] = 1; 
    vector<int> v = {elex, eley + 1}; 
    qu.push_back(v); 
    }
        //6
        if ((elex < m - 1) && (eley > 0) && 
        (rec[elex + 1][eley - 1] == 0)) 
    { 
    rec[elex + 1][eley - 1] = 1; 
    vector<int> v = {elex + 1, eley - 1}; 
    qu.push_back(v); 
    }
        //7
        if ((elex < m - 1) && 
        (rec[elex + 1][eley] == 0)) 
    { 
    rec[elex + 1][eley] = 1; 
    vector<int> v = {elex + 1, eley}; 
    qu.push_back(v); 
    } 
        //8
        if ((elex < m - 1) && (eley < n - 1) && 
        (rec[elex + 1][eley + 1] == 0)) 
    { 
    rec[elex + 1][eley + 1] = 1; 
    vector<int> v = {elex + 1, eley + 1}; 
    qu.push_back(v); 
    } 
    
    }
    return (rec[m-1][n-1]==1);
    
}
string Solution::solve(int A, int B, int C, int D, vector<int> &E, vector<int> &F) {
    A+=1;
    B+=1;
    for(int i=0;i<E.size();i++){
        E[i]+=1;
    }
    for(int i=0;i<F.size();i++){
        F[i]+=1;
    }
if(isPossible(A,B,C,D,E,F)){return "YES";}else{return "NO";}
}
