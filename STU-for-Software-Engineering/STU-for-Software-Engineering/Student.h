#pragma once

#include "Library.h"
#include "Payment.h"
#include "User.h"
#include "Work.h"

class Student
{
	char *Full_name;
	char *Group;
	bool Gender;
	int Amount_of_work;

public:
	Payment pay;
	User use;
	Work Wr[3];

	Student(char* per1, char *per2, bool per3);
	void AddWork();
	void Teacher_Test();
	void TakeBook(Library *Library_Foundation);
	void GiveBook(Library *Library_Foundation);

};