#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
cout<<"array size: ";
cin>>n;
int a[100];
for(int i=0;i<n;i++){
    cin>>a[i];
}
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    cout<<"sum of all elements: "<<sum<<endl;

}
