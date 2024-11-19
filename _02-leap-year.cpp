// 1. **Question:** Write a C++ program that checks if a given year is a leap year, considering all edge cases, including century years.


#include <iostream>
using namespace std;
int main()
{
    int EnterYear;
    cout<<"Enter The Any Year : "<<endl;
    cin>>EnterYear;
    
    if(EnterYear%4 == 0)
    {
         if(EnterYear%100 == 0)
         {
             cout<<EnterYear<<" Is Leap Year :";
         }
         else
         {
             cout<<EnterYear<<" Is Not Leap Year :";
         }
    }    
    else
    {
         cout<<EnterYear<<" Is Not Leap Year :";
    }
}