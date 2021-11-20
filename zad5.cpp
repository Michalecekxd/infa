/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n=7;
    int T[n];
int i=1;
int licznik=0;

do
{
  if(i==1 || i==2)
  T[i]=1;
  else 
  T[i]=T[i-1]+T[i-2];
  if(T[i]%2!=0)
  licznik=licznik+1;
 i++;
      
  }

while (i<=n);

cout<<licznik;
}

