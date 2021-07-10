

#include <iostream>
#include<math.h>

// the idea is to check iand i-1 is alternating or not (even, odd ) or (odd,even) 
// if yes increament count otherwise reset count to 1

using namespace std;

int main()
{
  int n=5;
    int arr[]={10,12,14,7,8};
    int count=0;
    int maxcount=0;
    for(int i=1;i<n;i++)
    {
        if((arr[i-1]%2==0 and arr[i]%2!=0) or (arr[i-1]%2!=0 and arr[i]%2==0))
        {
            count++;
            
            maxcount=max(maxcount,count);
        }
        else
        {
            count=1;
        }
    }
   cout<<maxcount;
    return 0;
}
