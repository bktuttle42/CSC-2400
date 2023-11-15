// File: project1.1.cpp
// Author: Ben Tuttle
// Date: 10/8/2023
// Description: This C++ program calculates the greatest common divisor (GCD) and Bézout coefficients for two input integers m and n using the extended Euclidean algorithm.
// MIT license

#include <iostream>
using namespace std;

// Function to calculate GCD and Bézout coefficients
int extGCD(int m, int n, int &x, int &y);

int main()
{
    int m, n;
    int x, y;

    cout << "What is m?" << endl;
    cin >> m;
    cout << "What is n?" << endl;
    cin >> n;

    // Check if both m and n are zero
    if (m == 0 && n == 0) {
        cout << "GCD(0, 0) is undefined." << endl;
    } else {
        // Calculate GCD and Bézout coefficients
        int gcd = extGCD(m, n, x, y);
        cout << "GCD(" << m << ", " << n << ") = " << gcd << endl;
        cout << "x: " << x << ", y: " << y << endl;
    }

    return 0;
}

// Extended Euclidean algorithm to calculate GCD and Bézout coefficients
int extGCD(int m, int n, int &x, int &y)
{
    if (n == 0)
    {
        // Base case: GCD is reached, set Bézout coefficients
        x = 1;
        y = 0;
        return abs(m); // Return absolute value of m
    }

    // Recursive call to calculate GCD and Bézout coefficients
    int x1, y1;
    int gcd = extGCD(n, m % n, x1, y1);

    // Update Bézout coefficients
    x = y1;
    y = x1 - (m / n) * y1;

    return gcd;
}
