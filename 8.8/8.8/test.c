#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
//union un
//{
//	char c[5];// 1  8  1  相当于创建了 5个char 类型
//	int a;
//};//un的大小是 8  
//int main()
//{
//	//联合体 union 的大小计算 至少是最大成员的大小 当最大成员大小不是最大对齐数的整数倍时，就要对齐到最大对齐数的整数倍
//	return 0;
//}

//test .c 测试功能
//contact.c实现函数的功能
//contact.h 声明函数 
//1存放 1000个好友的信息 2增加好友信息 3删除指定的好友信息 4查找 好友信息 5修改好友信息 6 打印好友信息  7排序
void menu()
{
	printf("************************************\n");
	printf("******1.add      2.del  ************\n");
	printf("******3.search   4.modify  *********\n");
	printf("******5.show     6.sort ************\n");
	printf("******0.exit      ******************\n");
	printf("************************************\n");


}
enum option
{
	exit,
	Add,
	Del,
	search,
	modify,
	show,
	sort
};
int main()
{
	
	int input = 0;
	//创建通讯录
	struct Contact con;//con 就是通讯录 里面包含1000个元素的数据和 size

	//初始化通讯录
	InitContact(&con);
	do{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
		case exit:
			printf("退出通讯录\n");
			break;
		case Add:
			AddContact(&con);//要知道有多少个元素 才好放
			break;
		case Del:
			DelContact(&con);
			break;
		case search:
			searchContact(&con);
			break;
		case modify:
			
			ModifyContact(&con);
			break;
		case show:
			showContact(&con);
			break;
		case sort:
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}
