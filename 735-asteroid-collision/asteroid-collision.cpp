
class Solution {
public:
    vector<int> asteroidCollision(std::vector<int>& asteroids) {
        stack<int> st;
        
        for (int ast : asteroids) {
            while (!st.empty() && st.top() > 0 && ast < 0 && st.top() < abs(ast)) {
                st.pop();
            }
            
            if (!st.empty() && st.top() > 0 && ast < 0) {
                if (st.top() == abs(ast)) {
                    st.pop();
                }
                
            } 
            else {
                st.push(ast);
            }
        } 
        
        vector<int> result;
        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};
