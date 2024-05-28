class Solution {
public:
    int reverse(int x) {
        int last;
        int revnum=0;
        while(x!=0)
        {
            last=x%10;
            if((revnum > INT_MAX/10) || (revnum < INT_MIN/10) )
            {
                return 0;
            }
            revnum=(revnum*10)+last;
            x=x/10;
        }
        return revnum;
    }
};