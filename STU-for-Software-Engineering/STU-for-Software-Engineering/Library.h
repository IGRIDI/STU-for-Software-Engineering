#pragma once
#include "Book.h"

using namespace std;

class Library
{
public:
	Book *Library_Foundation;
	int amount;
	Library();
	void TakeBook();
	void BackBook();
	void AddBook();
	void ShowBook();
};