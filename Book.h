#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    bool isAvailable;

public:
    Book(std::string title, std::string author);
    std::string getTitle() const;
    std::string getAuthor() const;
    bool checkAvailability() const;
    void borrowBook();
    void returnBook();
};

#endif
