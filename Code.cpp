// Библиотеки
#include <iostream>
#include <string>
#include <cmath>
#include <Windows.h>
#include <algorithm>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include "students.h"
#include "Human.h"
#include "Coffee.h"
#include "CoffeeRis.h"
#include "ColorMessage.h"

// enum's
enum SELECT_TS {
	CAR = 450, MOTO = 1500, VELOSIPED = 300, SAMOKAT = 250, ELEKTRO_SAMOKAT = 300
};

enum RENTAL_HOTEL_RIVERA {
	STANDART_NOMER_RIVERA = 3000, COMFORT_NOMER_RIVERA = 3800, FAMILY_NOMER_RIVERA = 6000
};

enum RENTAL_HOTEL_UTES {
	STANDART_NOMER_UTES = 3500, COMFORT_NOMER_UTES = 4500, FAMILY_NOMER_UTES = 6800
};

enum RENTAL_HOTEL_LARA_BARUT {
	STANDART_NOMER_LARA_BARUT = 2000, COMFORT_NOMER_LARA_BARUT = 3200, FAMILY_NOMER_LARA_BARUT = 4300
};
enum RENTAL_HOTEL_THE_CAMBY {
	STANDART_NOMER_THE_CAMBY = 5000, COMFORT_NOMER_THE_CAMBY = 7000, FAMILY_NOMER_THE_CAMBY = 9050
};

enum RENTAL_HOTEL_AVRORA {
	STANDART_NOMER_AVRORA = 2500, COMFORT_NOMER_AVRORA = 3500, FAMILY_NOMER_AVRORA = 4800
};

using namespace std;
using namespace coffee;
using namespace color_text;
// Функции
void HelloUser(string name) {
	string Hello[12] = {
		"П", "р", "и", "в", "е", "т", "с", "т", "в", "у", "ю", ", "
	};
	for (int i = 0; i < 12; i++) {
		cout << Hello[i];
		Sleep(40);
	}
	cout << name << ".\n";
}

void Loading() {
	string load[100] = {
	"1%","2%","3%","4%","5%","6%","7%","8%","9%","10%",
	"11%","12%","13%","14%","15%","16%","17%","18%","19%","20%",
	"21%","22%","23%","24%","25%","26%","27%","28%","29%","30%",
	"31%","32%","33%","34%","35%","36%","37%","38%","39%","40%",
	"41%","42%","43%","44%","45%","46%","47%","48%","49%","50%",
	"51%","52%","53%","54%","55%","56%","57%","58%","59%","60%",
	"61%","62%","63%","64%","65%","66%","67%","68%","69%","70%",
	"71%","72%","73%","74%","75%","76%","77%","78%","79%","80%",
	"81%","82%","83%","84%","85%","86%","87%","88%","89%","90%",
	"91%","92%","93%","94%","95%","96%","97%","98%","99%","100%"
	};
	string Successfully[8] = {
		"У","с","п","е","ш","н","о","."
	};
	for (int SysLoad = 0; SysLoad < 100; SysLoad++) {
		cout << load[SysLoad];
		Sleep(20);
		system("cls");
	}
	for (int Success = 0; Success < 8; Success++) {
		cout << Successfully[Success];
		Sleep(40);
	}
	cout << "\n";
}

void Accepted() {
	setlocale(0, "");
	string UP[20] = {
		"В","х","о","д ",
		"в","ы","п","о","л","н","е","н ",
		"у","с","п","е","ш","н","о",".\n"
	};
	for (int g = 0; g < 20; g++) {
		cout << UP[g];
		Sleep(40);
	}
}

void Error() {
	setlocale(0, "");
	string Error[7] = {
		"О","ш","и","б","к","а",".\n"
	};
	for (int i = 0; i < 7; i++) {
		cout << Error[i];
		Sleep(40);
	}
	system("pause");
}

void check_pass(string password) {
	string UserPassword;
	getline(cin, UserPassword);
	if (password == UserPassword) {
		Accepted();
	}
	else {
		Error();
	}
}

void PlzCinPasswordUser() {
	setlocale(0, "");
	string ciin[14] = {
		"В","в","е","д","и","т","е ",
		"п","а","р","о","л","ь",": "
	};
	for (int i = 0; i < 14; i++) {
		cout << ciin[i];
		Sleep(40);
	}

}

void Switch_Apps() {
	setlocale(0, "");
	system("chcp 1251 > nul");
	string Welcome[49] = {
		"Ч","т","о","б","ы ",
		"в","ы","б","р","а","т","ь ",
		"п","р","и","л","о","ж","е","н","и","е ",
		"в","в","е","д","и","т","е ",
		"с","о","о","т","в","е","т","с","т","в","у","ю","щ","у","ю ",
		"ц","и","ф","р","у.\n"
	};
	string ListStart_Apps[17] = {
		"С","п","и","с","о","к ",
		"п","р","и","л","о","ж","е","н","и","й",":\n"
	};
	string List_Apps[9] = {
		"1. Калькулятор.\n",
		"2. Гонка - анимация.\n",
		"3. Порядок цифр от N числа до Y числа.\n",
		"4. Аренда транспорта.\n",
		"5. Аренда номера в отеле.\n",
		"6. Определение среднего балла студента/ученика.\n",
		"7. Запись данных о человеке.\n",
		"8. Кофе-машина (virtual).\n",
		"9. RGB-Матрица: "
	};
	for (int sw = 0; sw < 49; sw++) {
		cout << Welcome[sw];
		Sleep(30);
	}
	Sleep(1000);
	for (int listOne = 0; listOne < 17; listOne++) {
		cout << ListStart_Apps[listOne];
		Sleep(40);
	}
	for (int i = 0; i < 9; i++) {
		cout << List_Apps[i];
		Sleep(40);
	}
}

// Консольные приложения
void Calculator() {
	setlocale(0, "");
	system("chcp 1251 > nul");
	double a, b;
	char operation;
	string Welcome_to_app[11] = {
		"К","а","л","ь","к","у","л","я","т","о","р\n"
	};
	string InformationHelp[23] = {
		"Д","о","с","т","у","п","н","ы","е ",
		"о","п","е","р","а","ц","и","и",": ",
		"+, ","-, ","*, ","/, ","^\n"
	};
	string PlzCinVar[17] = {
		"В","в","е","д","и","т","е ",
		"в","ы","р","а","ж","е","н","и","е", ": "
	};

	for (int i = 0; i < 11; i++) {
		cout << Welcome_to_app[i];
		Sleep(40);
	}
	Sleep(1000);
	for (int i = 0; i < 23; i++) {
		cout << InformationHelp[i];
		Sleep(30);
	}
	Sleep(2000);
	system("cls");
	while (true) {
		for (int i = 0; i < 17; i++) {
			cout << PlzCinVar[i];
			Sleep(40);
		}
		cin >> a >> operation >> b;

		switch (operation) {
		case '+':
			cout << a << " + " << b << " = " << a + b;
			break;
		case '-':
			cout << a << " - " << b << " = " << a - b;
			break;
		case '*':
			cout << a << " * " << b << " = " << a * b;
			break;
		case '/':
			cout << a << " / " << b << " = " << a / b;
			break;
		case '^':
			cout << a << "^" << b << " = " << pow(a, b);
			break;
		}
	}
}

void animation_race() {
	srand(time(0));
	const int size = 60;
	cout << "Введите букву, чтобы начать: \n ";
	char x; cin >> x;
	int position = size / 2;
	while (true) {
		cout << "|START|";
		for (int i = 0; i < size; i++) {
			if (i == position)
				cout << x;
			else cout << " ";
		}
		cout << "|FINISH|" << endl;
		int move = rand() % 3 - 1;
		position = position + move;
		if (position < 1) {
			cout << "Вы не смогли закончить гонку!" << endl;
			break;
		}
		if (position > size - 1) {
			cout << "Вы закончили гонку!" << endl;
			break;
		}
		for (int sleep = 0; sleep < 1000000; ++sleep);
	}
}

void N_and_Y_while() {
	int a, b;
	string cinplz[12] = {
		"В","в","е","д","т","е ",
		"ч","и","с","л","о N", ": "
	};
	string cinplz2[18] = {
		"В","в","е","д","т","е ",
		"в","т","о","р","о","е ",
		"ч","и","с","л","о Y", ": "
	};
	string Start[11] = {
		"Н","а","ч","и","н","а","е","м",".",".",".\n"
	};
	for (int i = 0; i < 12; i++) {
		cout << cinplz[i];
		Sleep(40);
	}
	cin >> a;
	cout << endl;
	for (int i = 0; i < 18; i++) {
		cout << cinplz2[i];
		Sleep(40);
	}
	cin >> b;
	cout << "\n";
	for (int i = 0; i < 11; i++) {
		cout << Start[i];
		Sleep(40);
	}
	Sleep(2000);
	system("cls");

	if (a < b)
		for (int i = a; i <= b; i++)
			cout << i << " ";
	else
		for (int i = a; i >= b; i--)
			cout << i << " ";
}

void Transport_rental() {
	int time;
	string welcome[16] = {
		"А","р","е","н","д","а ",
		"т","р","а","н","с","п","о","р","т","а\n"
	};
	string select_user;
	string list_TS[22] = {
		"С","п","и","с","о","к ",
		"т","р","а","н","с","п","о","р","т","а",": \n",
		"1. Автомобиль.\n",
		"2. Мотоцикл.\n",
		"3. Велосипед.\n",
		"4. Самокат.\n",
		"5. Электрический самокат.\n",
	};
	// select_user
	string select_TS[47] = {
		"В","в","е","д","и","т","е ",
		"с","о","о","т","в","е","т","с","т","в","у","ю","щ","у","ю ",
		"ц","и","ф","р","у ",
		"д","л","я ",
		"в","ы","б","о","р","а ",
		"т","р","а","н","с","п","о","р","т","а",": "
	};
	// time
	string select_time_TS[29] = {
		"В","в","е","д","и","т","е ",
		"н","у","ж","н","о","е ",
		"к","о","л","и","ч","е","с","т","в","о ",
		"ч","а","с","о","в",": "
	};
	string s_vas[5] = {
		"Ц","е","н","а",": ",
	};
	for (int i = 0; i < 16; i++) {
		cout << welcome[i];
		Sleep(40);
	}
	for (int i = 0; i < 22; i++) {
		cout << list_TS[i];
		Sleep(40);
	}
	for (int i = 0; i < 47; i++) {
		cout << select_TS[i];
		Sleep(40);
	}
	getline(cin, select_user);
	for (int i = 0; i < 29; i++) {
		cout << select_time_TS[i];
		Sleep(40);
	}
	cin >> time;
	for (int i = 0; i < 5; i++) {
		cout << s_vas[i];
		Sleep(40);
	}

	if (select_user == "1") {
		cout << CAR * time;
		Sleep(40);
		cout << " р.";
	}
	if (select_user == "2") {
		cout << MOTO * time;
		Sleep(40);
		cout << " р.";
	}
	if (select_user == "3") {
		cout << VELOSIPED * time;
		Sleep(40);
		cout << " р.";
	}
	if (select_user == "4") {
		cout << SAMOKAT * time;
		Sleep(40);
		cout << " р.";
	}
	if (select_user == "5") {
		cout << ELEKTRO_SAMOKAT * time;
		Sleep(40);
		cout << " р.";
	}
	cout << "\n";
}

void rental_hotel() {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, FOREGROUND_GREEN);
	setlocale(0, "");
	system("chcp 1251 > nul");
	int days;
	string Welcome[18] = { //
		"А","р","е","н","д","а ",
		"н","о","м","е","р","а ",
		"в ",
		"о","т","е","л","е.\n",
	};
	string List_Hotels[26] = { //
		"С","п","и","с","о","к ",
		"д","о","с","т","у","п","н","ы","х ",
		"о","т","е","л","е","й",":\n"
		"1. Отель \"Ривьера\".\n",
		"2. Отель \"Утёс\".\n",
		"3. Отель \"Lara Barut\".\n",
		"4. Отель \"The Camby\".\n",
		"5. Отель \"Аврора\".\n"
	};
	string PlzCinNum[38] = { //
		"П","о","ж","а","л","у","й","с","т","а ",
		"в","в","е","д","и","т","е ",
		"с","о","о","т","в","е","т","с","т","в","у","ю","щ","у","ю ",
		"ц","и","ф","р","у",": "
	};
	string List_Number[21] = {
		"В","ы","б","е","р","и","т","е ",
		"т","и","п ",
		"н","о","м","е","р","а",":\n",
		"1. Стандарт.\n",
		"2. Комфорт.\n",
		"3. Семейный.\n"
	};
	string cin_days[22] = {
		"В","в","е","д","и","т","е ",
		"к","о","л","и","ч","е","с","т","в","о ",
		"д","н","е","й",": "
	};
	string select_user_hotel;
	string select_user_number;

	for (int i = 0; i < 18; i++) {
		cout << Welcome[i];
		Sleep(40);
	}

	Sleep(1000);

	for (int i = 0; i < 26; i++) {
		cout << List_Hotels[i];
		Sleep(40);
	}

	Sleep(40);

	for (int i = 0; i < 38; i++) {
		cout << PlzCinNum[i];
		Sleep(40);
	}
	getline(cin, select_user_hotel);

	// HOTEL RIVERA
	if (select_user_hotel == "1") {
		for (int i = 0; i < 21; i++) {
			cout << List_Number[i];
			Sleep(40);
		}
		getline(cin, select_user_number);
		if (select_user_number == "1") { // 1
			for (int i = 0; i < 22; i++) {
				cout << cin_days[i];
				Sleep(30);
			}
			cin >> days;
			cout << "\nЦена номера: " << STANDART_NOMER_RIVERA * days << ".";
		}

		if (select_user_number == "2") { // 2
			for (int i = 0; i < 22; i++) {
				cout << cin_days[i];
				Sleep(30);
			}
			cin >> days;
			cout << "\nЦена номера: " << COMFORT_NOMER_RIVERA * days << ".";
		}

		if (select_user_number == "3") { // 3
			for (int i = 0; i < 22; i++) {
				cout << cin_days[i];
				Sleep(30);
			}
			cin >> days;
			cout << "\nЦена номера: " << FAMILY_NOMER_RIVERA * days << ".";
		}
	}

	// HOTEL UTES
	if (select_user_hotel == "2") {
		for (int i = 0; i < 21; i++) {
			cout << List_Number[i];
			Sleep(40);
		}
		getline(cin, select_user_number);
		if (select_user_number == "1") { // 1
			for (int i = 0; i < 22; i++) {
				cout << cin_days[i];
				Sleep(30);
			}
			cin >> days;
			cout << "\nЦена номера: " << STANDART_NOMER_UTES * days << ".";
		}

		if (select_user_number == "2") { // 2
			for (int i = 0; i < 22; i++) {
				cout << cin_days[i];
				Sleep(30);
			}
			cin >> days;
			cout << "\nЦена номера: " << COMFORT_NOMER_UTES * days << ".";
		}

		if (select_user_number == "3") { // 3
			for (int i = 0; i < 22; i++) {
				cout << cin_days[i];
				Sleep(30);
			}
			cin >> days;
			cout << "\nЦена номера: " << FAMILY_NOMER_UTES * days << ".";
		}
	}

	// HOTEL LARA BARUT
	if (select_user_hotel == "3") {
		for (int i = 0; i < 21; i++) {
			cout << List_Number[i];
			Sleep(40);
		}
		getline(cin, select_user_number);
		if (select_user_number == "1") { // 1
			for (int i = 0; i < 22; i++) {
				cout << cin_days[i];
				Sleep(30);
			}
			cin >> days;
			cout << "\nЦена номера: " << STANDART_NOMER_LARA_BARUT * days << ".";
		}

		if (select_user_number == "2") { // 2
			for (int i = 0; i < 22; i++) {
				cout << cin_days[i];
				Sleep(30);
			}
			cin >> days;
			cout << "\nЦена номера: " << COMFORT_NOMER_LARA_BARUT * days << ".";
		}

		if (select_user_number == "3") { // 3
			for (int i = 0; i < 22; i++) {
				cout << cin_days[i];
				Sleep(30);
			}
			cin >> days;
			cout << "\nЦена номера: " << FAMILY_NOMER_LARA_BARUT * days << ".";
		}
	}

	// HOTEL THE CAMBY 
	if (select_user_hotel == "4") {
		for (int i = 0; i < 21; i++) {
			cout << List_Number[i];
			Sleep(40);
		}
		getline(cin, select_user_number);
		if (select_user_number == "1") { // 1
			for (int i = 0; i < 22; i++) {
				cout << cin_days[i];
				Sleep(30);
			}
			cin >> days;
			cout << "\nЦена номера: " << STANDART_NOMER_THE_CAMBY * days << ".";
		}

		if (select_user_number == "2") { // 2
			for (int i = 0; i < 22; i++) {
				cout << cin_days[i];
				Sleep(30);
			}
			cin >> days;
			cout << "\nЦена номера: " << COMFORT_NOMER_THE_CAMBY * days << ".";
		}

		if (select_user_number == "3") { // 3
			for (int i = 0; i < 22; i++) {
				cout << cin_days[i];
				Sleep(30);
			}
			cin >> days;
			cout << "\nЦена номера: " << FAMILY_NOMER_THE_CAMBY * days << ".";
		}
	}

	// HOTEL AVRORA
	if (select_user_hotel == "5") {
		for (int i = 0; i < 21; i++) {
			cout << List_Number[i];
			Sleep(40);
		}
		getline(cin, select_user_number);
		if (select_user_number == "1") { // 1
			for (int i = 0; i < 22; i++) {
				cout << cin_days[i];
				Sleep(30);
			}
			cin >> days;
			cout << "\nЦена номера: " << STANDART_NOMER_AVRORA * days << ".";
		}

		if (select_user_number == "2") { // 2
			for (int i = 0; i < 22; i++) {
				cout << cin_days[i];
				Sleep(30);
			}
			cin >> days;
			cout << "\nЦена номера: " << COMFORT_NOMER_AVRORA * days << ".";
		}

		if (select_user_number == "3") { // 3
			for (int i = 0; i < 22; i++) {
				cout << cin_days[i];
				Sleep(30);
			}
			cin >> days;
			cout << "\nЦена номера: " << FAMILY_NOMER_AVRORA * days << ".";
		}
	}
}

void Students_Average_Ball() {
	// Создание объекта класса Student
	Students student;
	string name;
	string last_name;
	// Ввод имени с клавиатуры
		cout << "Имя: ";
		getline(std::cin, name);

		// Ввод фамилии
		cout << "Фамилия: ";
		getline(cin, last_name);

		// Сохранение имени и фамилии в объект класса Students
		student.set_name(name);
		student.set_last_name(last_name);

		// Оценки
		int scores[5];
		// Сумма всех оценок
		int sum = 0;

		// Ввод промежуточных оценок 
		for (int i = 0; i < 5; ++i) {
			cout << "Оценка " << i + 1 << ": ";
			cin >> scores[i];
			// суммирование
			sum += scores[i];
		}

		// Сохраняем промежуточные оценки в объект класса Student
		student.set_scores(scores);
		// Считаем средний балл
		float average_ball = sum / 5.0;
		// Сохраняем средний балл в объект класса Students
		student.set_average_ball(average_ball);
		// Выводим данные по студенту
		cout << "Средний балл у " << student.get_name() << " " << student.get_last_name() << " составляет " << student.get_average_ball() << endl;
		Sleep(2000);
}

void Human_Pass() {
	const int SIZE = 100;
	char name[SIZE];
	// string country;
	int year;
	float body_weight;
	float rost;
	cout << "Имя: ";
	cin.get(name, SIZE);
	cout << "Возраст: ";
	cin >> year;
	cout << "Рост: ";
	cin >> rost;
	cout << "Вес: ";
	cin >> body_weight;
	Sleep(2000);
	system("cls");
	Human obj_Human;
	obj_Human.getHuman(name, year, rost, body_weight); 
}
								// MAIN FUNCTION //

int main() {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, FOREGROUND_GREEN);
	setlocale(0, "");
	system("chcp 1251 > nul");
	// Сбор информации
	string Name_User;
	string Your_Name[8] = {
		"В","а","ш","е ",
		"и","м","я",": "
	};
	// Пароль
	string PlzCinPass[26] = {
		"П","р","и","д","у","м","а","й","т","е ",
		"с","в","о","й ",
		"н","о","в","ы","й ",
		"п","а","р","о","л","ь",": "
	};
	string NewCinUserPassword;
	string password;
	// Выбор консольного приложения
	string select_apps;

	for (int infoUser = 0; infoUser < 8; infoUser++) {
		cout << Your_Name[infoUser];
		Sleep(40);
	}
	getline(cin, Name_User);
	HelloUser(Name_User);
	Sleep(1000);
	system("cls");
	//Loading();
	//Процесс создания нового пароля пользователя
	for (int i = 0; i < 26; i++) {
		cout << PlzCinPass[i];
		Sleep(40);
	}
	getline(cin, NewCinUserPassword);
	Sleep(500);
	system("cls");
	// Проверка пароля
	PlzCinPasswordUser();
	getline(cin, password);
	if (password == NewCinUserPassword) {
		Accepted();
	}
	else {
		Error();
		return 0;
		exit(0);
	}
	// Информация выбора приложений
	Switch_Apps();
	getline(cin, select_apps);
	// Активация приложений
	if (select_apps == "1") {
		Calculator();
	}
	if (select_apps == "2") {
		animation_race();
	}
	if (select_apps == "3") {
		N_and_Y_while();
	}
	if (select_apps == "4") {
		Transport_rental();
	}
	if (select_apps == "5") {
		rental_hotel();
	}
	if (select_apps == "6") {
		Students_Average_Ball();
	}
	if (select_apps == "7") {
		system("cls");
		Human_Pass();
	}
	if (select_apps == "8") {
		CoffeeGrinder s;
		system("cls");
		Sleep(1000);
		s.StartCoffeGrinder();
	}
	if (select_apps == "9") {
		cout << "\nНажмите \"S\" для старта или введите любой символ.\n";
		ColorText A;
		cin.get();
		if (GetAsyncKeyState('S')) {
			while (true) {
				int b = rand();
				//cout << b << " ";
				A.cout_blue(b);
				A.cout_cyan(b);
				A.cout_green(b);
				A.cout_purple(b);
				A.cout_red(b);
				A.cout_yellow(b);
			}
		}
	}
	return 0;
}