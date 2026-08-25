class Solution {
public:
    string largestOddNumber(string num) {
        long long n = num.length();
        
        // Check if the entire number is already odd
        if ((num[n - 1] - '0') % 2 != 0)
        {
            return num;
        }
        else {
            
            for (long long i = n - 1; i >= 0; i--)
            {
               
                if ((num[i] - '0') % 2 != 0)
                {
                     
                     return num.substr(0, i + 1);
                }
            }
        }
        return "";
    }
};
