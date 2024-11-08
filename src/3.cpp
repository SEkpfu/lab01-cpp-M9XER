#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y;
    cout << "Введите значение x: ";
    cin >> x;
    y = pow(x, 9) - pow(x, 5) + pow(x, 3) - 2;
    cout << "y = " << y;

    return 0;
}
