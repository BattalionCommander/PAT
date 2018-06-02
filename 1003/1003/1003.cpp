// 1003.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include <iostream>
#include <string>
#include <vector>
#include <regex>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::regex;






int main()
{
	int Nums=0;	
	vector<string> Strs;
	string str;
	int ABeginNums = 0;
	int AMiddleNums = 0;
	int AEndNums = 0;
	bool Bol = false;
	regex	InitialRe("^[A]{0,}[P]{1}[A]+[T]{1}[A]{0,}");
	regex	ABeginRe("^[A]+");
	regex	AEndRe("[T]{1}[A]+");
	regex	AZeroRe("^[A]{0}[P]{1}[A]+[T]{1}[A]{0}");

	cin >> Nums;
	if (Nums<1)
	{
		return 0;
	}
	for (int i = 0; i < Nums; i++)
	{
		cin >> str;
		if (str.size() >= 100 )
		{
			return 0;
		}
		for (size_t i = 0; str[i]!='\0'; i++)
		{
			if (str[i] == ' ')
			{
				return 0;
			}
		}

		Strs.push_back(str);
	}
	for (int i = 0; i < Nums; i++)
	{
		if (regex_match(Strs[i], InitialRe))
		{
			if(regex_match(Strs[i], AZeroRe))
			{
				cout << "YES" << endl;
			}
			else
			{
				ABeginNums = 0;
				AEndNums = 0;
				AMiddleNums = 0;
				Bol = false;
				for (int n = 0; Strs[i][n] == 'A'; n++)
				{
					++ABeginNums;
				}
				for (int m = 0; Strs[i][m] !='\0' ; m++)
				{
					if (Bol)
					{
						++AEndNums;
					}
					else if (Strs[i][m] =='T')
					{
						Bol = true;
					}
				}
				Bol = false;
				for (int m = 0; Strs[i][m] != 'T'; m++)
				{
					if (Bol)
					{
						++AMiddleNums;
					}
					else if (Strs[i][m] == 'P')
					{
						Bol = true;
					}
				}

				//AEndNums>=ABeginNums && AEndNums>= AMiddleNums && ABeginNums>= AMiddleNums && AEndNums/ABeginNums== AMiddleNums
				if (ABeginNums == AEndNums || AEndNums == AMiddleNums * ABeginNums)
				{
					cout << "YES" << endl;
				}
				else
				{
					cout << "NO" << endl;
				}
			}
		}
		else
		{
			cout << "NO" << endl;
			
		}
	}
	system("PAUSE");
    return 0;
}

