
#include <iostream>

using namespace std;

// the idea is that if the price is increasing
// the difference is positive or else its negative 
// so from 1-> 2->3 (example) we get 2-1=1 and 3-2=1 (total 2)
// which is same as 3-1=2 

int main()
{
   int n=6;
   int arr[]={1,5,3,1,2,8};
 
   int maxdif=0;
   int diff=0;
   
   for(int i=1;i<n;i++)
   {
    diff=arr[i]-arr[i-1];
    if(diff>0)
    {
        maxdif=maxdif+diff;
    }
   }
   
  
  cout<<maxdif;
  

    return 0;
}
