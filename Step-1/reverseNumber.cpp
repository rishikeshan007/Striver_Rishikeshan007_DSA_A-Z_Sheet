#include<iostream>
using namespace std;

int reverse_number(int n){
    int ans = 0;
    while(n>0){
        int rem = n%10;
        ans = ans*10+rem;
        n/=10;
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int ans = reverse_number(n);
    cout<<"The reversed number is:"<<ans;
}