class Solution {
public:
    int reverse(int x) {
        int result = 0;
        while(x) /* x!=0
        {
            auto prev=result; /*store the result*/
            result = result * 10; /*update the result*/
            result = result + (x % 10); /*update the result,move the last number to the front*/
            if (result / 10 != prev)  /*check overflow*/
            {
                result = 0;
                break;
            }
            x /= 10; /*take out the first number*/
        }
        return result;
    }
};
