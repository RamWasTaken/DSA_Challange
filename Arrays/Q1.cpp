class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        std::sort(nums.begin(), nums.end()); // Use std::sort with iterators

        for (int i = 1; i < n; i++) { // Start the loop from index 1
            if (nums[i] == nums[i-1]) {
                return nums[i];
            }
        }
        return -1;
    }
};