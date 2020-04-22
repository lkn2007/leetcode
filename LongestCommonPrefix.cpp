class Solution {
public:
	string longestCommonPrefix(vector<string>& strs)
	{
		if (strs.size() == 0)
		{
			return "";
		}
		
		size_t min_length_str = strs[0].size();
		for (size_t i = 1; i < strs.size(); i++)
		{
			if ( strs[i].size() <= min_length_str)
			{
				min_length_str = strs[i].size();
			}
		}

		string prefix;
		for (size_t i = 0; i < min_length_str; i++)
		{
			for (size_t j = 0; j < strs.size(); j++)
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
