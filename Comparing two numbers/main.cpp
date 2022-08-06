#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

        if (a==b) {
            cout << "Both the Numbers are Equal";
        }
        else if (a>b) {
            cout << "a is greater than b";
        }
        else {
            cout << "b is greater than a";
        }
    return 0;
}
