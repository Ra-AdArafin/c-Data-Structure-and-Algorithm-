#include<bits/stdc++.h>
using namespace std;
int main(){
char ch;
cin>>ch;
if(ch>='a' && ch<='z'){
    cout<<"This is Lower case Letter:"<<ch<<endl;
}
else if(ch>='A' && ch<='Z'){
    cout<<"This is Upper case Letter:"<<ch<<endl;
}
else if( ch>='0'&&ch<='9'){
    cout<<"This is Number :"<<ch<<endl;

}


    return 0;
}