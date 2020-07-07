#ifndef LINEARLIST_H
#define LINEARLIST_H

#define MAXSIZE 100


class LinearList
{
private:
	char *elem; //指向数据元素的基地址
	int length; //线性表的当前长度

public:

	//构造一个空顺序表
	bool InitList();

	//销毁线性表
	void DestroyList();

	//清空线性表
	void ClearList();

	//求线性表的长度
	int GetLength();

	//判断线性表是否为空
	bool IsEmpty();

	//取值
	bool GetElem(int i, char &e);//e是取出来的数

	//查找
	int LocateElem(char e);

	//插入
	bool Insert(int i, char e);

	//删除
	bool Delete(int i);

	LinearList();
};

#endif

