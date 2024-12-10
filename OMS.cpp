#include "OMS.h"

OMS::OMS(){}

string OMS::getSurname() {
    return ("Person " + surname);
}

void OMS::setRegion(int newRegion) {
    region = newRegion;
}

void OMS::setDateOfRegistration(int newDateOfRegistration) {
    dateOfRegistration = newDateOfRegistration;
}

int OMS::getRegion() {
    return region;
}

int OMS::getDateOfRegistration() {
    return dateOfRegistration;
}

OMS::OMS(string newSurname, int newCount, int newRegion, int newDateOfRegistration) {
    surname = newSurname;
    count = newCount;
    region = newRegion;
    dateOfRegistration = newDateOfRegistration;
}

void OMS::Show(OMS passports[], int arraySize) {
    int widths[6] = {20, 10, 25, 25, 25, 25};
    cout << "+";
    for (const auto& width : widths) {
        cout << setfill('-') << setw(width) << "" << "+";
    }
    cout << setfill(' ') << "\n";
    string headers[6] = {"Surname", "Count", "Region", "Date of registration", "Count of rooms", "District"};
    cout << "|";
    for (size_t i = 0; i < 6; i++) {
        cout << center(headers[i], widths[i]) << "|";
    }
    cout << "\n";

    cout << "+";
    for (const auto& width : widths) {
        cout << setfill('-') << setw(width) << "" << "+";
    }
    cout << setfill(' ') << "\n";
    for (int i = 0; i < arraySize; i++) {
        cout << "|";
        cout << center(passports[i].getSurname(), widths[0]) << "|"
             << center(to_string(passports[i].getCount()), widths[1]) << "|"
             << center(to_string(passports[i].getRegion()), widths[4]) << "|"
             << center(to_string(passports[i].getDateOfRegistration()), widths[5]) << "|"
             << center("", widths[2]) << "|"
             << center("", widths[3]) << "|\n";
        cout << "+";
        for (const auto& width : widths) {
            cout << setfill('-') << setw(width) << "" << "+";
        }
        cout << setfill(' ') << "\n";
    }

    do {

    } while (cin.get() != '\n');
}