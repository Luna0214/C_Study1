//#include <stdio.h>

//int main(void)
//{


	// If else
	// ����:������ ź�ٰ� ����. �л� / �Ϲ������� ���� (�Ϲ��� ����: 20��)
	/*int age = 15;
	if (age >= 20)
		printf("�Ϲ��� �Դϴ�\n");
	else
		printf("�л��Դϴ�\n");*/

	/*int age = 25;
	if (age >= 20)
		printf("�Ϲ��� �Դϴ�\n");
	else
		printf("�л��Դϴ�\n");*/


	// �ʵ��л�(8~13) / ���л�(14~16) / �����л�(17~19) ���� �����ϸ�?
	// = if / else / else
	/*
	int age = 25; // 8~19
	if (age >= 8 && age <= 13)
	{
		printf("�ʵ��л��Դϴ�.\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("���л��Դϴ�.\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("�����л��Դϴ�.\n");
	}
	else
	{
		printf("�л��� �ƴմϴ�.\n");
	}*/

	// break / continue
	// ����: 1~30 ������ �ִ� �ݿ��� 1~5������ ���� ��ǥ�� �մϴ�.

	/*
	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("������ �л��� ���� ������.\n");
			break;
		}
		printf("%d �� �л��� ���� ��ǥ �غ� �ϼ���.\n", i);
	}
	*/


	//����: 1~30������ �ִ� �ݿ��� 7�� �л��� ���ļ� �Ἦ
	// 7���� �����ϰ� 6~10������ ���� ��ǥ�� �ϼ���.

	/*
	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d �� �л��� �Ἦ�Դϴ�.\n", i);
				continue;
			}
			printf("%d �� �л��� ���� ��ǥ �غ� �ϼ���.\n", i);
		}
	}
	*/



	// && || (and/or)
	/*
	int a = 10;
	int b = 11;
	int c = 12;
	int d = 13;

	if (a == b && c == d)
	{
		printf("a �� b �� ����, c �� d �� �����ϴ�.\n");
	}
	else
	{
		printf("���� ���� �ٸ��׿�.\n");
	}
	*/
	/*
	int a = 10;
	int b = 11;
	int c = 13;
	int d = 13;

	if (a == b || c == d)
	{
		printf("a �� b Ȥ�� c �� d �� ���� �����ϴ�.\n");
	}
	else
	{
		printf("���� ���� �ٸ��׿�.\n");
	}
	*/

	//return 0;
//}