// Problem: Subtract the Product and Sum of Digits of an Integer
// Platform: leetcode
// Rating/Difficulty: Unrated
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
// Solved on: 2026-10-03T17:07:30.119Z

class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1,sum=0,r,dig;
        while(n!=0){
            dig=n%10;
            prod=prod*dig;
            sum=sum+dig;
            n=n/10;
        }
        r=prod-sum;
        return r;
    }
};