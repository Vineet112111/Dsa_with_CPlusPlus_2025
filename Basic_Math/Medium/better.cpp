/*
    🟠 Approach: Better
    - Extract digits and reverse number using long int
    - Check for overflow after constructing the number
    - Violates the "no 64-bit int" rule in strict settings

    ✅ Time Complexity: O(log₁₀x)
    ✅ Space Complexity: O(1)
*/

#include <iostream>
#include <climits>
using namespace std;

int reverseBetter(int x) {
    long r = 0;

    while (x != 0) {
        int d = x % 10;
        x = x / 10;
        r = r * 10 + d;
        if (r > INT_MAX || r < INT_MIN) return 0;
    }

    return (int)r;
}

int main() {
    cout << reverseBetter(123) << endl;     // 321
    cout << reverseBetter(-123) << endl;    // -321
    cout << reverseBetter(1534236469) << endl; // 0 (overflow)
    return 0;
}


// ---------------------------------------------------
// 📌 Problem: Reverse Integer
// 🧠 Approach: Better
// 👨‍💻 Author: Vineet Kumar Yadav
// 📅 Created: 2025-07-09
// 🔗 GitHub: https://github.com/vineetiiits/Dsa_with_Cplusplus
// 🛡️ License: MIT
// ---------------------------------------------------
