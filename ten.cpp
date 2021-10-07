
#include<string>
#include<cctype>
#include"hhh.h"

using namespace std;

class stock
{
private:
	char company[30];
	int shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; };
public:
	void acquire(const char* co, int n, double pr);
	void buy(int num, double price);
	void sell(int num, double price);
	void update(double price);
	void show();
	const stock& topval(const stock& s)const;//this指针的使用
};

void stock::acquire(const char* co, int n, double pr)
{
	strncpy_s(company, co, 29);//将co复制29个字符到company，co不足29个用空字符
	company[29] = '\0';
	if (n < 0)
	{
		cerr << "number of shares can't be negative" << company << "share set to 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();


}

void stock::buy(int num, double price)
{
	if (num < 0)
	{
		cerr << "number of shares can't be negative share set to 0.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}

}

void  stock::sell(int num, double price)
{
	if(num<0)
	cerr << "number of shares can't be negative. " << "transaction is aborted.\n";
	else if (num > shares)
	{
		cerr << "you can't sell more than you have. " << "transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();

	}
}

void stock::update(double price)
{
	share_val = price;
	set_tot();
}

void stock::show()
{
	cout << "company:" << company
		<< " shares:" << shares
		<< " share price:$" << share_val
		<< " total price:$" << total_val << endl;
}

void ten10_3()
{
	stock stock1;
	stock1.acquire("nanossmart", 20, 12.50);
	cout.setf(ios_base::fixed);
	cout.precision(2);
	cout.setf(ios::showpoint);
	stock1.show();
	stock1.buy(15, 18.25);
	stock1.show();
	stock1.sell(40, 20.00);
	stock1.show();


}
const stock & stock::topval(const stock& s)const//topval函数的定义
{
	if (s.total_val > total_val)
		return s;
	else
		return *this;//*this表示返回整个对象，返回一个值用this->total——val


}





class ceshi
{
public:
	void put(int b1, int b2);
	void sell(int a1 ,int a2);
	void buy();
	void show();
private:
	int a1;
	int a2;
};

void ceshi::sell(int a1, int a2)
{
	int temp;
	temp = a1;
	a1 = a2;
	a2 = temp;
}

void ceshi::buy()
{
	int temp;
	temp = a1;
	a1 = a2;
	a2 = temp;
}

void ceshi::show()
{
	cout << "a1=" << a1 << "\na2=" << a2 << endl;
}

void ceshi::put(int b1, int b2)
{
	a1 = b1;
	a2 = b2;
}

void ceshi2()
{
	ceshi ceshi1;
	ceshi1.put(1, 2);
	ceshi1.show();
	ceshi1.sell(1, 2);
	ceshi1.show();
	ceshi1.buy();
	ceshi1.show();

}

typedef unsigned long item;//使用typedef来决定stack存储的数据类型
class stack
{
private:
	enum {
		MAX = 10
	};
	item items[MAX];
	int top;
public:
	stack();
	bool isempty()const;//cosnt表示不会修改isempty不会修改对象里面的数据
	bool isfull()const;
	bool push(const item& item1);
	bool pop(item& item1);
};

stack::stack()
{
	top = 0;
}

bool stack::isempty()const
{
	return top == 0;
}

bool stack::isfull()const
{
	return top == MAX;
}

bool stack::push(const item& item1)
{
	if (top < MAX)
	{
		items[top++] = item1;
		return true;
	}
	else
		return false;
}

bool stack::pop(item& item1)
{
	if (top > 0)
	{
		item1 = items[--top];
		return true;
	}
	else
		return false;

}

void ten10_12()
{
	stack st;
	char ch;
	unsigned long po;
	cout << "please enter A to add purchase order,\n" << "P to process a PO,or Q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q') //touper把小写字母变换为大写字母，&&左边值为假则不会运算右边的，且优先级不如！=
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))//ch非字母时返回1，否则返回零
		{
			cout << "\a";
			continue;
		}
		switch (ch)
		{
		case 'A':
		case'a':cout << "Enter a PO number to add:";
			cin >> po;
			if (st.isempty())
				cout << "stack already full\n";
			else
				st.push(po);
			break;
		case 'p':
		case'P':
			if (st.isempty())
				cout << "stack already empty\n";
			else
			{
				st.pop(po);
				cout << "PO #" << po << "popped\n";

			}
			break;

		}
		cout << "please enter A to add purchase order,\n" << "P to process a PO,or Q to quit.\n";



	}
	cout << "Bye\n";
}
















