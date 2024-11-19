// 5. **Question:** Write a C++ program to classify a triangle as equilateral, isosceles, or scalene based on the lengths of its sides.
#include <iostream>
using namespace std;
int main()
{
    int angle1,angle2,angle3;
    cout<<"Enter The First Angle :";
    cin>>angle1;
    
    cout<<"Enter The Second Angle :";
    cin>>angle2;
    
    cout<<"Enter The Third Angle :";
    cin>>angle3;
    
    if(angle1 == angle2 == angle3)
    {
        cout<<"the triangle as equilateral :";
    }
    else if(angle1 == angle2 || angle2 == angle3 || angle3 == angle1)
    {
        cout<<"it will classify it as isosceles :";
    }
    else
    {
        cout<<"it will classify it as scalene.";
    }
}