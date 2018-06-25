// chunxu.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CBase
{
public:
	virtual void test() = 0;//纯虚函数=不能定义，只能被继承。
	virtual void display()
	{
		cout << "基类" << endl;
	}
};
class CDervid :public CBase
{
public:
	void test()
	{

	}
	void display()
	{
		cout << "派生类" << endl;
	}
};
int main()
{
	CBase *p;
	CDervid obj2;
//	p = &obj2;
//	p->display();
    return 0;
}

