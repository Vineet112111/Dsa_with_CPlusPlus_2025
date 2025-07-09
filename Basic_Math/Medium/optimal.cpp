/*
    ✅ Approach: Optimal (no long, fully 32-bit safe)
    - Extract digits one by one
    - Before multiplying, check if reverse will overflow
    - Satisfies all constraints without using 64-bit integers

    ✅ Time Complexity: O(log₁₀x)
    ✅ Space Complexity: O(1)
*/

#include <iostream>
#include <climits>
using namespace std;

int reverseOptimal(int x) {
    int rev = 0;

    while (x != 0) {
        int digit = x % 10;
        x /= 10;

        // Overflow check
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) return 0;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) return 0;

        rev = rev * 10 + digit;
    }

    return rev;
}

int main() {
    cout << reverseOptimal(123) << endl;     // 321
    cout << reverseOptimal(-123) << endl;    // -321
    cout << reverseOptimal(1534236469) << endl; // 0 (overflow)
    return 0;
}
