#ifndef AVEQUIPMENT_H
#define AVEQUIPMENT_H

#include <string>

class AVEquipment {
private:
    std::string name;
    bool isAvailable;

public:
    AVEquipment(std::string name);
    std::string getName() const;
    bool checkAvailability() const;
    void rent();
    void returnEquipment();
};

#endif