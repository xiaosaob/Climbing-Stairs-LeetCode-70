// You are climbing a stair case. It takes n steps to reach to the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

class Solution {
public:
    int climbStairs(int n) {
        if(n <= 1) return 1;
        int a = 1, b = 1, c;
        for(int i = 2; i <= n; ++i) {
            c = a+b;
            a = b;
            b = c;
        }
        return c;
    }
};
