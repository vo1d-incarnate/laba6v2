#include <iostream>
#include <string>
#include <limits>
#include <unordered_map>
#include "strahPolicy.h"
#include "OMS.h"
#include "House.h"

using namespace std;

int main() {
    system("clear");
    OMS oms[8];
    House house[8];
    oms[0] = OMS("Smirnova", 1, 86, 2003);
    oms[1] = OMS("Ivanov", 2, 78, 2014);
    oms[2] = OMS("Petrov", 3, 14, 1993);
    oms[3] = OMS("Sidorov", 4, 77, 2002);
    oms[4] = OMS("Alekseev", 5, 81, 1984);
    oms[5] = OMS("Nikolaev", 6, 65, 1972);
    oms[6] = OMS("Tarasov", 7, 60, 2005);
    oms[7] = OMS("Orlov", 8, 04, 2007);
    house[0] = House("Smirnova", 1, 3, "good");
    house[1] = House("Varanov", 2, 5, "bad");
    house[2] = House("Matveev", 3, 2, "neutral");
    house[3] = House("Novoselov", 4, 1, "neutral");
    house[4] = House("Sidorov", 5, 2, "good");
    house[5] = House("Ezjikov", 6, 4, "bad");
    house[6] = House("Tarasov", 7, 3, "bad");
    house[7] = House("Orlov", 8, 2, "good");
    strahPolicy strahPolicy[16];

    for (int i=0; i < 16; i++) {
        if (i < 8) {
            strahPolicy[i] = oms[i];
        }
        else {
            strahPolicy[i] = house[i - 8];
        }
    }
    int choice;

    while (true) {
        system("clear");
        cout << "\nМеню:\n";
        cout << "1. Просмотр данных\n";
        cout << "2. Вычисление количества одинаковых полисов с заданной фамилией\n";
        cout << "0. Выход\n";
        cout << "Выберите действие: ";

        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            system("clear");
            cout << "Некорректный ввод." << endl;
            do {
                cout << '\n' << "Press the Enter key to continue.";
            } while (cin.get() != '\n');
            continue;
        }
        if (choice == 1) {
            OMS p;
            House s;
            system("clear");
            p.Show(oms, 8);
            s.Show(house, 8);
            do {
                cout << '\n' << "Press the Enter key to continue.";
            } while (cin.get() != '\n');
        } else if (choice == 2) {
            system("clear");

            int count = 0;  // Общий счётчик повторяющихся документов
            std::unordered_map<std::string, int> surnameCounts;  // Хранение количества документов для каждой фамилии

            // Подсчёт количества документов для каждой фамилии
            for (int i = 0; i < 16; i++) {
                surnameCounts[strahPolicy[i].getSurname()]++;
            }

            // Суммируем только те фамилии, которые повторяются
            for (const auto& pair : surnameCounts) {
                if (pair.second > 1) {
                    count += pair.second;  // Добавляем количество документов с повторяющимися фамилиями
                }
            }


            cout << "Количество одинаковых документов с одинаковой фамилией: " << count << endl;
            do {} while (cin.get() != '\n');
            do {
                cout << '\n' << "Press the Enter key to continue.";
            } while (cin.get() != '\n');
        } else if (choice == 0) {
            system("clear");
            cout << "Выход из программы." << endl;
            do {
                cout << '\n' << "Press the Enter key to continue.";
            } while (cin.get() != '\n');
            return 0;
        } else {
            cout << "Некорректный выбор. Пожалуйста, попробуйте еще раз." << endl;
            do {
                cout << '\n' << "Press the Enter key to continue.";
            } while (cin.get() != '\n');
        }
    }
    return 0;
}