#include<iostream>
using namespace std;

void armstrong(int n){
    int ans=0;
    int temp=n;
    while(n>0){
        int rem = n%10;
        ans=ans+(rem*rem*rem);
        n/=10;
    }
    if(temp==ans){
        cout<<temp<<"is an armstrong number"<<endl;
    }
    else{
        cout<<temp<<"is not an armstrong number"<<endl;
    }
    
}
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    armstrong(n);
    
}