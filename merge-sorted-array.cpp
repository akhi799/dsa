class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=m+n-1;i>=0;i--){
            if(m==0){
                for(int i=0;i<n;i++){
                    nums1[i]=nums2[i];
                }
            }else if(n==0){
                return;
            }
            else if(nums2[n-1]>nums1[m-1]){
                nums1[i]=nums2[n-1];
                n--;
            }else{
                nums1[i]=nums1[m-1];
                m--;
            }
        }
    }
};
