#ifndef LINEARLIST_H
#define LINEARLIST_H

#define MAXSIZE 100


class LinearList
{
private:
	char *elem; //ָ������Ԫ�صĻ���ַ
	int length; //���Ա�ĵ�ǰ����

public:

	//����һ����˳���
	bool InitList();

	//�������Ա�
	void DestroyList();

	//������Ա�
	void ClearList();

	//�����Ա�ĳ���
	int GetLength();

	//�ж����Ա��Ƿ�Ϊ��
	bool IsEmpty();

	//ȡֵ
	bool GetElem(int i, char &e);//e��ȡ��������

	//����
	int LocateElem(char e);

	//����
	bool Insert(int i, char e);

	//ɾ��
	bool Delete(int i);

	LinearList();
};

#endif

