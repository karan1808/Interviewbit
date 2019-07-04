string count(int n){
    if(n==1){return "1";}
    if(n==2){return "11";}
    string str="11";
    for(int i=3;i<=n;i++){
        
        int len=str.length();
        
        string tmp="";
        int cnt=1;
        for(int j=1;j<=len;j++){
            if(str[j]!=str[j-1]){
                tmp+=cnt+'0';
                tmp+=str[j-1];
                cnt=1;
            }else{cnt++;}
        }
    
        str=tmp;
    }
return str;    
}
string Solution::countAndSay(int A) {
    return count(A);
}