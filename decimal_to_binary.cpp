#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Decimal Number( Ex: 4152 ) : ";
    cin>>n;
    int ans =0;
    int power =1;
    while(n!=0){
       int r = n%2;
       ans+=r*power;
       power*=10;
       n/=2;
}
cout<<"Binary Number : "<<ans;
}