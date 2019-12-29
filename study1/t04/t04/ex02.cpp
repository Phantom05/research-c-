#include "stdafx.h"

// %d  : 정수 출력
// %f : 실수 출력 .4f 이런식으로하면 소수점 4번째 자리까지 반올림해서 출력한다고 함.
// %g : 실수 출력 (지수 형태로도 출력)
// %c : 문자 출력 (알파뱃, 숫자, 몇몇 기호, \n ) - 한글, 한자, 유니코드 X
// %s : 문자열(문자들이 열거) 출력 => 소문자 따운표로 하면 안됨.
int main() {
	/*
	// 변수 이름: 알파벳 대소문자, _, 숫자(첫번째 글자)
	int a = 5; // 초기화
	int b = 3;
	int hap = a + b;
	int cha = a - b;
	int gop = a * b;
	int mok = a / b;
	int namuji = a % b;

	printf("%d + %d = %d\n",a,b,hap);
	printf("%d - %d = %d\n", a, b, cha);
	printf("%d * %d = %d\n", a, b, gop);
	printf("%d / %d = %d\n", a, b, mok);
	printf("%d %% %d = %d\n", a, b, namuji);
	*/
	// 변수 이름: 알파벳 대소문자, _, 숫자(첫번째 글자)


	/*
	// float : 32비트 (4바이트), 실수를 담는 데 쓰임
	float a = 9.8; // 초기화
	float b = 3.14;
	float hap = a + b;
	float cha = a - b;
	float gop = a * b;
	float mok = a / b;

	printf("%f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gop);
	printf("%f / %f = %f\n", a, b, mok);
	*/

	double a = 9.8; // 초기화
	double b = 3.14;
	double hap = a + b;
	double cha = a - b;
	double gop = a * b;
	double mok = a / b;

	printf("%f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gop);
	printf("%f / %f = %f\n", a, b, mok);

	


}