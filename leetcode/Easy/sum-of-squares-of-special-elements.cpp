// Problem: Sum of Squares of Special Elements
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/sum-of-squares-of-special-elements/
// Solved on: 2026-10-11T11:11:37.324Z

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
               if(nums.size()%(i+1)==0){
                sum=sum+nums[i]*nums[i];
               }
        }
        return sum;
        
    }
};