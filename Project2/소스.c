/*
* �й� : 202210345
* �ǽ��� : ������
* �ǽ��� : 2022.03.19
* ���α׷� ����: �Ž����� �Է� �޾� ������ ������ ����ϴ� ���α׷�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Change(int n); // ���� ������ ���ϰ� ����ϴ� �Լ�

int main() {
	int change;

	printf("�Ž�����? ");
	scanf("%d", &change); // �Ž������� �Է¹޾� change ������ �����Ѵ�.

	Change(change); // �Լ��� �̿�
}
int Change(int n) {
	int n500coin, n100coin, n50coin, n10coin; // 500��, 100��, 50��, 10�� ���� ���� ����
	int change; // �Ž������� �����ϴ� ����

	change = n; // ���� �Ž������� change ������ ����

	n500coin = n / 500; // ����
	n = n % 500; // ������

	n100coin = n / 100; // �������� �̿��� ������ ����
	n = n % 100;

	n50coin = n / 50;
	n = n % 50;

	n10coin = n / 10;
	n = n % 10;

	printf("%d���� ���� ������ 500�� %d��, 100�� %d��, 50�� %d��, 10�� %d�� �Դϴ�.", change, n500coin, n100coin, n50coin, n10coin);
	

}