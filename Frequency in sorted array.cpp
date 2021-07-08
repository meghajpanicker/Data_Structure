
#include <math.h>
#include <iostream>

using namespace std;

int
main ()
{  int arr[]={40,50,50,50};
   int n=4;
   int count=1;
   for(int i=0;i<n;i++)
   {
       if(arr[i]!=arr[i+1])
       {
           cout<<arr[i]<<":"<<count<<endl;
           count=1;
       }
       else
       {
           count++;
       }
   }
   
  
  
  
  
  
  
  
  
  
  
  
  
 
  return 0;
}
