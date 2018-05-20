#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(char* per1, char *per2, bool per3)
{
	Full_name = per1;
	Group = per2;
	Gender = per3;
	Amount_of_work = 0;
}

void Student::AddWork()
{
	if (Amount_of_work<3)
	{
		Wr[Amount_of_work].Name = "Работа";
		Wr[Amount_of_work].Status = 0;
		cout << endl << "Работа добавлена!" << endl;
		Amount_of_work++;
	}
	else
	{
		cout << endl << "Достигнут предел по работам!" << endl;
	}
	system("pause");
}

void Student::Teacher_Test()
{
	int kol = 0;
	for (int i = 0; i < Amount_of_work; i++)
	{
		if (Wr[i].Status == 0)
		{
			cout << i + 1 << " --- " << Wr[i].Name << endl;
			kol++;
		}
	}

	if (kol == 0)
	{
		cout << endl << "Не проверенные работы отсувствуют! " << endl;
		system("pause");
		return;
	}

	int k;
	cout << "Введите номер работы: ";
	cin >> k;
	k--;

	if (k<0 || k>Amount_of_work - 1)
	{
		cout << endl << "Неверный номер работы!" << endl;
	}
	else
	{
		Wr[k].Status = 1;
		cout << endl << "Статус работы изменен!" << endl;
		system("pause");
	}
}

void Student::TakeBook(Library *Library_Foundation)
{
	Library_Foundation->TakeBook();
}

void Student::GiveBook(Library *Library_Foundation)
{
	Library_Foundation->BackBook();
}