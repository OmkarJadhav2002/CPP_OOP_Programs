#include <iostream>
#include <conio.h>

//object slicing
class A
{
public:
	double a;
	A()
	{
		this->a = 10;
	}
};

class B
{
public:
	double b;
	B()
	{
		this->b = 10;
	}
};

class C
{
public:
	double c;
	C()
	{
		this->c = 10;
	}
};

class D: public A, public B, public C
{
public:
	double d;
	D()
	{
		this->d = 10;
	}
};

int main()
{
	D dobj;
	//upcasting
	A* pa = &dobj;
	B* pb = &dobj;
	C* pc = &dobj;
	//D* pd = &dobj;

	std::cout << "&dobj: " << &dobj << std::endl;
	std::cout << "pa: " << pa << std::endl;
	std::cout << "pb: " << pb << std::endl;
	std::cout << "pc: " << pc << std::endl;

	std::cout << pd->a << std::endl;
	std::cout << pd->b << std::endl;
	std::cout << pd->c << std::endl;
	std::cout << pd->d << std::endl;

	D* pd = (D*)&dobj;
	getch();
	return 0;
}
