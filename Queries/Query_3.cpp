#include "Query.hpp"

std::string query3()
{
    //show Tables
    std::cout << "1. Books\n2.Patrons\n3.Checkouts\n4.Fines\n5.Show everything";
    std::cout << "What table you want to be shown: ";
    std::string a;
    std::cin >> a;

    if(a == "Books")
        return "SELECT books";
    else if(a == "Patrons")
        return "SELECT patrons";
    else if(a == "Checkouts")
        return "SELECT checkouts";
    else if(a == "fines")
        return "SELECT fines";
    else
        return "SELECT *";
}