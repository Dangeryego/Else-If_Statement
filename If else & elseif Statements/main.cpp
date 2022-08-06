#include <iostream>

using namespace std;
const int target {55};
int main()
{
    cout << "Enter an Integer please  ";
    int num;
    cin >> num;
    cout << "The target number is " << target << endl;

    if (num < 55) {
        cout << "\n" << num << " is less than " << target <<endl;
        int dif {target - num};
        cout << num << " is " << dif << " less than the target" << endl;
    }
    else if (num > 55) {
        cout << "\n" << num << " is Greater than " << target <<endl;
        int dif {num - target};
        cout << num << " is " << dif << " greater than the target" << endl;
    }
    else {
        cout << "Your entered number is equal to the Target number . ." << endl;
        cout << "                                                   | " << endl;
        cout << "                                                  ---";
    }

    return 0;
}
