#include<iostream>
#include<cmath>
using namespace std;

int count_digits(int n){
    int count=0;
    while(n>0){
        count++;
        n/=10;
    }
    return count;
}



int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int ans = count_digits(n);
    cout<<"The No.of digits is:"<<ans<<endl;

    //Another way

    int cnt = (int)(log10(n)+1);
    cout<<cnt;
}