class Solution {
public:
    bool isPalindrome(int x) {
        int last;
        long revnum=0;
        int dup=x;
        while(x>0)
        {
            last=x%10;
            revnum=(revnum*10)+last;
            x=x/10;
        }
        if(revnum == dup) return true;
        else return false;
    }
};