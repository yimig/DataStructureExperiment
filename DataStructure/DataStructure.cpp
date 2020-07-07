// DataStructure.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "LinearList.h"

int main()
{
	LinearList list;
	list.Insert(1, 'H');
	list.Insert(2, 'e');
	list.Insert(3, 'l');
	list.Insert(4, 'l');
	list.Insert(5, 'o');
	list.Insert(6, '\0');
	for(int i=0;i<7;i++)
	{
		char e;
		if(list.GetElem(i,e))
		{
			std::cout << e;
		}
		else
		{
			std::cout << '\0';
		}
	}
	getchar();
}

