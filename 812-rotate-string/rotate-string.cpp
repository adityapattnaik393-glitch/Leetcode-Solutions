class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        string merge=s+s;
        return merge.contains(goal);
    }
};