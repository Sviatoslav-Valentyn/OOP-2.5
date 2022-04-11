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

	Time(); // ����������� �� ����������
	Time(int, int, int); // ����������� �����������
	Time(const Time&); //���������
	~Time();

	Time& operator = (const Time&); // ���������
	friend istream& operator >> (istream&, Time&); //�������� � ���������
	friend ostream& operator << (ostream&, const Time&); //���� �� �����
	operator string() const; //���������� ���� � ������������ � ������� �����

	Time& operator ++(); // ���������� ���������
	Time operator ++(int); // ����������� ���������
	Time& operator --(); // ���������� ���������
	Time operator --(int); // ����������� ���������
};