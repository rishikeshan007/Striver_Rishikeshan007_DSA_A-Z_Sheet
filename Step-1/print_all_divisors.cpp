#include<iostream>
#include<cmath>
using namespace std;

void all_divisors(int n){

    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }
}
void all_divisors1(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<endl;
        }
        if((n/i)!=i){
            cout<<(n/i)<<endl;
        }
    }
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    all_divisors1(n);
}