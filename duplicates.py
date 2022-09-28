class Solution:
    def containsDuplicate(self, nums):
        numsSet = set(nums)
        if len(nums) == len(numsSet):
            print("False")
        print("True")

s = Solution()
nums = [1,1,1,3,3,4,3,2,4,2]
s.containsDuplicate(nums)
    