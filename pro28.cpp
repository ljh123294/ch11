#include <map>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    map<string, vector<int>> m{{"a", {1, 2, 3}}};
    auto iter = m.find("a");
}