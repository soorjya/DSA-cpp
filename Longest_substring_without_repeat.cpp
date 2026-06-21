class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.length();
        string longest = "";

        for(int i = 0; i < n; i++) {

            string curr = "";
            curr += s[i];

            for(int j = i + 1; j < n; j++) {

                if(curr.find(s[j]) == string::npos) {

                    curr += s[j];

                    if(curr.length() > longest.length())
                        longest = curr;
                }
                else {
                    break;
                }
            }

            if(longest.empty())
                longest = curr;
        }

        return longest.length();
    }
};
