#include<iostream>
#include<string>
using namespace std; 

int main()
{
/* 
int t;
cin>> t ;
while (t--) 
*/

string m,s;
cin>>s;

int c,d;
cin>>c>>d;
/*
for ( int i= 0 ; i<s.size(); i++)
{	
	int temp = s[c-1];
	s[c-1] = s[d-1];
	s[d-1]= temp;
	
	cout << s;
}
	
//cout << m ;	

//cout << b;

*/

swap(s[c-1], s[d-1]);
cout << s;
return 0;

}
