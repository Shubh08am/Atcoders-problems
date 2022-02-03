#include <bits/stdc++.h>
using namespace std;

int main()
{
int r,c;
cin >>r>>c;

int a[r][c];
int i,j,ii,jj;

for (i = 0; i <r; i++)
{ 
        for (j = 0; j <c; j++)	
          {
               cin >> a[i][j];}}

              // cout<<endl;
               swap(r,c);
for (ii = 0; ii <r; ii++)
{ 
        for (jj = 0; jj<c; jj++)	
          {
               cout<< a[jj][ii]<<" ";}
               cout<<endl;
               }

return 0;
}
