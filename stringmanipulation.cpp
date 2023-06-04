#include <string>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string empty= "";
        bool common = true;
        vector<char> ok;
        for (int i = 0; i < strs.size() && common; i++) {
            char test = strs.at(0)[i];
            for (int j = 1; j < strs.size(); j++) {
                if (strs.at(j)[i] != test) common = false;
            }
            if (common) ok.push_back(test);
        }
        if (ok.size() > 0) {
            string answer(ok.begin(), ok.end());
            return answer;
        } else
        return empty;
     }
};