#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a[50],key,pos;
cout<<"Enter Number:";
cin>>n;
cout<<"Enter key:";
cin>>key;
cout<<"Enter position:";
cin>>pos;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=n-1;i>=pos-1;i--)

{
   a[i+1]=a[i];

}
a[pos-1]=key;

n++;
if(pos<1  || pos>n++){

    cout<<"Invalid";
}

cout<<"Printfing Elements:";
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

    return 0;
}