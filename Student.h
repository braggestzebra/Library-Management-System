#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string name;
    std::string id;

public:
    Student(std::string name, std::string id);
    std::string getName() const;
    std::string getId() const;
};

#endif