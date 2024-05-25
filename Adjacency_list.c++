#include<bits/stdc++.h>
using namespace std;
int main( ){
int a[2][3];
cout<<"Input Number:" <<endl;

for(int i=0;i<2;i++){
  for(int j=0;j<3;j++){

    cin>>a[i][j];
  }

}

cout<<"print Array:" << endl;

for(int i=0;i<2;i++){
for(int j=0;j<3;j++){
    cout<<a[i][j]<<" ";

}
cout<<endl;



}


    return 0;
}