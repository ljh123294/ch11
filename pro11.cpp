#include <set>
#include <iostream>
#include <string>
#include "../ch7/Sales_data.h"

bool compareIsbn(const Sales_data &sales_data1, const Sales_data &sales_data2)
{
    return sales_data1.isbn() < sales_data2.isbn();
}

int main()
{
    using COMPAREISBN = bool (*)(const Sales_data &sales_data1, const Sales_data &sales_data2);
    // std::multiset<Sales_data, decltype(compareIsbn)*> bookstore(compareIsbn);
    std::multiset<Sales_data, COMPAREISBN> bookstore(compareIsbn);

    return 0;
}
