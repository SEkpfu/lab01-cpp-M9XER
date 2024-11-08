#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    (b + c > 100 ? cout << fmin(a, fmin(b, c)) : cout << pow(a - 10, 2) << " " << pow(b - 10, 2) << " " << pow(c - 10, 2));
    return 0;
}
