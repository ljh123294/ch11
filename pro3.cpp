#include <map>
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
// 由于C++在标准库STL中也定义了ispunct函数，定义于std命名空间，且是一个模板函数。由于程序直接通过using namespace std导入了std命名空间，程序默认使用STL库中的ispunct，导致编译器直接使用了未特化的模板函数，并未使用cctype库中的此函数，因此编译无法通过。

int main()
{
    map<string, size_t> word_count;
    string word;
    while (cin >> word)
    {
        word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
        for_each(word.begin(), word.end(), [](char &c)
                 { c = tolower(c); });
        ++word_count[word];
    }
    for (const auto &w : word_count)
    {
        cout << w.first << "," << w.second << endl;
    }
    return 0;
}