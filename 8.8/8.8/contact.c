#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//设置size 只有0；
}

void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满，无法增加\n");
	}
	else
	{
		printf("请输入名字\n");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄\n");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话\n");
		scanf("%s", ps->data[ps->size].tale);
		printf("请输入地址\n");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
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
	printf("请输入要删除人的名字\n");
	scanf("%s", name);
	//1.查找要删除的人的位置 
	//找到了返回元素下标
	//找不到返回-1
	int pos = FindByname(ps, name);
		//2 删除
	if (pos==-1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

	void searchContact( struct Contact* ps)
	{
		char name[MAX_name];
		printf("请输入要查找人的名字:>");
		scanf("%s", &name);
		int pos = FindByname(ps, name);
		if (pos == -1)
		{
			printf("要删除的人不存在\n");
		}
		else
		{
			printf("%20s\t%4d\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "地址");
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
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%20s\t%4d\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "地址");

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
		printf("请输入要修改人的名字\n");
		scanf("%s", name);
		int pos = FindByname(ps, name);
		if (pos == -1)
		{
			printf("要修改人信息不存在\n");
		}
		else
		{
			printf("请输入名字\n");
			scanf("%s", ps->data[pos].name);
			printf("请输入年龄\n");
			scanf("%d", &(ps->data[pos].age));
			printf("请输入性别\n");
			scanf("%s", ps->data[pos].sex);
			printf("请输入电话\n");
			scanf("%s", ps->data[pos].tale);
			printf("请输入地址\n");
			scanf("%s", ps->data[pos].addr);
			ps->size++;
			printf("添加成功\n");
		
		
		}
	}
