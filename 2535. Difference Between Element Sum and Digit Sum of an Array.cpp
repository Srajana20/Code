// You are given a positive integer array nums.
// The element sum is the sum of all the elements in nums.
// The digit sum is the sum of all the digits (not necessarily distinct) that appear in nums.
// Return the absolute difference between the element sum and digit sum of nums.
// Note that the absolute difference between two integers x and y is defined as |x - y|.

// Example 1:
// Input: nums = [1,15,6,3]
// Output: 9
// Explanation: 
// The element sum of nums is 1 + 15 + 6 + 3 = 25.
// The digit sum of nums is 1 + 1 + 5 + 6 + 3 = 16.
// The absolute difference between the element sum and digit sum is |25 - 16| = 9.

// Example 2:
// Input: nums = [1,2,3,4]
// Output: 0
// Explanation:
// The element sum of nums is 1 + 2 + 3 + 4 = 10.
// The digit sum of nums is 1 + 2 + 3 + 4 = 10.
// The absolute difference between the element sum and digit sum is |10 - 10| = 0.

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum=0;
        int digitSum=0;
        int number,lastDigit;
        for(int i=0;i<nums.size();i++){
            elementSum=elementSum+nums[i];
            if(nums[i]>9){
                number=nums[i];
                while(number>0){
                    lastDigit=number%10;
                    number=number/10;
                    digitSum=digitSum+lastDigit;
                }    
            }
            else{
                digitSum=digitSum+nums[i];
            }

        }
        //There is standard function for addition:accumulate
        return abs(elementSum-digitSum);
        
    }
};
