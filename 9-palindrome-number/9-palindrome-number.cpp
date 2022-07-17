class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        int i = 0;
        int j = num.size()-1;
        
        while(i <= j)
            if(num[i++]!=num[j--])
                return false;
        return true;
        
    
        
        // string s = to_string(x);
        // int i = 0, j = s.size()-1;
        // while (i <= j) if (s[i++] != s[j--]) return false;
        // return true;
    }
};