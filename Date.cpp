#include "stdafx.h"
#include "Date.h"
#include <iostream>

using namespace std;

Date::Date()								// default constructor (no parameters) set start of epoch
{
	setDefaultDate();
}

Date::Date(int m, int d, int y)				// constructor with month day year parameters
{
	setDate(m, d, y);
}

void	Date::setDate(int mm, int dd, int yyyy)
{
	month = mm;
	day = dd;
	year = yyyy;;
}

void	Date::displayDate()  const
{
	if (month < 10)
		cout << ' ';
	cout << month << '/';
	if (day < 10)
		cout << '0';
	cout << day << '/' << year;
}

void	Date::setDefaultDate()
{
	month = 1;
	day = 1;
	year = 1970;
}

bool	Date::operator==(const Date& dateVal) const		// overloaded equals operator       ==
{
	return (month == dateVal.month && day == dateVal.day && year == dateVal.year);
}

bool	Date::operator!=(const Date& dateVal) const		// overloaded not equal operator    !=
{
	return (month != dateVal.month && day != dateVal.day && year != dateVal.year);
}

bool	Date::operator<(const  Date& dateVal) const		// overloaded less than operator    <
{
	return((year < dateVal.year) ||
		(year == dateVal.year && month < dateVal.month) ||
		(year == dateVal.year && month == dateVal.month && day < dateVal.day));

}

bool	Date::operator>(const  Date& dateVal) const		// overloaded greater than operator >
{
	return((year > dateVal.year) ||
		(year == dateVal.year && month > dateVal.month) ||
		(year == dateVal.year && month == dateVal.month && day > dateVal.day));
}

bool	Date::operator<=(const Date& dateVal) const		// overloaded less than or equal operator    <=
{
	bool	result;

	result = !(*this > dateVal);
	return result;
}

bool	Date::operator>=(const Date& dateVal) const		// overloaded greater than or equal operator =>
{
	bool	result;

	result = operator<(dateVal);
	return !result;
}