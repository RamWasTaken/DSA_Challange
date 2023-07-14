class Solution {
public:
    void sortColors(vector<int>& nums) {
        // red white blue => 012
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j],nums[j+1]);
                }
            }
        }
    }
};