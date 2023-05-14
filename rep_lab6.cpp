//----------main area-----------
#include <iostream>
//main-1:
#include <cmath>
//main-2:
using namespace std;
//main-3:

//main-4: change 1 in second
int main() {
    double a, b, c, discriminant, root1, root2;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b * b - 4 * a * c;
    
    //----------second area-----------
    if (discriminant > 0) {
        //second-1: change 1 in second
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
        //second-2: change 2 in second
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        cout << "Roots are real and same." << endl;
        cout << "Root 1 = Root 2 = " << root1 << endl;
        //second-3: change 3 in second
    } else {
        cout << "Roots are complex and different." << endl;
        cout << "Root 1 = (-" << b << " + i" << sqrt(-discriminant) << ") / " << 2*a << endl;
        cout << "Root 2 = (-" << b << " - i" << sqrt(-discriminant) << ") / " << 2*a << endl;
    }
    //second-4

//----------third area-----------
char op;
    double num1, num2;
    cout << "Enter operator either + or - or * or /: ";
    cin >> op;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    //third-1
    switch (op) {
        case '+':
            cout << num1 + num2;
            break;
            //third-2
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            cout << num1 / num2;
            break;
            //third-3
        default:
            cout << "Error! operator is not correct";
            break;
    }
    //third-4: change 2 in second

    return 0;
}