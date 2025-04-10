#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, z, S;

    // Введення значень x, y, z
    cout << "Введіть x, y, z: ";
    cin >> x >> y >> z;

    // Обчислення виразу
    S = pow(abs(y * z), abs(x)) - (y / M_PI) - sqrt(abs(x));

    // Виведення результату
    cout << "S = " << fixed << S << endl;

    return 0;
}
