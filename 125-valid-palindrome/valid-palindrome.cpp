class Solution {
public:
    bool isPalindrome(string s) {
       string result="";
        for (char ch:s){
            if(isalnum(ch)){
                result+=tolower(ch);
            }
        }
        string result1=result;
        reverse(result1.begin(),result1.end());
        if(result==result1){
            return true;
        }
        return false;



        
    }
};