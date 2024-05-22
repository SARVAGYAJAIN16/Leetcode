class Solution {
public:
    bool isPalindrome(int x) {
        long revnum=0;
        int rev = x;
         
         while(x>0)
         {
            long last = x % 10;
            revnum = revnum*10 + last;
            x=x/10;
         }
         if(revnum==rev)
         {
            return true;
         }
         else{
            return false;
         }
    }
};