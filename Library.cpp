#include "Library.h"
#include <iostream>
using namespace std;

Library::Library() {
    books.push_back(Book("Introduction to Algorithms", "Cormen"));
    books.push_back(Book("Clean Code", "Robert C. Martin"));

    avEquipments.push_back(AVEquipment("Projector"));
    avEquipments.push_back(AVEquipment("Microphone"));

    studyRooms.push_back(StudyRoom("Room 101"));
    studyRooms.push_back(StudyRoom("Room 102"));
}

void Library::displayMenu() {
    int choice;
    do {
        cout << "\nSaint Cloud State University Library System\n";
        cout << "1. Borrow a Book\n";
        cout << "2. Request a Book\n";
        cout << "3. Rent AV Equipment\n";
        cout << "4. Rent a Study Room\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            borrowBook();
            break;
        case 2:
            requestBook();
            break;
        case 3:
            rentAVEquipment();
            break;
        case 4:
            rentStudyRoom();
            break;
        case 5:
            cout << "Exiting system. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);
}

void Library::borrowBook() {
    cout << "Available Books:\n";
    for (size_t i = 0; i < books.size(); ++i) {
        if (books[i].checkAvailability())
            cout << i + 1 << ". " << books[i].getTitle() << " by " << books[i].getAuthor() << "\n";
    }
    cout << "Enter the number of the book to borrow: ";
    int choice;
    cin >> choice;

    if (choice >= 1 && choice <= books.size() && books[choice - 1].checkAvailability()) {
        books[choice - 1].borrowBook();
        cout << "You borrowed: " << books[choice - 1].getTitle() << "\n";
    }
    else {
        cout << "Invalid choice or book is not available.\n";
    }
}

void Library::requestBook() {
    cout << "Enter the title of the book you want to request: ";
    string title;
    cin.ignore();
    getline(cin, title);
    cout << "Your request for \"" << title << "\" has been noted.\n";
}

void Library::rentAVEquipment() {
    cout << "Available AV Equipment:\n";
    for (size_t i = 0; i < avEquipments.size(); ++i) {
        if (avEquipments[i].checkAvailability())
            cout << i + 1 << ". " << avEquipments[i].getName() << "\n";
    }
    cout << "Enter the number of the equipment to rent: ";
    int choice;
    cin >> choice;

    if (choice >= 1 && choice <= avEquipments.size() && avEquipments[choice - 1].checkAvailability()) {
        avEquipments[choice - 1].rent();
        cout << "You rented: " << avEquipments[choice - 1].getName() << "\n";
    }
    else {
        cout << "Invalid choice or equipment is not available.\n";
    }
}

void Library::rentStudyRoom() {
    cout << "Available Study Rooms:\n";
    for (size_t i = 0; i < studyRooms.size(); ++i) {
        if (studyRooms[i].checkAvailability())
            cout << i + 1 << ". " << studyRooms[i].getRoomName() << "\n";
    }
    cout << "Enter the number of the room to book: ";
    int choice;
    cin >> choice;

    if (choice >= 1 && choice <= studyRooms.size() && studyRooms[choice - 1].checkAvailability()) {
        studyRooms[choice - 1].book();
        cout << "You booked: " << studyRooms[choice - 1].getRoomName() << "\n";
    }
    else {
        cout << "Invalid choice or room is not available.\n";
    }
}