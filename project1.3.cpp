// File: project1.3.cpp
// Author: Ben Tuttle
// Date: 10/8/2023
// Description: This program uses the middle school procedure for finding a gcd
// MIT license


#include <iostream>
using namespace std;

int main() {
    int m, n; // Declare variables to store input values

    // Prompt the user to input two integers
    cout << "Enter the value of m: ";
    cin >> m;
    cout << "Enter the value of n: ";
    cin >> n;

    // Ensure both m and n are non-negative
    m = abs(m);
    n = abs(n);

    int gcd = 1; // Initialize GCD to 1

    // Check if both m and n are zero
    if (m == 0 && n == 0) {
        cout << "GCD(0, 0) is undefined." << endl;
    } else {
        // Find common divisors and update GCD
        for (int i = 1; i <= m && i <= n; i++) {
            if (m % i == 0 && n % i == 0) {
                gcd = i;
            }
        }

        // Display the calculated GCD
        cout << "GCD(" << m << ", " << n << ") is " << gcd << endl;
    }

    return 0;
}
