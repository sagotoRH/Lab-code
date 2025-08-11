#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the of rows: ";
    cin>>n;

    for(int i=01;i<=n;i++){

        for(int space=1;space<=n-i;space++){
            cout<<" ";
        }
        for(int star=1;star<=(2*i-1);star++){
            cout<<"*";
        }
    cout<<endl;
    }

return 0;

}
