class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,char>mappingmap;
        unordered_set<char>usedreplacement;
        for(int i=0;i<s.length();i++)
        {
            char s1=s[i];
            char s2=t[i];
            if(mappingmap.find(s1)==mappingmap.end())
            {
                if(usedreplacement.find(s2)==usedreplacement.end())
                {
                    mappingmap[s1]=s2;
                    usedreplacement.insert(s2);
                }
                else return false;
            }
            else{

                char map=mappingmap[s1];
                if(map!=s2) return false;
            }
        }
        return true;
    }
};