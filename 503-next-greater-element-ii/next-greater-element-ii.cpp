class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        vector<int>result(n,-1);
        for(int i=0;i<2*n;i++)
        {
            int currentidx=i%n;
            while(!st.empty()&&nums[st.top()]<nums[currentidx])
            {
                result[st.top()]=nums[currentidx];
                st.pop();
            }
            if(i<n)
        {
            st.push(currentidx);
        }
        }
        return result;
    }
};