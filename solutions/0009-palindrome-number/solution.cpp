class Solution {
public:
    bool isPalindrome(int n) {
        if (n < 0) {
            return false;
        }
        int original = n;
        long long reverse = 0;
        while (n > 0) {
            int last_digit = n % 10;
            reverse = (reverse * 10) + last_digit;
            n = n / 10;
        }
        
        return original == reverse;
    }
};

