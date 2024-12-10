#ifndef HOUSE_H
#define HOUSE_H
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <unordered_map>
#include "strahPolicy.h"
#include "center.h"

class House : public strahPolicy {
public:
    House();
    House(string newSurname, int newCount, int newCountRooms, string newDistrict);
    string getSurname() override;
    void setCountRooms(int newCountRooms);
    void setDistrict(string newDistrict);
    int getCountRooms();
    string getDistrict();
    void Show(House house[], int arraySize);
protected:
private:
    int countRooms;
    string district;
};


#endif //HOUSE_H