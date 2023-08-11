#include<iostream>
using namespace std;

int check_palindrome(int n){
    int ans = 0;
    while(n>0){
        int rem = n%10;
        ans=ans*10+rem;
        n/=10;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    if(n==check_palindrome(n)){
        cout<<n<<"is palindrome"<<endl;
    }
    else{
        cout<<n<<"is not palindrome"<<endl;
    }

}