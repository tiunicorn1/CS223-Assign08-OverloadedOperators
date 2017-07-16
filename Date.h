#pragma once

class Date
{
public:										// public member functions
	Date();										// default constructor (no parameters)
	Date(int m, int d, int y);					// constructor with month day year parameters
	void	setDate(int mm, int dd, int yyyy);
	void	displayDate()	const;

	bool	operator==(const Date&) const;		// overloaded equals operator       ==
	bool	operator!=(const Date&) const;		// overloaded not equal operator    !=
	bool	operator<(const  Date&) const;		// overloaded less than operator    <
	bool	operator>(const  Date&) const;		// overloaded greater than operator >
	bool	operator<=(const Date&) const;		// overloaded less than or equal operator    <=
	bool	operator>=(const Date&) const;		// overloaded greater than or equal operator =>

private:									// private member functions and data members
	void	setDefaultDate();					// set default date - 1/01/1970
	int		month;
	int		day;
	int		year;
};