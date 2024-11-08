#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double y, z;
    cout << "Введите y: ";
    cin >> y;
    if (y >= 0 && y <= 3) {
        z = 1 + abs(y + 1) / (y + 2);
    } else if (y > 3) {
        z = pow(y, 4) + 1;
    } else if (y < 0) {
        z = sqrt(abs(sin(M_PI * y)));
    }
    cout << "z = " << z;
    return 0;
}
