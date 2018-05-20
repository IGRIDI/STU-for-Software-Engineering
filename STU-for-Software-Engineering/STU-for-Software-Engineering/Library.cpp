#include "Library.h"
#include <iostream>
#include <string>

using namespace std;

Library::Library()
{
	amount = 1;
	Library_Foundation = new Book[100];
	Library_Foundation[0].Name = "MyFirstBook";
	Library_Foundation[0].Status = 0;
}

void Library::TakeBook()
{
	int s = 0;
	for (int i = 0; i < amount; i++)
	{
		if (Library_Foundation[i].Status != 1)
		{
			cout << i + 1 << " --- " << Library_Foundation[i].Name << endl;
			s++;
		}
	}

	if (s == 0)
	{
		cout << endl << "����� ���� ���! " << endl;
		system("pause");
		return;
	}

	int k;
	cout << "������� �����: ";
	cin >> k;
	k--;

	if (k<0 || k>s || Library_Foundation[k].Status == 1)
	{
		cout << endl << "�������� ����� �����!" << endl;
	}
	else
	{
		Library_Foundation[k].Status = 1;
		cout << endl << "������� ��� ����� ����� " << Library_Foundation[k].Name << endl;
	}
	system("pause");
}

void Library::BackBook()
{
	int s = 0;
	for (int i = 0; i < amount; i++)
	{
		if (Library_Foundation[i].Status != 0)
		{
			cout << i + 1 << " --- " << Library_Foundation[i].Name << endl;
			s++;
		}
	}

	if (s == 0)
	{
		cout << endl << "�� ������ ��� �����! " << endl;
		system("pause");
		return;
	}
	int k;
	cout << "������� �����: ";
	cin >> k;
	k--;

	if (k<0 || k>s || Library_Foundation[k].Status == 0)
	{
		cout << endl << "�������� ����� �����!" << endl;
	}
	else
	{
		Library_Foundation[k].Status = 0;
		cout << endl << "������� ��� ������� ����� " << Library_Foundation[k].Name << endl;
	}
	system("pause");
}

void Library::AddBook()
{
	amount++;
	char str[] = "�����";
	string s = to_string(amount - 1);
	string abc = "�����" + s;

	Library_Foundation[amount - 1].Name = abc;
	Library_Foundation[amount - 1].Status = 0;
	cout << "����� ������� ���������!" << endl << endl;;

	system("pause");
}

void Library::ShowBook()
{
	for (int i = 0; i < amount; i++)
	{
		cout << i + 1 << "---" << Library_Foundation[i].Name << endl;
	}
	system("pause");
}