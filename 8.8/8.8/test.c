#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
//union un
//{
//	char c[5];// 1  8  1  �൱�ڴ����� 5��char ����
//	int a;
//};//un�Ĵ�С�� 8  
//int main()
//{
//	//������ union �Ĵ�С���� ����������Ա�Ĵ�С ������Ա��С��������������������ʱ����Ҫ���뵽����������������
//	return 0;
//}

//test .c ���Թ���
//contact.cʵ�ֺ����Ĺ���
//contact.h �������� 
//1��� 1000�����ѵ���Ϣ 2���Ӻ�����Ϣ 3ɾ��ָ���ĺ�����Ϣ 4���� ������Ϣ 5�޸ĺ�����Ϣ 6 ��ӡ������Ϣ  7����
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
	//����ͨѶ¼
	struct Contact con;//con ����ͨѶ¼ �������1000��Ԫ�ص����ݺ� size

	//��ʼ��ͨѶ¼
	InitContact(&con);
	do{
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch (input)
		{
		case exit:
			printf("�˳�ͨѶ¼\n");
			break;
		case Add:
			AddContact(&con);//Ҫ֪���ж��ٸ�Ԫ�� �ź÷�
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
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}
