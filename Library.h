#ifndef LIBRARY_H
#define LIBRARY_H

#include "Student.h"
#include "Book.h"
#include "AVEquipment.h"
#include "StudyRoom.h"
#include <vector>

class Library {
private:
    std::vector<Book> books;
    std::vector<AVEquipment> avEquipments;
    std::vector<StudyRoom> studyRooms;
    std::vector<Student> students;

public:
    Library();
    void displayMenu();
    void borrowBook();
    void requestBook();
    void rentAVEquipment();
    void rentStudyRoom();
};

#endif
