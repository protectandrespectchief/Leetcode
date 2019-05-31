class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }

        vector<int> dp(nums.size(), 0);
        dp[0] = nums[0];

        int res = dp[0];

        for (int i = 1; i < nums.size(); i++) {
            dp[i] = max(nums[i], nums[i] + dp[i - 1]);
            if (dp[i] > res) {
                res = dp[i];
            }
        }

        return res;

    }
};