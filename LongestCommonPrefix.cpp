class Solution {
public:
	string longestCommonPrefix(vector<string>& strs)
	{
	   if (strs.size() == 0) {return "";}		
	   string min_lenth_str = *min_element(strs.begin(), strs.end(), [](string a, string b) {return a.size() < b.size();});
	   string prefix;
		for (size_t i = 0; i < min_lenth_str.size(); ++i)
		{
			for (size_t j = 0; j < strs.size(); ++j)
			{
				if (strs[j][i] != strs[0][i])
				{
					return prefix;
				}
			}
			prefix += strs[0][i];
		}
		return prefix;
	}
};
