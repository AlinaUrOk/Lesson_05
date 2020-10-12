// Lesson_05_02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Lesson_05_02.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int choice = 0;
	cout << "Выберите номер задание 1-6:";
	cin >> choice;
	switch (choice)
	{
	case 1:coutMark(); break;
	case 2:coutResult(); break;
	case 3:coutMetres(); break;
	case 4:coutBall(); break;
	case 5:coutZodiak(); break;
	case 6:coutDate(); break;
	}
	return 0;
}


