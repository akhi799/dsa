class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int minSofar=10000 ;//minimum value of stock so far.
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minSofar){
                minSofar=prices[i];
            }else{
                int profit=prices[i]-minSofar;
                if(ans<profit){
                    ans=profit;
                }
            }
        }
        return ans;
    }
};
