#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//����size ֻ��0��
}

void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼�������޷�����\n");
	}
	else
	{
		printf("����������\n");
		scanf("%s", ps->data[ps->size].name);
		printf("����������\n");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰\n");
		scanf("%s", ps->data[ps->size].tale);
		printf("�������ַ\n");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}
}
static int FindByname(struct Contact* ps, char name[MAX_name])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
		return -1;
}
	void DelContact(struct Contact* ps)
	{
	char name[MAX_name];
	printf("������Ҫɾ���˵�����\n");
	scanf("%s", name);
	//1.����Ҫɾ�����˵�λ�� 
	//�ҵ��˷���Ԫ���±�
	//�Ҳ�������-1
	int pos = FindByname(ps, name);
		//2 ɾ��
	if (pos==-1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

	void searchContact( struct Contact* ps)
	{
		char name[MAX_name];
		printf("������Ҫ�����˵�����:>");
		scanf("%s", &name);
		int pos = FindByname(ps, name);
		if (pos == -1)
		{
			printf("Ҫɾ�����˲�����\n");
		}
		else
		{
			printf("%20s\t%4d\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
			printf("%20s\t%4d\t%5s\t%12s\t%20s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tale,
				ps->data[pos].addr);
		}

	}
	void showContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%20s\t%4d\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");

		for (i = 0; i < ps->size; i++)
		{
			printf("%20s\t%4d\t%5s\t%12s\t%20s\n",
				ps->data[i].name,
				ps->data[i].age, 
				ps->data[i].sex, 
				ps->data[i].tale, 
				ps->data[i].addr);
		}
	}
}
void ModifyContact(struct Contact* ps)
	{
		char name[MAX_name];
		printf("������Ҫ�޸��˵�����\n");
		scanf("%s", name);
		int pos = FindByname(ps, name);
		if (pos == -1)
		{
			printf("Ҫ�޸�����Ϣ������\n");
		}
		else
		{
			printf("����������\n");
			scanf("%s", ps->data[pos].name);
			printf("����������\n");
			scanf("%d", &(ps->data[pos].age));
			printf("�������Ա�\n");
			scanf("%s", ps->data[pos].sex);
			printf("������绰\n");
			scanf("%s", ps->data[pos].tale);
			printf("�������ַ\n");
			scanf("%s", ps->data[pos].addr);
			ps->size++;
			printf("��ӳɹ�\n");
		
		
		}
	}
