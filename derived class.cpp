// 1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CMydate
{
public:
	int year;
	int month;
	int day;
	CMydate();
	CMydate(int y,int m,int d);
	void setdate(int y, int m, int d);
	void display();
};
CMydate::CMydate()
{
	year = 2019;
	month = 6;
	day = 10;
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
	cout << year<<"年"<< month << "月" << day << "日"<< endl;
}
class CSchedule :public CMydate
{
public:
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
	cout << "year=" << "年" << "month=" << "月" << "day=" << "日" << endl;
}
int main()
{
	CMydate od(2000, 4, 17);
	od.display();
	return 0;
}
