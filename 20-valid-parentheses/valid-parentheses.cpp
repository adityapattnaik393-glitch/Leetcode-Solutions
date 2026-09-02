class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char ch:s)
        {
            if(ch=='('||ch=='{'||ch=='[')
            {
                st.push(ch);
            }
            else if(ch==')'||ch=='}'||ch==']')
            {
                if(st.empty()) return false;
                char topchar=st.top();
                if(ch==')'&& topchar=='(' ||ch=='}'&& topchar=='{'|| ch==']'&& topchar=='[')
                {
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};