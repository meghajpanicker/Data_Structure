/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <math.h>
#include <iostream>

using namespace std;

int main()
{int n=7;
   
   int arr[]={7,10,4,3,6,5,2};
   cout<<arr[n-1]<<" ";
   int max=arr[n-1];
   
   for(int i=n-2;i>=0;i--)
   {   if(arr[i]>max)
         {max=arr[i];
             cout<< arr[i]<<" ";
         }
       
   }
   
   
   
   
   
   

    return 0;
}
