#include<iostream>
#include<algorithm>
using namespace std;

//Normal method
int gcd(int a,int b){
    int hcf =-1;

    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){

            hcf=i;
        }
    }
    return hcf;

}

//using Euclidean algorithm
int gcd_hcf(int a,int b){

    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0) return b;
    else{
        return a;
    }
}
int main(){
    int a;
    cout<<"enter value a"<<endl;
    cin>>a;
    int b;
    cout<<"enter value b"<<endl;
    cin>>b;
    cout<<"The gcd or hcf value is:"<<gcd_hcf(a,b)<<endl;
}