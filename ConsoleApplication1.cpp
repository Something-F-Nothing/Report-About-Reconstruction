// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include<math.h>
#include<iostream>
#include<vector>
#include<list>
#include<map>
#include<unordered_map>
#include<string>
#include<algorithm>
#include<initializer_list>
#include<memory>
#include<iostream>

using namespace std;

void printMessage(initializer_list<string> msg);
struct stu
{
	int id;
	bool sex;
	string name;
};

bool compare(stu& l,stu& r)
{
	return l.id < r.id;
}
int _tmain(int argc, _TCHAR* argv[])
{
	vector<stu>  a{ { 1, true, "��" }, { 2, true, "��" }, { 3, false,"��" }, { 4, false,"��" }, { 5, false,"��" } };
	int i = 0;
	do
	{
		
		if (a[0].sex)
		{
			++i;
			for each (const stu& var in a)
			{
				cout << var.id << " ";
			}
			cout << endl;
		}	
	} while (next_permutation(a.begin(), a.end(),compare));

	system("pause");
}

void printMessage(initializer_list<string> msg)
{
	for (auto &it : msg)
	{
		cout << it << endl;
	}
}

