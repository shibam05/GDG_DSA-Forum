#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive integer (n): ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid input";
        return -1;
    }
    int prev = 1;
    vector<int> res;
    for (int i = 1; i < n+1; i++)
    {
        int curr = prev * i;
        if (curr > n)
            break;
        res.push_back(curr);
        prev = i;
    }
    for (int num : res)
        cout << num << " ";
    return 0;
}
