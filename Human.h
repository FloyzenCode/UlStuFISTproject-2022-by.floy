#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Human // ��� ������
{

private: // ������������ ������� private

    char* name;
    int year;
    float body_weight;
    float rost;
    // string country;

public: // ������������ ������� public
    void getHuman(char* name, int year, float body_weight, float rost) // ����������  
    {
        cout << "���: " << name << "." << endl;
        Sleep(50);
        cout << "�������: " << year << " ���." << endl;
        Sleep(50);
        cout << "����: " << rost << " ��." << endl;
        Sleep(50);
        cout << "���: " << body_weight << " ��." << endl;
        Sleep(50);
        //  cout << "������: " << country << "." << endl;
    }
};