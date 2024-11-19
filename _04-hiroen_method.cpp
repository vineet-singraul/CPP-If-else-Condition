// 4. **Question:** Write a C++ program that calculates the roots of a quadratic equation using the discriminant method. Use `if-else` to handle the cases when the roots are real, equal, or imaginary.
#include <iostream>
using namespace std;
int main()
{
    int a,b,c,discriminant;
    // Input coefficients a, b, and c
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;
    
    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;
    
    if(discriminant < 0)
    {
        cout << "Roots are real and different." << endl;
        cout << "You would calculate two distinct real roots." << endl;
    }
    else if (discriminant == 0) {
        // Roots are real and equal
        cout << "Roots are real and the same." << endl;
        cout << "You would calculate one real root." << endl;
    }
    else {
        // Roots are complex (imaginary)
        cout << "Roots are complex and different." << endl;
        cout << "You would calculate two complex roots." << endl;
    }
}
