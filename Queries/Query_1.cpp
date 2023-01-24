#include "Query.hpp"
#include <iostream>

std::string query1()
{
    std::string title, author, 
    publisher, ISBN,
    genre, date,
    available;

    std::cout << "Enter the title of the book: "; std::cin >> title;
    std::cout << "What is the author's name is: "; std::cin >> author;
    std::cout << "What is the publisher: "; std::cin >> publisher;
    std::cout << "ISBN: "; std::cin >> ISBN;
    std::cout << "The is the genre of the book: "; std::cin >> genre;
    std::cout << "The date of publishing(00-00-00): "; std::cin >> date; 
    available = "1";

    return "INSERT INTO books (title, author, publisher, ISBN, genre, publication_date, available) VALUES ('" 
    + title + "', '" + author + "', '" + publisher + "', '" + ISBN + "', '" + genre + "', '" + date + "', " + available + ")";
}
