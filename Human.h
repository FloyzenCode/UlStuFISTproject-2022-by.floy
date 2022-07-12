#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Human // имя класса
{

private: // спецификатор доступа private

    char* name;
    int year;
    float body_weight;
    float rost;
    // string country;

public: // спецификатор доступа public
    void getHuman(char* name, int year, float body_weight, float rost) // отобразить  
    {
        cout << "Имя: " << name << "." << endl;
        Sleep(50);
        cout << "Возраст: " << year << " лет." << endl;
        Sleep(50);
        cout << "Рост: " << rost << " см." << endl;
        Sleep(50);
        cout << "Вес: " << body_weight << " кг." << endl;
        Sleep(50);
        //  cout << "Страна: " << country << "." << endl;
    }
};