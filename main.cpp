#include <mysqlx/xdevapi.h>
#include <iostream>

int main() {
    // Connect to the database
    mysqlx::Session session("127.0.0.1:3306", "root", "crypto123");

    // Execute a query
    auto result = session.sql("SELECT title, author FROM books WHERE genre = 'Novel'").execute();

    // Iterate over the result set and print the returned data
    for (mysqlx::Row row : result.fetchAll()) {
        std::cout << row[0] << " by " << row[1] << std::endl;
    }

    return 0;
}
