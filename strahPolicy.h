#ifndef STRAHPOLICY_H
#define STRAHPOLICY_H

#include <string>

using namespace std;

class strahPolicy {
public:
    virtual void Show(strahPolicy documents[], int arraySize);
    virtual string getSurname();
    void setSurname(string newSurname);
    int getCount();
    void setCount(int newCount);
protected:
    int count;
    string surname;
private:
};


#endif //STRAHPOLICY_H