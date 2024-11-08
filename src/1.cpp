#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x1, y1, x2, y2, s1, s2, P, S;
    cout << "Введите первую вершину: ";
    cin >> x1;
    cin >> y1;
    cout << "Введите вторую вершину: ";
    cin >> x2;
    cin >> y2;
    s1 = abs(x2 - x1);
    s2 = abs(y2 - y1);
    P = 2 * (s1 + s2);
    S = s1 * s2;
    cout << "P: " << P;
    cout << "S: " << S;
    return 0;
}
