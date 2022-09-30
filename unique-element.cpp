#include <iostream>
#include <vector>

// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size(); i++) {
            while (i != nums.size()-1) {
                if (nums[i] != nums[i+1]) {
                    return nums[i];
                }
            }
            
        }
        return 0;
    }
};