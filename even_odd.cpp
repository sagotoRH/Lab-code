#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"array size: "<<endl;
    cin>>n;

int arr[100];
int even=0,odd=0;
for(int i=0;i<=n-1;i++){
    cin>>arr[i];
}
    for(int i=0;i<=n-1;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }

cout<<"even: "<<even<<endl;
cout<<"odd: "<<odd<<endl;

}
