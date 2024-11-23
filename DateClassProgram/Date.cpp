#include <iostream>
#include "Date.h"

using namespace std;

void Date::setDate(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}

void Date::printDate() {
	cout << "The date is " << day << "/" << month << "/" << year << ".";
}