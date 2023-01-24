#include "Queries/Query.hpp"

using namespace std;

int main() {
    try
    {
        // Connect to the database
        mysqlx::Session session("hostname", "username", "password");
        std::cout << "Connected to MySQL server!" << std::endl;

        //Operations
        int index = 0;
        std::cout << "Commands: \n";
        std::cout <<"1. Add a book\n";
        std::cout <<"2. Delete a Book\n";
        std::cout <<"3. Show the base\n";
        std::cout <<"Select by index: ";
        std::cin >> index;

        // Execute a query at index 1
        //add a book
        if(index == 1)
            session.sql(query1()).execute();
        //delete a book
        else if(index == 2) 
            session.sql(query2()).execute();
        //show table
        else
        {
            auto query = session.sql(query3()).execute();
            // Iterate through the result set and print the data to the terminal
            for (mysqlx::Row row : query.fetchAll()) 
            {
                for (unsigned int i = 0; i < row.colCount(); i++)
                    std::cout << row[i] << " "; // print the value of the current column
                std::cout << std::endl; //// move to the next line
            }
        }

    }

    //If not connected to the DB
    catch (const mysqlx::Error &err) {
        std::cout << "Error: " << err << std::endl;
    }
    return 0;
}