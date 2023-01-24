#include <mysqlx/xdevapi.h>
#include "Queries/Query.hpp"
#include <iostream>

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
        if(index == 1)
             auto query = session.sql(query1()).execute();

        else if(index == 2) 
            auto query = session.sql(query2()).execute();
    
        // Iterate over the result set and print the returned data
        for (mysqlx::Row row : result.fetchAll()) {
            std::cout << row[0] << " by " << row[1] << std::endl;
        }
    }

    //If not connected to the DB
    catch (const mysqlx::Error &err) {
        std::cout << "Error: " << err << std::endl;
    }
    return 0;
}