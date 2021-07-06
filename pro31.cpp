#include <map>
#include <string>
#include <iostream>

int main()
{
    std::multimap<std::string, std::string> m1 = {{"aa", "abc"}, {"aa", "bcd"}, {"aa", "cde"}};
    auto iter = m1.find("a");
    if (iter != m1.end())
        m1.erase(iter);
    for (const auto &p : m1)
        std::cout << p.first << " " << p.second << std::endl;

    return 0;
}
