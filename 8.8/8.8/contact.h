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
//通讯录类型
struct Contact
{
	struct peoinfo data[MAX];
	int size;//记录当前已经有的元素个数

};
//声明函数
//通讯录初始化
void InitContact(struct Contact* ps);

//增加一个信息到通讯录
void AddContact(struct Contact* ps);
//打印通讯录信息
void showContact(const struct Contact* ps);
//删除指定的联系人
void DelContact( struct Contact* ps);
//查找指定的联系人
void searchContact(const struct Contact* ps);
//修改指定的联系人
void ModifyContact(struct Contact* ps);





