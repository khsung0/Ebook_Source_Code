/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	//rand �Լ��� ��������ó��
	//�������� ��� ���α׷���
	//����� �� �Ϸ��� ���ڵ���
	//�������� ���� srand �Լ���
	//���� ��� ����ð��� �Ű�������
	//�޾Ƽ� �ʱ�ȭ ��Ű�� ��� ���ϴ�
	//���� ������ ����������.
	srand(time(NULL));
	//100���� ���� �������� 1�� ���ϸ�
	//1���� 100���� ������ ���� �� �ִ�.
	int answer = (rand()%100)+1;
	int count=1;
	while (answer!=count) {
		printf("���� ���� : %d\n", count);
		count++;
	}
	printf("������� : %d", count);
}
*/