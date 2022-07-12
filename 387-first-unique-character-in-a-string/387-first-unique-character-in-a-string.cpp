class Solution {
public:
    int firstUniqChar(string s) {
        int H[26]={0} , i;
        
        for(i=0 ; s[i]!='\0' ; i++)
            H[s[i]-'a']+= 1;
        
        for(i=0 ; s[i]!='\0' ; i++)
            if(H[s[i]-'a']==1)
                return i;
        
        return -1;
    }
};