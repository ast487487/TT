// enum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;









int _tmain(int argc, _TCHAR* argv[])
{
	/*
	typedef enum  {
	apple,//don't use same name in other enum
	banana=5,//it's rvalue
	orange
	}fruit;
	fruit a = apple;
	*/

	//or
	
	/*
	enum  fruit{
		apple,//don't use same name in other enum	
		banana = 5,
		orange
	}a;
	a = fruit::apple;//also can do this
	*/

	//or

	/*
	enum  fruit{
	apple,//don't use same name in other enum
	banana = 5,
	orange
	};
	fruit a =  fruit::apple;//also can do this

	*/

	//or

    enum  {
		 apple,//don't use same name in other enum
		banana = 5,
		orange
	};
	int  a = apple;
	
	cout << a<<endl;
	a = banana;
	cout << a << endl;
	a = orange;
	cout << a << endl;
	if (a == orange)
	{
		cout << "ok" << endl;
	}
	cout << banana << endl;	
	system("pause");

	//v4
	return 0;
}

