// 12. **Question:** Write a C++ program that accepts a 4-digit pin code as input and determines if it is a valid pin based on custom criteria (e.g., first digit cannot be 0, second digit must be even, etc.).
#include <iostream>
using namespace std;
int main()
{
    int pin ;
    cout<<"Enter The four-digite Pin : ";
    cin>>pin;
    
    if(pin < 1000 && pin > 9999)
    {
        cout<<"The Pin Only You Can Give In Four Digite:"
        <<endl;
    }
    
    int pin1 = pin/1000;
    int pin2 = (pin%1000)/100;
    if(pin1 != 0 && pin2%2==0)
    {
        cout<<"Pin Is Valied All the Condition :";
    }
    else{
        cout<<"Pin Is Invailed hare :";
    }
}