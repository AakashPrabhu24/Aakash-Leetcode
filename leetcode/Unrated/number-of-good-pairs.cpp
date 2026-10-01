// Problem: Number of Good Pairs
// Platform: leetcode
// Rating/Difficulty: Unrated
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/number-of-good-pairs/
// Solved on: 2026-10-01T20:40:24.137Z

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int i, j, count = 0;
        for (i = 0; i < nums.size() - 1; i++) {
            for (j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
        }
        return count;
    }
};