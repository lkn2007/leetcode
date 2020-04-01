class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        if (strs.size() == 0)
        {
          return "";
        }
        string min_str = strs[0];
        int min_size = strs[0].size();
        string rez;

        for (int i = 0; i < strs.size(); i++)
        {
            if (strs[0].size() > strs[i].size())
            {
                min_size = strs[i].size();
                min_str = strs[i];               
            }
        }
        for ( int i = 0; i < min_size; i++)
        {
            for (int j = 0; j < strs.size(); j++)
            {
                if (strs[j][i] != min_str[i])
                {
                    return rez;
                }
            }
            rez += min_str[i];
        }
        
        return rez;    
    }
};
