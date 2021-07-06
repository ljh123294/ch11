#include <utility>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<pair<string, int>> vp;
    int i;
    string s;
    while (cin >> s >> i)
    {
        vp.push_back(pair<string, int>(s, i));
        vp.push_back({s, i});
        vp.push_back(make_pair(s, i));
        pair<string, int> p(s, i);
        pair<string, int> p{s, i};

        vp.push_back(p);
        pair<string, int> p = {s, i};
        vp.push_back(p);
        vp.emplace_back(s, i);
    }
    for (const auto &item : vp)
    {
        cout << item.first << " " << item.second << endl;
    }

    return 0;
}
