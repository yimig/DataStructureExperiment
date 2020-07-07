#include "LinearList.h"

//构造一个空顺序表
bool LinearList::InitList()
{
	elem = new char[MAXSIZE]; //为顺序表分配空间
	if (!elem) return false; //分配内存失败
	length = 0; //初始化表长度
	return true;
}

//销毁线性表
void LinearList::DestroyList()
{
	if (length)delete[] elem;
}

//清空线性表
void LinearList::ClearList()
{
	length = 0;
}

//求线性表的长度
int LinearList::GetLength()
{
	return length;
}

//判断线性表是否为空
bool LinearList::IsEmpty()
{
	if (length == 0)return true;
	else return false;
}

//取值
bool LinearList::GetElem(int i, char &e)//e是取出来的数
{
	if (i<1 || i>length)return false;
	e = elem[i - 1];
}

//查找
int LinearList::LocateElem(char e)
{
	for (int i = 0; i < length; i++)
	{
		if (elem[i] == e)return i + 1;
	}
	return 0;
}

//插入
bool LinearList::Insert(int i, char e)
{
	if (i<1 || i>length + 1)return false;
	if (length == MAXSIZE)return false;
	for (int j = length - 1; j >= i - 1; j--)
	{
		elem[j + 1] = elem[j];
	}
	elem[i - 1] = e;
	++length;
	return true;
}

//删除
bool LinearList::Delete(int i)
{
	if (i<1 || i>length)return false;
	for (int j = i; j <= length - 1; j++)
	{
		elem[j - 1] = elem[j];
	}
	--length;
	return true;
}

LinearList::LinearList()
{
	InitList();
}