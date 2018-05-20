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

};