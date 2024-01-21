class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=haystack.size(),n=needle.size();
        int ans=0;
        for(int i=0;i<m-n+1;i++){
            if(haystack[i]==needle[0]){
                for(int j=0;j<n;j++){
                    if(haystack[i+j]==needle[j]){
                        if(j==n-1)return i;
                    }else{
                        break;
                    }
                }
            }
        }
        return -1;
    }
};
