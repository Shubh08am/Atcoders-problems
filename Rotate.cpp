#include <iostream>
using namespace std;
int main(){

int n;
cin>>n;

int a,b,c;
c = n%10;

a = n/100;

int d = n -  ( (a * 100) + c) ;

b = d/10;

int e = (b*100) + (c*10) + (a);
int f = (c*100) + (a*10) + (b);

int sum = n+e+f;

cout<<sum;

return 0;
}
