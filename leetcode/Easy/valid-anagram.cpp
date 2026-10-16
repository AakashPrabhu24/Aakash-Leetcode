// Problem: Valid Anagram
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/valid-anagram/
// Solved on: 2026-10-16T21:08:05.597Z

class Solution {
public:
    bool isAnagram(string s, string t) {
        int counts[26] = {0}, countt[26] = {0}, i;
        if (s.size() != t.size()) {
            return false;
        }
        for (i = 0; i < s.size(); i++) {
            counts[s[i] - 'a']++;
            countt[t[i] - 'a']++;
        }
        for (i = 0; i < 26; i++) {
            if (counts[i] != countt[i]) {
                return false;
            }
        }
        return true;
    }
};