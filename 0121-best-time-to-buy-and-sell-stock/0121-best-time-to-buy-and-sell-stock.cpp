class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int ans = 0, bBuy = prices[0];
    for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] > bBuy)
            {
                ans = max(ans, prices[i] - bBuy);
            }
            bBuy = min(prices[i], bBuy);
        }
        return ans;
    }
};