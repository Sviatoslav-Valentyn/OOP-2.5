#pragma once
#include <string>
#include "Triad.h"

using namespace std;
class Time
{
private:
	Triad triad;
public:
	Triad getTriad() const { return triad; }
	void setTriad(Triad triad) { this->triad = triad; }

	void IncreaseSecond(int second);
	void IncreaseMinute(int minute);
	bool secondCheck(int);
	bool minuteCheck(int);

	Time(); // конструктор за умовчанням
	Time(int, int, int); // конструктор ініціалізації
	Time(const Time&); //копіювання
	~Time();

	Time& operator = (const Time&); // присвоєння
	friend istream& operator >> (istream&, Time&); //введення з клавіатури
	friend ostream& operator << (ostream&, const Time&); //вивід на екран
	operator string() const; //приведення типу – перетворення у літерний рядок

	Time& operator ++(); // префіксний інкремент
	Time operator ++(int); // постфіксний інкремент
	Time& operator --(); // префіксний декремент
	Time operator --(int); // постфіксний декремент
};