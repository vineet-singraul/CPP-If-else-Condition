// write the program which find the define number like 145 ko 1,4,5  and 133 ko ,1,1,3 :
#include <iostream>
using namespace std;
int main()
{
    int strongnumber,  reminderNumber, reminderNumber1, reminderNumber2;
    cout<<"Enter The Strong Number : ";
    cin>>strongnumber;
     
    cout<<"The First Number Is : "<< (strongnumber/100)<<endl;
    cout<<"The Second Number Is : "<< ((strongnumber%100)/10)<<endl;
    cout<<"The Thired Number Is : "<< (strongnumber%10)<<endl;
}