#include<iostream>
#include<cmath>
using namespace std;

bool prime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        return true;
    }
    else{
        return false;
    }
}
bool prime1(int n){
    int count=0;
    for(int i=1;i<sqrt(n);i++){

        if(n%i==0){
            count++;
            if((n/i)!=i){
                count++;
            }
        }
    }
    if(count==2){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(prime1(n)) cout<<n<<"is a prime number"<<endl;
    else{
        cout<<n<<"is not a prime number"<<endl;
    }
}