#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<"the largest number"<<endl;
    }
    else if(b>a&&b>c){
        cout<<b<<"is the largest number"<<endl;
    }
    else{
        cout<<b<<"is the largest number"<<endl;
    }

}
