// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <string>
using std::cin;
using std::cout;
using std::string;


void func(bool &b, int &n,string &str)
{
	switch (n)
	{
	case 0:

		if (b)
		{
			str.insert(0, "ling ");
		}
		else
		{
			str.insert(0, "ling");
			b = true;
		}

		break;
	case 1:
		if (b)
		{
			str.insert(0, "yi ");
		}
		else
		{
			str.insert(0, "yi");
			b = true;
		}
		break;
	case 2:
		if (b)
		{
			str.insert(0, "er ");
		}
		else
		{
			str.insert(0, "er");
			b = true;
		}

		break;
	case 3:
		if (b)
		{
			str.insert(0, "san ");
		}
		else
		{
			str.insert(0, "san");
			b = true;
		}

		break;
	case 4:
		if (b)
		{
			str.insert(0, "si ");
		}
		else
		{
			str.insert(0, "si");
			b = true;
		}

		break;
	case 5:
		if (b)
		{
			str.insert(0, "wu ");
		}
		else
		{
			str.insert(0, "wu");
			b = true;
		}

		break;
	case 6:
		if (b)
		{
			str.insert(0, "liu ");
		}
		else
		{
			str.insert(0, "liu");
			b = true;
		}

		break;
	case 7:
		if (b)
		{
			str.insert(0, "qi ");
		}
		else
		{
			str.insert(0, "qi");
			b = true;
		}

		break;
	case 8:
		if (b)
		{
			str.insert(0, "ba ");
		}
		else
		{
			str.insert(0, "ba");
			b = true;
		}

		break;
	case 9:
		if (b)
		{
			str.insert(0, "jiu ");
		}
		else
		{
			str.insert(0, "jiu");
			b = true;
		}

		break;

	}

}

int main()
{
	int n = 0;
	string All ;
	int num = 0;
	int nums = 0;
	bool q = false;
	string str;
	size_t w = 0;
	cin >> All;

	for (; All[w]!='\0'; w++)
	{
		num += All[w]-48;
	}
	if (w<pow(10,100))
	{
		nums = num;
		for(; nums!=0;)
		{
			nums /= 10;
			n=num - nums * 10;
			num /= 10;

			func(q, n, str);
		}
		cout << str;

	}
	system("PAUSE");
	return 0;
}



