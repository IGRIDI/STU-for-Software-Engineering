#include "Student.h"
#include "Deanery.h"
#include "Teacher.h"
#include "Library.h"
#include <iostream>
#include <string.h>

using namespace std;

void ShowMain()
{
	cout << "1 - Авторизоваться как студент" << endl;
	cout << "2 - Авторизоваться как преподаватель" << endl;
	cout << "3 - Авторизоваться как деканат" << endl;
	cout << "4 - Авторизоваться как библиотекарь" << endl << endl;
	cout << "0 - Выход" << endl << endl;
}

void ShowMenu1()
{
	cout << "1 - Добавить студента" << endl;
	cout << "2 - Проверить оплату" << endl;
	cout << "3 - Редактировать студента" << endl << endl;
}

void ShowMenu2()
{
	cout << "1 - Оплата общаги" << endl;
	cout << "2 - Добавить работу" << endl;
	cout << "3 - Получить книгу" << endl;
	cout << "4 - Отдать книгу" << endl << endl;
}

void ShowMenu3()
{
	cout << "1 - Проверить работу" << endl;
}

void ShowMenu4()
{
	cout << "1 - Добавить книгу" << endl;
	cout << "2 - Список книг" << endl << endl;
}


int main()
{
	setlocale(LC_ALL, "Rus");
	Student Alpha("Vasya", "IS-999", 1);
	Deanery Betta("Elena");
	Teacher Gamma;
	Library Delta;
	int a = 1;

	while (a != 0)
	{
		system("cls");
		ShowMain();
		cout << "Введите значение: ";
		cin >> a;
		if (a<0 || a>4)
		{
			cout << "Error" << endl;
			system("pause");
			system("cls");
			continue;
		}

		Alpha.use.Authorization(a);
		system("cls");
		switch (a)
		{
		case 1:
			ShowMenu2();
			cout << "Введите значение: ";
			cin >> a;
			if (a == 1)
			{
				Alpha.pay.AddPay();
			}
			if (a == 2)
			{
				Alpha.AddWork();
			}
			if (a == 3)
			{
				Alpha.TakeBook(&Delta);
			}
			if (a == 4)
			{
				Alpha.GiveBook(&Delta);
			}
			break;

		case 2:
			ShowMenu3();
			cout << "Введите значение: ";
			cin >> a;
			if (a == 1)
			{
				Gamma.Test(&Alpha);
			}
			break;

		case 3:
			ShowMenu1();
			cout << "Введите значение: ";
			cin >> a;
			if (a == 1)
			{
				Betta.AddStud();
			}
			if (a == 2)
			{
				Betta.ShowPay();
			}
			if (a == 3)
			{
				Betta.CorrectStud();
			}
			break;

		case 4:
			ShowMenu4();
			cout << "Введите значение: ";
			cin >> a;
			if (a == 1)
			{
				Delta.AddBook();
			}
			if (a == 2)
			{
				Delta.ShowBook();
			}
			break;
		}
	}
	system("pause");
	return 0;
}