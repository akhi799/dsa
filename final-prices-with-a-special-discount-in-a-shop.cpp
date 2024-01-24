//nearest smaller to right
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack <int>st;
        vector<int> ans;
        int n=prices.size();
        for(int i=n-1;i>=0;i--){
            if(st.empty()){
                ans.push_back(prices[i]);
            }else if(!st.empty()&&st.top()<=prices[i]){
                ans.push_back(prices[i]-st.top());
            }else if(!st.empty()&&st.top()>prices[i]){
                while(!st.empty()&&st.top()>prices[i]){
                    st.pop();
                }
                if(st.empty()){
                    ans.push_back(prices[i]);
                }else{
                    ans.push_back(prices[i]-st.top());
                }
            }
            st.push(prices[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
