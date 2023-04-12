#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//input: 3 5
//output:5 3
//here we swap numbers using pointer and reference

int *temp;
int tem;
void swap(int *a,int *b)  //using pointer
{
   int  temp=*a;
   *a=*b;
   *b=temp;
}
void swap(int &a,int &b) //using reference
{
    tem=a;
    a=b;
    b=tem;
}
int main(){
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    int a,b;
    cin>>a>>b;

    //swapping by reference
    swap(a,b); //calling me reference normal
    cout<<a<<" "<<b;

    //swapping by pointers
    swap(&a,&b); //calling me pointer me reference pass
    cout<<a<<" "<<b;
    cout<<a<<" "<<b;
    
  }
    return 0;


}


// ************************************Love by Mansi**********************************************