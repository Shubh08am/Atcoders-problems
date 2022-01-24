#include<iostream>
using namespace std; 

int main()
{
/* 
int t;
cin>> t ;
while (t--) 
*/

int n ;
int s= 0 ;
int  sum=0;

cin>>n;

int y = (4*n) - 1 ; 

int a[y];


int m;

for ( int i= 0 ; i<y; i++)
{	
	cin >> a[i];
}

for ( int i = n ; i>0 ; --i)
{	
	s= s + 4*i ;
}
	
for ( int i= 0 ; i<y; i++)
{	
	sum= sum + a[i];
}

m = s - sum ;
cout << m << endl;

return 0;

}
