//daily temperature nearest greater to right using navie approach using for loop
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans;
        int n=temperatures.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(temperatures[j]>temperatures[i]){
                    ans.push_back(j-i);
                    break;
                }else if(i==n-1||j==n-1||i==n){
                    ans.push_back(0);
                }
                
            }
            if(i==n-1)ans.push_back(0);
            

        }return ans;
    }
};
