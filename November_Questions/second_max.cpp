#include <iostream>
using namespace std;

int secondMax(int a, int b, int c) {
    if ((a >= b && a <= c) || (a >= c && a <= b)) return a;
    if ((b >= a && b <= c) || (b >= c && b <= a)) return b;
    return c;
}

int main() {
    int x, y, z;
    cout << "Enter three integer numbers: ";
    cin >> x >> y >> z;
    int res = secondMax(x, y, z);
    cout << "The second maximum number is: " << res << std::endl;
    return 0;
}
