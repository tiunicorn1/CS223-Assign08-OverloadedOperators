// Assign08-OverloadedOperators.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include "Date.h"

using namespace std;

void	display(Date first, string op, Date second);
string	compareDate(const Date& left, string op, const Date& right);

int	main()
{
	Date	date01(12, 31, 2014);
	Date	date02(1, 1, 2015);
	Date	date03(2, 28, 2015);
	Date	date04(3, 1, 2015);
	Date	date05(3, 2, 2015);
	Date	date06(3, 3, 2015);
	Date	date07(10, 1, 2015);
	Date	date08(1, 31, 2016);
	Date	date09;
	Date	date10;

	date09 = date01;
	date10 = date02;

	cout << endl;
	display(date01, "==", date09);
	display(date01, "!=", date09);
	display(date02, "==", date10);
	display(date02, "!=", date10);
	cout << endl;
	display(date01, "<", date02);
	display(date05, "<", date04);
	display(date03, ">", date04);
	display(date06, ">", date05);
	cout << endl;
	display(date03, "<=", date04);
	display(date05, ">=", date06);
	display(date01, "<=", date09);
	display(date02, ">=", date10);
	cout << endl;
	display(date04, "<", date05);
	display(date01, "<", date02);
	display(date07, ">", date06);		// difference in month (same year)
	display(date08, ">", date07);		// difference in year

	cout << endl;
	system("pause");
	return 0;
}

void	display(Date first, string op, Date second)
{
	first.displayDate();
	cout << ' ' << left << setfill(' ') << setw(2) << op << ' ';
	second.displayDate();
	cout << right << setfill(' ') << setw(6) << "is  " << compareDate(first, op, second) << endl << endl;
}

string	compareDate(const Date& left, string op, const Date& right)
{
	bool	outcome = false;
	
	if (op == "==")
	outcome = (left == right);
	else if (op == "!=")
	outcome = (left != right);
	else if (op == "<")
	outcome = (left < right);
	else if (op == ">")
	outcome = (left > right);
	else if (op == "<=")
	outcome = (left <= right);
	else if (op == ">=")
	outcome = (left >= right);
	
	if (outcome)
		return "TRUE";
	else
		return "FALSE";
}