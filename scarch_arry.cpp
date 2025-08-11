#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"arry size: ";
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
int item,f=0;
cout<<"scarch arry: ";
cin>>item;
for(int i=0;i<n;i++){
        if(item==a[i]){
                f++;
    }
}
    if(f==0){
        cout<<"item not foud!"<<endl;
    }
    else{
        cout<<"item found: "<<item<<endl;
    }


}
