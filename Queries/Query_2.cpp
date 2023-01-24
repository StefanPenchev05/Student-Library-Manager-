#include "Query.hpp"

std::string query2()
{
    //delete by index
    int id = 0;
    //delete by title
    std::string title;
    char a;
    std::cout << "Delete by index or title [i or t]: ";
    std::cin >> a;

    //deleting
    switch(a)
    {
        case 'i':
            return "DELETE FROM books WHERE book_id = " + id;
            break;
        case 't':
            return "DELETE FROM books WHERE title = " + title;
            break;
        default:
            return "";
            break;
    }
}