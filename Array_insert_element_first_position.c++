#include<bits/stdc++.h>
using namespace std;
int main(){
int a[50],n,pos,key;
cout<<"Enter Number:";
cin>>n;
cout<<"Enter Element you want to insert";
cin>>key;
cout<<"Enter position:";
cin>>pos;
 if (pos <  0 || pos > n + 1) {  
        cout << "Invalid position" << endl;
 }


cout<<"Input Element";
for(int i=0;i<n;i++){
    cin>>a[i];
}

for(int i=n-1;i>=pos-1;i--){

    a[i+1]=a[i];
}
a[pos-1]=key;
n++;

cout<<"Print array";
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}


    return 0;
}