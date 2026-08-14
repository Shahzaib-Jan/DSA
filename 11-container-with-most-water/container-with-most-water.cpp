class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0, width, ht, tans, lP = 0, rP = height.size() - 1;
        while (lP < rP)
        {
            width = rP-lP;
            ht = min(height[lP], height[rP]);
            tans = width * ht;
            ans = max(ans, tans);
            height[lP] > height[rP] ? rP-- : lP++;
        }
        return ans;
    }
};