#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter Binary Number( Ex: 10101 ) : ";
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
       int r = n%10;
       ans+=r*pow(2,i);
       i+=1;
       n/=10;
}
cout<<"Decimal Number : "<<ans;
}