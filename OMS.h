#ifndef OMS_H
#define OMS_H
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <unordered_map>
#include "strahPolicy.h"
#include "center.h"

using namespace std;

class OMS : public strahPolicy {
public:
    OMS();
    OMS(string newSurname, int newCount, int newRegion, int newDateOfRegistration);
    string getSurname();
    void setRegion(int newRegion);
    void setDateOfRegistration(int newDateOfRegistration);
    int getRegion();
    int getDateOfRegistration();
    void Show(OMS passports[], int arraySize);
protected:
private:
    int region;
    int dateOfRegistration;
};


#endif //OMS_H