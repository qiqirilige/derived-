// 2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CMydate
{
protected:
	int year;
    int month;
	int day;
public:
	
	CMydate();
	~CMydate();
	CMydate(int y, int m, int d);
	void setdate(int y, int m, int d);
	void display();
};

CMydate::CMydate()
{
	year = 2019;
	month = 6;
	day = 10;
}
CMydate::~CMydate()
{
	year = 2019;
	month = 6;
	day = 10;
	cout << "��������" << endl;
}

CMydate::CMydate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
void CMydate::setdate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
void CMydate::display()
{
	cout << year << "������" << month << "��" << day << "��" << endl;
}
class CSchedule :public CMydate
{
private:
	CSchedule();
	~CSchedule();
	CSchedule(int y, int m, int d);
	void CSchedule::setdate(int y, int m, int d);
	void CSchedule::display();


};
CSchedule::CSchedule()
{
	year = 2019;
	month = 6;
	day = 10;
}
CSchedule::~CSchedule()
{
	year = 2019;
	month = 6;
	day = 10;
	cout << "����������" << endl;
}
CSchedule::CSchedule(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
void CSchedule::setdate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
void CSchedule::display()
{
	cout <<year<< "������" << month << "��" << day << "��" << endl;
}
int main()
{
	CMydate od();
	od.display();
	return 0;
}

