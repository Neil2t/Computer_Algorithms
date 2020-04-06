#include <iostream>
#include<stdio.h>
using namespace std;

int main ()
{
int i, j,temp,pass=0,n=20;
int a[20] = {60, 88, 92, 57, 62, 79, 89, 40, 90, 98, 94, 97, 17,72, 46, 67, 27, 30, 43, 32};
cout <<"Input list ...\n";
for(i = 0; i<n; i++)
    {
       cout <<a[i]<<"\t";
    }
cout<<endl;
for(i = 0; i<n; i++)
     {
        for(j = i+1; j<n; j++)
        {
          if( ++pass and  a[j] < a[i])   //pass is trigger when the compare is done
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

    }
cout <<"Sorted Element List ...\n";
for(i = 0; i<n; i++)
    {
     cout <<a[i]<<"\t";
    }
cout<<"\n total compare :"<<pass<<endl;
return 0;
}
