#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//if arr=1,2,3,4,5.
//output: 15(sum) and 1(first element) 

int main(){
  
   int testcase;
  cin>>testcase;
  while(testcase--)
  {
    int n;
    cin>>n;

    //declaring dynamic 1D array
    int *arr=new int[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
  
  cout<<sum;
  cout<<arr[0];

  }
  



    return 0;


}


// ************************************Love by Mansi**********************************************