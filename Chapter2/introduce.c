//25.03.19 프로그래밍1 챕터2 실습

#define _CRT_SECURE_NO_WARNINGS

#include  <stdio.h>

//함수는 먼저 선언하는 것이 좋고, 자신이 어떤 코드를 적으려고 했는지 주석으로 적어두면 훨씬 가독성이 높아진다 <<

void introduce(void);

int main()
{
	introduce();

	return 0;
}

void introduce(void)
{
	char name[64]; //이름을 저장할 변수
	int age; //나이를 저장할 변수
	char hello[256]; //인사말을 저장할 변수

	// 1. 이름, 나이, 인사말을 입력받는다.

	printf("이름과 나이, 인사말을 적어주세요 : \n");
	scanf("%s %d %s", name, &age, hello);


	// 2. 이름, 나이, 인사말을 출력한다.
	
	printf("이름 :%s \n나이 : %d \n인사말 : %s \n",
		name, age, hello);

	return;
}