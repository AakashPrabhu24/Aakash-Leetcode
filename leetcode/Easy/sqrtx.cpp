// Problem: Sqrt(x)
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/sqrtx/
// Solved on: 2026-10-01T20:17:42.342Z

class Solution {
public:
    int mySqrt(int x) {
        int low = 1;
        int high = x;
        int ans = 0;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (mid * mid <= x) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};