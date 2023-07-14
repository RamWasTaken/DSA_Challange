//287. Find the Duplicate Number
/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.*/
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
