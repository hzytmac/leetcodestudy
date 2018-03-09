class Solution {
public:
/*change the base, if n is the power of 4, then log4(n) is integer*/
    bool isPowerOfFour(int n) 
    {
        if((log10(n) / log10(4)) - int(log10(n) / log10(4)) == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
