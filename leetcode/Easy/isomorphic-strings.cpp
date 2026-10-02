// Problem: Isomorphic Strings
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/isomorphic-strings/
// Solved on: 2026-10-02T19:40:48.052Z

class Solution {
public:
    bool isIsomorphic(string s, string t) {

        int map1[256] = {0}, map2[256] = {0};
        int i, a, b;

        if (s.size() != t.size()) {
            return false;
        }

        for (i = 0; i < s.size(); i++) {

            a = s[i];
            b = t[i];

            if (map1[a] != 0 && map1[a] != b + 1) {
                return false;
            } 
            else if (map2[b] != 0 && map2[b] != a + 1) {
                return false;
            }

            map1[a] = b + 1;
            map2[b] = a + 1;
        }

        return true;
    }
};