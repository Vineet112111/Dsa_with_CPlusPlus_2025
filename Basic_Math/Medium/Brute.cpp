/*
    🔴 Approach: Brute Force
    - Convert integer to string
    - Reverse the string
    - Convert back to integer
    - Doesn’t handle overflow cleanly

    ✅ Time Complexity: O(n), where n is number of digits in x
    ✅ Space Complexity: O(n), for string storage
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int reverseBrute(int x) {
    bool isNegative = (x < 0);
    string s = to_string(abs(x));
    std::reverse(s.begin(), s.end());

    try {
        int reversed = stoi(s);
        return isNegative ? -reversed : reversed;
    } catch (...) {
        return 0; // Overflow
    }
}

int main() {
    cout << reverseBrute(123) << endl;     // 321
    cout << reverseBrute(-123) << endl;    // -321
    cout << reverseBrute(1534236469) << endl; // 0 (overflow)
    return 0;
}
