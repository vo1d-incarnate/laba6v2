#include "House.h"

House::House(){}

string House::getSurname() {
    return ("Student " + surname);
}

void House::setDistrict(string newDistrict) {
    district = newDistrict;
}

int House::getCountRooms() {
    return countRooms;
}

string House::getDistrict() {
    return district;
}

House::House(string newSurname, int newCount, int newCountRooms, string newDistrict) {
    surname = newSurname;
    count = newCount;
    countRooms = newCountRooms;
    district = newDistrict;
}

void House::Show(House house[], int arraySize) {
    int widths[6] = {20, 10, 25, 25, 25, 25};

    for (int i = 0; i < arraySize; i++) {
        cout << "|";
        cout << center(house[i].getSurname(), widths[0]) << "|"
             << center(to_string(house[i].getCount()), widths[1]) << "|"
             << center("", widths[2]) << "|"
             << center("", widths[3]) << "|"
             << center(to_string(house[i].getCountRooms()), widths[4]) << "|"
             << center(house[i].getDistrict(), widths[5]) << "|\n";
        cout << "+";
        for (const auto& width : widths) {
            cout << setfill('-') << setw(width) << "" << "+";
        }
        cout << setfill(' ') << "\n";
    }

    do {

    } while (cin.get() != '\n');
}