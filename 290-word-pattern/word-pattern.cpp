#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mappingmap;
        unordered_set<string> usedword;
        
        int j = 0; 
        int n = s.length();

        for (int i = 0; i < pattern.length(); i++) {
            // Edge Case: If we have characters left in pattern, but we ran out of string s
            if (j >= n) {
                return false;
            }

            string word = ""; 
            
            
            while (j < n && s[j] != ' ') {
                word += s[j];
                j++;
            }
            
            // Advance j past the space character so it's ready for the next word
            j++; 

            char s1 = pattern[i];
           
            if (mappingmap.find(s1) == mappingmap.end()) {
                if (usedword.find(word) == usedword.end()) {
                    mappingmap[s1] = word;
                    usedword.insert(word);
                }
                else {
                    return false;
                }
            }
            else {
                string mapStr = mappingmap[s1];
                if (mapStr != word) {
                    return false;
                }
            }
        }
        
        // Edge Case Check: If the pattern is done, but there are still leftover words in s
        // (j-1 because we incremented j right after the last word ended)
        if (j - 1 < n) {
            return false;
        }

        return true;
    }
};
