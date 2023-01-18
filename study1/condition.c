//#include <stdio.h>

//int main(void)
//{


	// If else
	// 예제:버스를 탄다고 가정. 학생 / 일반인으로 구분 (일반인 기준: 20세)
	/*int age = 15;
	if (age >= 20)
		printf("일반인 입니다\n");
	else
		printf("학생입니다\n");*/

	/*int age = 25;
	if (age >= 20)
		printf("일반인 입니다\n");
	else
		printf("학생입니다\n");*/


	// 초등학생(8~13) / 중학생(14~16) / 고등학생(17~19) 으로 구분하면?
	// = if / else / else
	/*
	int age = 25; // 8~19
	if (age >= 8 && age <= 13)
	{
		printf("초등학생입니다.\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("중학생입니다.\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("고등학생입니다.\n");
	}
	else
	{
		printf("학생이 아닙니다.\n");
	}*/

	// break / continue
	// 예제: 1~30 번까지 있는 반에서 1~5번까지 조별 발표를 합니다.

	/*
	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("나머지 학생은 집에 가세요.\n");
			break;
		}
		printf("%d 번 학생은 조별 발표 준비를 하세요.\n", i);
	}
	*/


	//예제: 1~30번까지 있는 반에서 7번 학생을 아파서 결석
	// 7번을 제외하고 6~10번까지 조별 발표를 하세요.

	/*
	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d 번 학생은 결석입니다.\n", i);
				continue;
			}
			printf("%d 번 학생은 조별 발표 준비를 하세요.\n", i);
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
		printf("a 와 b 는 같고, c 와 d 도 같습니다.\n");
	}
	else
	{
		printf("값이 서로 다르네요.\n");
	}
	*/
	/*
	int a = 10;
	int b = 11;
	int c = 13;
	int d = 13;

	if (a == b || c == d)
	{
		printf("a 와 b 혹은 c 와 d 의 값이 같습니다.\n");
	}
	else
	{
		printf("값이 서로 다르네요.\n");
	}
	*/

	//return 0;
//}