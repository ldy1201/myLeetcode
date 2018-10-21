class Solution {
public:
    string longestPalindrome(string s) {
       const int len=s.size();
       int start,maxLen=0;
       if(len<=1)
           return s;
        for(int i=1;i<len;i++){
            int low=i-1,high=i;
            while(low>=0&&high<len&&s[low]==s[high]){
                low--;
                high++;
            }
            if(high-low-1>maxLen){
                start=low+1;
                maxLen=high-low-1;
            }
            low=i-1;high=i+1;
            while(low>=0&&high<len&&s[low]==s[high]){
                low--;
                high++;
            }
            if(high-low-1>maxLen){
                start=low+1;
                maxLen=high-low-1;
            }
        }
        return s.substr(start,maxLen);
    }
};