// Problem: Reverse Integer
// Platform: leetcode
// Rating/Difficulty: Unrated
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/reverse-integer/
// Solved on: 2026-10-03T17:02:51.306Z

class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        while (x != 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        if (rev > INT_MAX || rev < INT_MIN) return 0;
        return (int)rev;
    }
};