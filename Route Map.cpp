#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int y = n+1;
	int x = m+1;
	
	string a[y], b[x];
	
	for (int i = 1; i <y; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <x; i++)
	{
		cin >> b[i];
	}
	
	for (int i = 1, j = 1; i <y; i++)
	{
		if (a[i] == b[j])
		{
			j++;
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	return 0;
} 
