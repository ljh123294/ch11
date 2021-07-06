#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> vs;
    string s;
    while (cin >> s)
    {
        if (find(vs.begin(), vs.end(), s) == vs.end())
            vs.push_back(s);
    }
    for (const auto &s : vs)
        cout << s << " ";
    cout << endl;
}