// Problem: Divide Two Integers
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/divide-two-integers/
// Solved on: 2026-10-02T19:41:55.169Z

class Solution {
public:
    int divide(int dividend, int divisor) {

        long long a = dividend;
        long long b = divisor;

        bool negative = false;

        if (a < 0) {
            a = -a;
            negative = !negative;
        }

        if (b < 0) {
            b = -b;
            negative = !negative;
        }

        long long ans = 0;

        while (a >= b) {

            long long temp = b;
            long long count = 1;

            while (a >= temp + temp) {
                temp = temp + temp;
                count = count + count;
            }

            a = a - temp;
            ans = ans + count;
        }

        if (negative)
            ans = -ans;

        if (ans > INT_MAX)
            return INT_MAX;

        return ans;
    }
};