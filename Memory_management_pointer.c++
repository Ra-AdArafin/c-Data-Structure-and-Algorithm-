 #include <bits/stdc++.h>
using namespace std;

int main() {
    // Initialize the 2D array with the provided values
    int a[4][4] = { 
        {10, 20, 30, 40}, 
        {50, 60, 70, 80}, 
        {90, 100, 110, 120}, 
        {130, 140, 150, 160} 
    };

    // Pointer p points to the first element of the array
    int *p = &a[0][0];
    cout << p << endl;

    // Pointer k points to the second element of the first row
    int *k = (*a + 1);
    cout << k << endl;

    // Dereferencing k to get the value
    cout << *k << endl;

    // Getting the address of the second row
    cout << &a[1] + 1 << endl;

    // Dereferencing to get the first element of the third row
    cout << *(*(&a[1] + 1)) << endl;

    // First element of the array
    cout << *(*a) << endl;

    // Address of the second row
    cout << (a + 1) << endl;

    // Element in the third row and third column
    cout << *(*(a + 1) + 2) << endl;

    // Second element of the first row
    cout << *(*a + 1) << endl;

    // Address of the second element of the first row
    cout << (*a + 1) << endl;

    // Corrected line to print the value 110
    cout << *(*(a + 2) + 2) << endl;

    // Printing addresses
    cout << "Print Addresses" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << (*(a + i) + j) << endl;
        }
    }

    // Printing values
    cout << "Print Values" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << *(*(a + i) + j) << endl;
        }
    }

    return 0;
}
