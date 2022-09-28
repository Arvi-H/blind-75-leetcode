#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

// Check to see if there are duplicates in a given vector
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(), nums.end()); 

        for (int i = 0; i < nums.size(); i++) {
            if (i != (nums.size()-1)) {
                if (nums[i] == nums[i+1]) {
                    return true;
                }
            }
        }

        return false;
    }

};

int main(int argc, char** argv) {
    // ifstream in(argv[1]);
    vector<int> nums {1,1,1,3,3,4,3,2,4,2};

    Solution s;
    if (s.containsDuplicate(nums)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
}   