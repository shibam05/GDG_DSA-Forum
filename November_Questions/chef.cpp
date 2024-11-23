#include <iostream>
using namespace std;

int Max_chocolates(int x, int y, int z)
{
    int ans = -1;
    if (x <= 0 || y <= 0 || z <= 0)
        cout << "Invalid inputs" << endl;
    else
    {
        ans = int((x * 5 + y * 10) / z);
    }
    return ans;
}

int main()
{
    int x, y, z;
    cout << "Enter three integer numbers ->" << endl;
    cout << "x : ";
    cin >> x;
    cout << "y : ";
    cin >> y;
    cout << "z : ";
    cin >> z;

    int res = Max_chocolates(x, y, z);
    if (res == -1)
    {
        cout << " " << endl;
        return 0;
    }
    cout << "The maximum number of chocolates Chef can buy for Chefina is : " << res << endl;
    return 0;
}
