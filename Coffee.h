#pragma once
#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include <stdio.h>
#include "CoffeeRis.h"
using namespace std;

namespace coffee {
	class CoffeeGrinder {
	public:
		void StartCoffeGrinder() {
			HelloUser();
			CinStartUser();
			Accepted();
		}
	private:
		void HelloUser() {
			const int SIZE = 23;
			string Hi[23] = {
				"�","�","�","�","�","� ",
				"�","�","�","� ",
				"�","�","�","�","�","�","�","�","�","�","�","�","!"
			};
			for (int i = 0; i < SIZE; i++) {
				cout << Hi[i];
				Sleep(40);
			}
			Sleep(1000);
			system("cls");
		}

		void CinStartUser() {
			string use;
			cout << "����� ���������� ����������, ������� \"S\"\n�������� �����: ";
			getline(cin, use);

			if (use == "�����" or use == "�����") {
				Accepted();
			}
			Sleep(1000);

		}

		void Accepted() {
			GraphicCoffee a;
			string UP[7] = {
				"�","�","�","�","�","�","!\n"
			};

			for (int i = 0; i < 1000; i++) {
				cout << i << "%";
				Sleep(100);
				system("cls");
				if (i == 100) {
					for (int i = 0; i < 7; i++) {
						cout << UP[i];
						Sleep(40);
					}
					a.Graphic();
					// ����� ��� ���� �������
					Sleep(10000);
					break;
				}

				if (GetAsyncKeyState('S')) {
					cout << "�� ���������� ���������!";
					Sleep(1000);
					break;
				}
			}



		}
	};
}