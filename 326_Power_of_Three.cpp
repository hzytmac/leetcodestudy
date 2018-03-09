class Solution {
public:
/*change the base, if n is the power of 3, then log3(n) is integer*/
    bool isPowerOfThree(int n) 
    {
        if((log10(n) / log10(3)) - int(log10(n) / log10(3)) == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
