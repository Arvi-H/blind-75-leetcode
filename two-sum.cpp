#include <iostream>
#include <vector>
#include <map>

using namespace std;

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        
        map<int, int> complement;
        
        for(int i = 0; i < nums.size(); i++){
            int comp = target - nums[i];
            
            if(complement.find(comp) != complement.end()){
                ans[0] = complement[comp];
                ans[1] = i;
                return ans;
            }
            
            complement[nums[i]] = i;
        }
        
        return ans;
    }
};


int main(int argc, char** argv) {
    vector<int> nums {1,1,1,3,3,4,3,2,4,2};
    int target = 5;

    Solution s;
    vector<int> twoSums = s.twoSum(nums, target);

    for (int i = 0; i < twoSums.size(); i++) {
        cout << "Index [" << twoSums[i] << "]" << endl;
    }
}   
