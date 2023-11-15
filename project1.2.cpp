// File: project1.2.cpp
// Author: Ben Tuttle
// Date: 10/8/2023
// Description: This program uses consecutive integer for finding gcd
// MIT license



#include <iostream>
#include <cstdlib> // For the abs() function
using namespace std;

int main() {
    int m, n; // Declare variables to store input values
    int x, gcd = 1; // Declare variables for GCD calculation
    
    // Prompt the user to input two integers
    cout << "Enter the value of m: ";
    cin >> m;
    cout << "Enter the value of n: ";
    cin >> n;
    
    // Check if both m and n are zero
    if (m == 0 && n == 0) {
        cout << "GCD(0, 0) is undefined." << endl;
    } else {
        // Ensure m and n are non-negative
        m = abs(m);
        n = abs(n);

        // Calculate GCD using the Euclidean algorithm
        if (m == 0 || n == 0) {
            gcd = (m == 0) ? n : m;
        } else {
            if (m > n)
                x = m;
            else
                x = n;

            // Find GCD using a loop
            for (int i = x; i >= 1; i--) {
                if (m % i == 0 && n % i == 0) {
                    gcd = i;
                    break;
                }
            }
        }
        
        // Display the calculated GCD
        cout << "GCD(" << m << ", " << n << ") is " << gcd << endl;
    }

    return 0;
}
