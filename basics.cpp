#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "Even: true" << endl;
    } else {
        cout << "Even: false" << endl;
    }

    return 0;
}
