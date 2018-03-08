class Solution {
public:
    int reverse(int x) {
        int result = 0;
        while(x)
        {
            auto prev=result;
            result = result * 10;
            result = result + (x % 10);
            if (result / 10 != prev) 
            {
                result = 0;
                break;
            }
            x /= 10;
        }
        return result;
    }
};