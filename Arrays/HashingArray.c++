#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter Number:";
    cin >> n;

    int arr[100];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // precompute
    int hash[13] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]] += 1;  // এই লাইনটি ভুল ছিল, "=" এর পরিবর্তে "+=" ব্যবহার করা উচিত
    }

    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        cout << hash[k] << endl;  // এই লাইনটি শুধুমাত্র প্রয়োজনীয় ইনপুট 'k' এর হ্যাশ মান দেখাবে
    }

    return 0;
}
