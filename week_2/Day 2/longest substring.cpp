class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st1;
        int left = 0, ans = 0;

        for (int right = 0; right < s.size(); right++) {
            while (st1.count(s[right])) {
                st1.erase(s[left]);
                left++;
                        }
            st1.insert(s[right]);
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};
