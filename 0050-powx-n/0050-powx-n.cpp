class Solution {
public:
    double myPow(double x, int n) {
        long bForm = n;
        double ans = 1;
        if (n < 0)
        {
            bForm = -bForm;
            x = 1/x;
        }
        while (bForm > 0)
        {
            if (bForm % 2 == 1)
            {
                ans *= x;
            }
            x *= x;
            bForm /= 2;
        }
        return ans;
    }
    //ZAIBI
};