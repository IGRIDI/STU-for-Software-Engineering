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
	
}

void Library::BackBook()
{
	
}

void Library::AddBook()
{
	amount++;
	char str[] = "Книга";
	string s = to_string(amount - 1);
	string abc = "Книга" + s;

	Library_Foundation[amount - 1].Name = abc;
	Library_Foundation[amount - 1].Status = 0;
	cout << "Книга успешно добавлена!" << endl << endl;;

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