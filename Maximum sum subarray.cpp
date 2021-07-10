

#include <iostream>
#include<math.h>

using namespace std;

// the idea is that we keep adding and finding the maxsum
// out of all the sum occuring, and if the sum goes negative nullifying the positives (and beyond)
// the we reset the sum as sum=0, and start again 

int main()
{
    int n=7;
    int arr[]={-5,1,-2,3,-1,2,-2};
    int sum=0;
    int maxsum=0;
    for(int i=0;i<n;i++)
    {  sum=sum+arr[i];
       if(sum<0)
       {
           sum=0;
       }
       else
       {
           maxsum=max(sum,maxsum);
       }
        
    }
    
    cout<<maxsum;
    return 0;
}
