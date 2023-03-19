/*
* 학번 : 202210345
* 실습자 : 김은진
* 실습일 : 2022.03.19
* 프로그램 내용: 거스름돈 입력 받아 동전의 개수를 출력하는 프로그램
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Change(int n); // 동전 개수를 구하고 출력하는 함수

int main() {
	int change;

	printf("거스름돈? ");
	scanf("%d", &change); // 거스름돈을 입력받아 change 변수에 저장한다.

	Change(change); // 함수를 이용
}
int Change(int n) {
	int n500coin, n100coin, n50coin, n10coin; // 500원, 100원, 50원, 10원 동전 개수 변수
	int change; // 거스름돈을 저장하는 변수

	change = n; // 먼저 거스름돈을 change 변수에 저장

	n500coin = n / 500; // 개수
	n = n % 500; // 나머지

	n100coin = n / 100; // 나머지를 이용해 개수를 구함
	n = n % 100;

	n50coin = n / 50;
	n = n % 50;

	n10coin = n / 10;
	n = n % 10;

	printf("%d원의 동전 갯수는 500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개 입니다.", change, n500coin, n100coin, n50coin, n10coin);
	

}