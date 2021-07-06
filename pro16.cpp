#include <map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    map<int, string> m = {{1, "a"}, {2, "b"}};
    auto iter = m.begin();
    iter->second = "aa";
}