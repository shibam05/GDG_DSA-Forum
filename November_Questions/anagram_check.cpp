#include <iostream>
#include<algorithm>
using namespace std;

bool isAnagram(string s1, string s2) {
    if (s1.length() != s2.length()) return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

int main() {
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;

    if (isAnagram(s1, s2))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
