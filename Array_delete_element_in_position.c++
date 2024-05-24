 #include<bits/stdc++.h>
using namespace std;

int main() {
    int a[50], n, pos, data;

    cout << "Enter how numbers input: ";
    cin >> n;

    cout << "Enter input Numbers: ";
    for (int i = 0; i < n; i++) { // Fixed missing parenthesis
        cin >> a[i];
    }

    cout << "Enter position you want to delete data: ";
    cin >> pos;

    cout << "Which data you want to delete: ";
    cin >> data;

     
    for (int i = pos - 1; i < n - 1; i++) {  
        a[i] = a[i + 1];
    }
    n--;

       

    cout << "print Array: ";

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
