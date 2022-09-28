from array import arrays

class Solution:
    def twoSum(self, nums, target):
        complement = {}
        
        i = 0
        while i  < len(nums):
            comp = target - nums[i]
            if (comp in complement):
                return [complement[comp], i]
            complement[nums[i]] = i
            i+=1
 