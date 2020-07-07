#include "LinearList.h"

//����һ����˳���
bool LinearList::InitList()
{
	elem = new char[MAXSIZE]; //Ϊ˳������ռ�
	if (!elem) return false; //�����ڴ�ʧ��
	length = 0; //��ʼ������
	return true;
}

//�������Ա�
void LinearList::DestroyList()
{
	if (length)delete[] elem;
}

//������Ա�
void LinearList::ClearList()
{
	length = 0;
}

//�����Ա�ĳ���
int LinearList::GetLength()
{
	return length;
}

//�ж����Ա��Ƿ�Ϊ��
bool LinearList::IsEmpty()
{
	if (length == 0)return true;
	else return false;
}

//ȡֵ
bool LinearList::GetElem(int i, char &e)//e��ȡ��������
{
	if (i<1 || i>length)return false;
	e = elem[i - 1];
}

//����
int LinearList::LocateElem(char e)
{
	for (int i = 0; i < length; i++)
	{
		if (elem[i] == e)return i + 1;
	}
	return 0;
}

//����
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

//ɾ��
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