vector<int> Solution::solve(int A, int B, int C, int D) {
    priority_queue<int,vector<int>,greater<int>>p;
    vector<int >res;
    vector<int>v;
 v.push_back(A);v.push_back(B);v.push_back(C);
    for(int i =0;i<v.size();i++){
    p.push(v[i]);}
    
    int cnt=0;
    map<int,int>m;
    while(cnt<D){
        int tmp=p.top();
        p.pop();
        if(m.find(tmp)==m.end()){
            res.push_back(tmp);
        
        for(int i=0;i<v.size();i++){p.push(tmp*v[i]);}
        cnt++;
        m[tmp]=1;}
    }
    return res;
}