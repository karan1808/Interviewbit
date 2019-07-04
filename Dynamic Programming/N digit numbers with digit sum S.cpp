int lookup[1001][5001];
int countRec(int n,int sum){
    if(n==0){return sum==0;}
    if(lookup[n][sum]!=-1){return lookup[n][sum];}
    int ans=0;
    for(int i=0;i<10;i++){
        if(sum-i>=0){
            ans+=countRec(n-1,sum-i);
            ans%=1000000007;
        }
    }
    return lookup[n][sum]=ans;
}
int finalCount(int n,int sum){
    memset(lookup,-1,sizeof(lookup));
    int ans=0;
    for(int i=1;i<=9;i++){
        if(sum-i>=0){
            ans+=countRec(n-1,sum-i);
            ans%=1000000007;
        }
    }
    return ans;
}
int Solution::solve(int A, int B) {
    int res=0;
    res=finalCount(A,B);
    return res%1000000007;
}