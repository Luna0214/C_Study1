//#include <stdio.h>

/*int main(void)
{
	// Test
	//printf("Hello World \n");

	// ������ ������ ���� ����
	/*int age = 12; //�ڷ��� int, ������ age
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/


	// �Ǽ��� ������ ���� ����
	/*float f = 46.5f; //�ڷ��� float, ������ f
	printf("%.2f\n", f); //�Ҽ� ��°�ڸ����� = %.2f
	double d = 4.428;
	printf("%.2lf\n", d); //������ �ڸ� �ݿø� ��*/

	// ����� ������ ���� ����
	/*const int YEAR = 2000; // ���� �� �� ���� ���� const = ���
	printf("�¾ �⵵ : %d\n", YEAR);*/
	
	//����
	/*int add = 3 + 7; // value = 10
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7); //���� ��� ����
	printf("%d * %d = %d\n", 3, 7, 3 * 7);*/

	//scanf : Ű���� �Է��� �޾Ƽ� ����
	/*int input;
	printf("���� �Է��ϼ���: ");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);*/

	//���� scanf
	/*int one, two, three;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° �� : %d\n", one);
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three);*/

	//����, ���ڿ�
	/*char c = 'A';
	printf("%c\n", c);*/

	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/


	// ------------------------------------------------------------

	// ������Ʈ
	// �������� �������� ������ �Լ� (���� �ۼ�)
	// �䱸����: �̸�? ����? ������? Ű? ���˸�?
	/*
	char name[256];
	printf("�̸��� ������?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("�� ���̿���?");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ� �� Kg �̿���?");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� �� Cm �̿���?");
	scanf_s("%lf", &height);
	
	char what[256];
	printf("���� ���˸� ���������?");
	scanf_s("%s", what, sizeof(what));


	// ���� ���� ���
	printf("\n\n--- ������ ���� ---\n\n");
	printf(" �̸�       : %s\n", name);
	printf(" ����       : %d\n", age);
	printf(" ������     : %.2f\n", weight);
	printf(" Ű         : %.2lf\n", height);
	printf(" ����       : %s\n", what);
	*/
	//return 0;
//}