vector<int> Solution::solve(int A, vector<int> &B) {
    vector<int> res;
    int minpower=INT_MAX;
    int minid=INT_MAX;
    int n=B.size();
    for(int i=0;i<n;i++){
        if(minpower>B[i]){minid=i;minpower=B[i];}
    }
    int length=A/minpower;
    for(int i=0;i<length;i++){
        res.push_back(minid);
    }
    int rem=A-(length*minpower);
    int j=0;
    for(int i=0;i<length;i++){
        for(int z=j;z<minid;z++){
        if(B[z]-B[minid]<=rem&&j<minid){
            res[i]=z;rem-=(B[j]-B[minid]);
            break;
        }else{j++;}
        }
    }
 return res;   
}
