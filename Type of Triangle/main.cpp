#include <iostream>

using namespace std;

int main()
{
    int side1, side2, side3;
    cout << "Input three sides of Triangle";
    cin >> side1 >> side2 >>side3;

        if (side1 == side2 && side2 == side3) {
            cout << "This is an Equilateral Triangle.\n";
        }
        else if (side1 == side2||side1 == side3||side2 == side3) {
            cout << "This is an Isosceles Triangle.\n";
        }
        else {
            cout <<"This is an Scalene Triangle.\n";
        }
    return 0;
}
