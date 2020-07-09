#include "SequentialList.h"

//构造一个空顺序表
bool SequentialList::InitList()
{
    elem = new char[MAXSIZE]; //为顺序表分配空间
    if (!elem) return false; //分配内存失败
    length = 0; //初始化表长度
    return true;
}

//销毁线性表
void SequentialList::DestroyList()
{
    if (length)delete[] elem;
}

//清空线性表
void SequentialList::ClearList()
{
    length = 0;
}

//求线性表的长度
int SequentialList::GetLength()
{
    return length;
}

//判断线性表是否为空
bool SequentialList::IsEmpty()
{
    if (length == 0)return true;
    else return false;
}

//取值
bool SequentialList::GetElem(int i, char &e)//e是取出来的数
{
    if (i<0 || i>=length)return false;
    e = elem[i];
}

//查找
int SequentialList::LocateElem(char e)
{
    for (int i = 0; i < length; i++)
    {
        if (elem[i] == e)return i;
    }
    return 0;
}

//插入
bool SequentialList::Insert(int i, char e)
{
    if (i<0 || i>length)return false;
    if (length == MAXSIZE)return false;
    for (int j = length; j >= i; j--)
    {
        elem[j + 1] = elem[j];
    }
    elem[i] = e;
    ++length;
    return true;
}

//删除
bool SequentialList::Delete(int i)
{
    if (i<0 || i>=length)return false;
    for (int j = i+1; j < length; j++)
    {
        elem[j-1] = elem[j];
    }
    --length;
    return true;
}

SequentialList::SequentialList()
{
    InitList();
}

char SequentialList::operator[](int i)
{
    char e;
    if(this->GetElem(i,e))return e;
    else return '\0';
}