#include <iostream>
using namespace std;

bool num_at_square_end(int n)
{
    int last_digit = n % 10;
    if (last_digit != 0 && last_digit != 1 && last_digit != 5 && last_digit != 6)
        return false;

    // Check length of num
    if (n % 100 == 0 && n % 10 >= 1) // length of num = 2
    {
        if ((n * n) % 100 == n)
        {
            return true;
        }
    }
    else // length of num = 3
    {
        if ((n * n) % 1000 == n)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int n;      // RANGE: Consider the range to be 10->999
    cout << "Enter a number between 10 and 999: ";
    cin >> n;
    if (n < 10 || n > 999)
    {
        cout << "Number out of range!" << endl;
        return 1;
    }

    if (num_at_square_end(n))
    {
        cout << "Yes" << n << " exists at the very end of its squared value" << endl;
    }
    else
    {
        cout << n << " does not exist at the very end of its squared value" << endl;
    }

    return 0;
}