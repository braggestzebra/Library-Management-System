#ifndef STUDYROOM_H
#define STUDYROOM_H

#include <string>

class StudyRoom {
private:
    std::string roomName;
    bool isAvailable;

public:
    StudyRoom(std::string roomName);
    std::string getRoomName() const;
    bool checkAvailability() const;
    void book();
    void release();
};

#endif