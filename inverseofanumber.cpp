#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter any number to find the inverse of -: ";
    cin >> n;

    // Checking if n is not equal to 10 and finding the inverse
    while (n != 10) {
        double inverse = 1.0 / n;
        cout << "The inverse of " << n << " is: " << inverse << endl;

        // Taking new input to update the value of n
        cout << "Enter any number to find the inverse of -: ";
        cin >> n;
    }

    return 0;
}

