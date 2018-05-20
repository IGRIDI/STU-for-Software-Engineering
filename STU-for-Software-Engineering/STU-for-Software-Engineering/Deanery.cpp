#include "Deanery.h"
#include <iostream>

using namespace std;

Deanery::Deanery(char* per1)
{
	Name = per1;
}

void Deanery::CorrectStud()
{
	cout << "Данные пользователя изменены!" << endl;
	system("pause");
}


void Deanery::AddStud()
{
	cout << "Студент добавлен!" << endl;
	system("pause");
}

void Deanery::ShowPay()
{
	cout << "Оплата проверена" << endl;
	system("pause");
}