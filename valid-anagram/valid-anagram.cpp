class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int H[26] = {0} , i;
        
        if(s.size()!=t.size())
            return false;
        
        for(i=0 ; i<s.size() ; i++)
            H[s[i]-'a']++;
        
        for(i=0 ; i<t.size() ; i++){
            int x = --H[t[i]-'a'];
            if(x<0)
                return false;
        }
        
      return true;
    }
};