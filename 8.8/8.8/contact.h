#define  _CRT_SECURE_NO_WARNINGS
#define MAX 1000
#define MAX_name 20
#define MAX_tale 12
#define MAX_sex 5
#define MAX_addr 30
#include <stdio.h>
#include <string.h>

struct peoinfo
{
	char name[MAX_name];
	char tale[MAX_tale];
	char sex[MAX_sex];
	char addr[MAX_addr];
	int age;
};
//ͨѶ¼����
struct Contact
{
	struct peoinfo data[MAX];
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���

};
//��������
//ͨѶ¼��ʼ��
void InitContact(struct Contact* ps);

//����һ����Ϣ��ͨѶ¼
void AddContact(struct Contact* ps);
//��ӡͨѶ¼��Ϣ
void showContact(const struct Contact* ps);
//ɾ��ָ������ϵ��
void DelContact( struct Contact* ps);
//����ָ������ϵ��
void searchContact(const struct Contact* ps);
//�޸�ָ������ϵ��
void ModifyContact(struct Contact* ps);





