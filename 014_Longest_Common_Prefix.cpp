/*compare the character each by each*/

/*
[

  "abcdefgh",

  "aefghijk",

  "abcefgh"
]
the common is "a"
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n<1)
        {
            return{};
        }
        int m = strs[0].size(); /*initialize*/
        int i,j;
        for (i = 0; i < m; ++i) 
        {
	        for (auto s : strs) 
            {
		    if (i >= s.size() || s[i] != strs[0][i])
			    return strs[0].substr(0, i);
	        }
        }
    return strs[0];
    }
};
