#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, key, pos, a[50];
    cout << "Enter Numbers: ";
    cin >> n;
    cout << "Enter Input numbers: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter number which I want to insert: ";
    cin >> key;
    cout << "Enter position: ";
    cin >> pos;
    
    if(pos<0 || pos>n+1){

        cout<<"Invalid"<<endl;
    }
    for(int i = n - 1; i >= pos - 1; i--) {
        a[i + 1] = a[i];
    }
    a[pos - 1] = key;
    n++;
    cout << "Print Array: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
