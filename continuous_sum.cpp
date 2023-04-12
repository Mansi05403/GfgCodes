//function to find continuous sum whih adds upto a given number
//two pointer lenge
//ptr1 is fix ptr2 is moving
//first element hi equal hai sum ke then return 1st position
//warna ptr2+1 ke element ke saath first element add kro 
//equal aaya toh return the poition 
//agar bada aaya sum toh ptr1 ko aage badhao aur sum se subtract kro
#include<vector>
#include<iostream>
using namespace std;
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
  
        int ptr1=0,ptr2=0;
        long long sum=arr[0];
        if(sum==s)
        return{1,1};
        while(ptr2<n-1)
        {
            if(sum+ arr[ptr2+1] <=s)
            {
                sum+=arr[ptr2+1];
                ptr2++;
            }
            else
            {
                sum-=arr[ptr1];
                ptr1++;
            }
            
            if(sum==s)
            {
                return {ptr1+1,ptr2+1};
            }
        }
        return {-1};
    }
};