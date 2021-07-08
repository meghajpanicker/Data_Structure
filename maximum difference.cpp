/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <math.h>
#include <iostream>

using namespace std;

int
main ()
{
  int n = 7;
  int arr[] = { 2, 3, 10, 6, 4, 8, 1 };
  int res = arr[1] - arr[0];
  int minval = arr[0];

//   inside the loop
// start with minimum value as arr[0] and difference as arr[1]-arr[0]
// update the difference wrt to the minimum value
// keep updating the minimum value itself

  for (int i = 0; i < n; i++)
    {
      res = max (res, arr[i] - minval);
      minval = min (minval, arr[i]);
    }

  cout << res;

  return 0;
}
