class Solution {
public:
    bool isPalindrome(int x) {
        
        //using two pointers
        string num = to_string(x);
        int i = 0;
        int j = num.size()-1;
        
        while(i <= j)
            if(num[i++]!=num[j--])
                return false;
        return true;
    }
};