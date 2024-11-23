#pragma once
class Date
{
private: 
	int day;
	int month;
	int year;
public: 
	int getDay() const { return day; }
	int getMonth() const { return month; }
	int getYear() const { return year; }
	void setDate(int d, int m , int y);
	void printDate();
};

