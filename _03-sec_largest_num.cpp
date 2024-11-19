// 3. **Question:** Given three integers, write a C++ program that finds the second largest number without using any built-in functions.
#include <iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter first Number : ";
    cin>>n1;
    cout<<"Enter second Number : ";
    cin>>n2;
    cout<<"Enter third Number : ";
    cin>>n3;
     if(n1 > n2 && n1 < n3 && n3 > n2)
     {
         cout<<"The Second Largest Number Is : "<<n1;
     }
     else if(n2 > n1 && n2 < n3)
     {  
         cout<<"The Second Largest Number Is : "<<n2;  
     }
     else
     {
         cout<<"The Second Largest Number Is : "<<n3;
     }
     
}