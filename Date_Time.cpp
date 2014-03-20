
#include <string>
#include <iostream>
using namespace std;

int Month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

string x;



class Date_Time{
private:
	int year;
	int month;
	int day;
	int hour;
	int minutes;
public:

Date_Time()
{
	year = 0;
	month = 0;
	day = 0;
	hour = 0;
	minutes = 0;

}

int setDate(int Year, int Month, int Day, int Hour, int Minutes)
	{
		//if(Year<0)	
		//	return -1;
		//if(Month<0 || Month > 12)
		//	return -1;
		//if(Day>31 || Day < 0)
		//	return -1;
		//if(Hour > 24 || Hour < 0)
		//	return -1;
		//if(Minutes < 0 || Minutes > 60)
		//	return -1;

		day = Day;
		month = Month;
		day = Day;
		hour = Hour;
		minutes = Minutes;
		year = Year;

		return 1;

	}
string toString()
	{

		return std::to_string(month) + "/"  + to_string(day) + "/" +   to_string(year) + " " +  to_string(hour) + ":" + to_string(minutes);


	}

void addMinutes(int min)
{

	minutes = min + minutes;
	if(minutes > 59)
	{
		minutes = minutes - 60;
		hour = hour + 1;
	}
	if(hour > 24)
	{
		hour = hour - 24;
		day = day + 1;
	}

	if(day > Month[month])
		month = month + 1;

	if(month > 12)
	{
		month = 1;
		year = year + 1;

	}
}

};




void main()
{
	Date_Time date;
	std::cout<< to_string(date.setDate(2014, 3, 31, 24, 59)) + "\n";
	date.addMinutes(1);
	std::cout << date.toString();
	std::cin >> x;


}