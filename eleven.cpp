#include<iostream>
#include"hhh.h"
#include<ostream>

namespace yf
{

	class time
	{
	private:
		int hours;
		int minutes;
	public:
		time();
		time(int h, int m);
		void addmin(int m);
		void addhr(int h);
		void reset(int h, int m);
		/*time sum(const time& t)const;*/
		time operator+(const time& t)const;//将sum换成operator完成操作符重载
		friend time operator-(time& r,time& t);
		friend std::ostream & operator<<(std::ostream& os, const yf::time& t);
		void show()const;

	};
}

//std::ostream & yff::operator<<(std::ostream& os, yff::time& t)
//{
//	os << t.hours << "hours" << t.minutes << "minutes\n";
//	return os;
//
//}

yf::time::time()
{
	hours = minutes = 0;

}

yf::time::time(int h, int m)
{
	hours = h;
	minutes = m;

}
void yf::time::addmin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}
void yf::time::addhr(int h)
{
	hours += h;
}
void yf::time::reset(int h, int m)
{
	hours = h;
	minutes = m;
}

yf::time yf::time::operator+(const yf::time& t)const
{
	yf::time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours;
	sum.minutes %= 60;
	return sum;

}

yf::time yf::operator-(yf::time& r, yf::time& t)
{
	using yf::time;
	time sum;
	int h = r.minutes + t.minutes;
	sum.minutes = h % 60;
	sum.hours = r.hours + t.hours + h / 60;
	return sum;


}

std::ostream& yf::operator<<(std::ostream& os, const yf::time& t)
{
	os << t.hours << "hours" << t.minutes << "minutes\n";
	return os;

}
void yf::time::show()const
{
	std::cout << hours << "hours" << minutes << "minutes\n";
}

void eleven11_3()
{
	using yf::time;
	time planing;
	time coding(2, 40);
	time fixing(5, 55);
	time total;


	time sa;
	sa = coding + fixing;
	sa.show();
	time as;
	as = fixing + coding;
	as.show();


	std::cout << "##############################" << std::endl;
	std::cout << sa;

}

