package _053;

class Solution {
    public int maxSubArray(int[] nums) {
        int res = nums[0], curMax= nums[0];
        for (int i = 1; i < nums.length; i++) {
            curMax =Math.max(curMax, curMax + nums[i]);
            res = Math.max(res, curMax);
        }
        return res;
    }

    public static void main(String[] args) {
    }
}
