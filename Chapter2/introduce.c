//25.03.19 ���α׷���1 é��2 �ǽ�

#define _CRT_SECURE_NO_WARNINGS

#include  <stdio.h>

//�Լ��� ���� �����ϴ� ���� ����, �ڽ��� � �ڵ带 �������� �ߴ��� �ּ����� ����θ� �ξ� �������� �������� <<

void introduce(void);

int main()
{
	introduce();

	return 0;
}

void introduce(void)
{
	char name[64]; //�̸��� ������ ����
	int age; //���̸� ������ ����
	char hello[256]; //�λ縻�� ������ ����

	// 1. �̸�, ����, �λ縻�� �Է¹޴´�.

	printf("�̸��� ����, �λ縻�� �����ּ��� : \n");
	scanf("%s %d %s", name, &age, hello);


	// 2. �̸�, ����, �λ縻�� ����Ѵ�.
	
	printf("�̸� :%s \n���� : %d \n�λ縻 : %s \n",
		name, age, hello);

	return;
}