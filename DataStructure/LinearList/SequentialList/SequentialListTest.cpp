// DataStructure.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "SequentialList.h"

int main()
{
    SequentialList list;
    list.Insert(0, 'H');
    list.Insert(1, 'e');
    list.Insert(2, 'l');
    list.Insert(3, 'l');
    list.Insert(4, 'o');
    list.Insert(5, '\0');
    for(int i=0;i<6;i++)
    {
        std::cout << list[i];
    }
    std::cout << list.LocateElem('l');
    getchar();
}

