#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    double x, y;
    cout << "Введите n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "координаты точки " << i + 1 << ": \n";
        cout << "Введите x: ";
        cin >> x;
        cout << "Введите y: ";
        cin >> y;

        if ((x * x + y * y <= 36 && y >= 0) || (y >= 0 && y <= -x + 6 && y <= x + 6)) {
            count++;
        }
    }

    cout << "количество точек = " << count;
    return 0;
}
