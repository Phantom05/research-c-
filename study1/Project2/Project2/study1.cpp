#include <iostream>

int MyFunc(int num) {
	num++;
	return num;
}

int MyFunc(int a, int b) {
	return a + b;
}

// 디폴트 값
int MyFuncOne(int num = 7) {
	return num + 1;
}
int main(void) {
	
	/*
	C++ 버전의 Hello World 출력 프로그램
	int num = 20;
	std::cout << "Hello, world" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << "A";
	std::cout << ' ' << 3.14 <<std::endl;
	*/
	

	/*
	scanf를 대신하는 데이터의 입력
	int val1;
	std::cout << "첫 번재 숫자입력: ";
	std::cin >> val1; //입력의 기본 구성

	int val2;
	std::cout << "두 번째 숫자입력: ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈 결과 : " << result << std::endl;
	*/

	/*
	C++의 지역 번수 선언
	int val1, val2;
	int result = 0;
	std::cout << "두 개의 숫자입력: ";
	std::cin >> val1 >> val2;

	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++) {
			result += i;
		}
	}
	else {
		for (int i = val2 + 1; i < val1; i++) {
			result += i;
		}
	}
	std::cout << "두 수 사이의 정수 합: " << result << std::endl;
	*/

	char name[100];
	char lang[200];
	std::cout << "이름은 무엇입니까? ";
	std::cin >> name;

	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요? ";
	std::cin >> lang;

	std::cout << "내 이름은" << name << "입니다. \n";
	std::cout<< "제일 좋아하는 언어는 " << lang << "입니다." << std::endl;

	//함수의 이름이 같아도 인자의 정보를 동시에 참조하여 호출할 함수를 결정한다. 이러한 형태의 함수정의를 가르켜 함수 오버로딩 이라고 합니다.
	std::cout << MyFunc(20) << std::endl;
	std::cout << MyFunc(20,40) << std::endl;

	/*
		int MyFunc(char c){...}
		int MyFunc(int n ){...} 매개변수의 자료형이 다르므로 함수 오버로딩 성립

		int MyFunc(int n){...}
		int MyFunc(int n1, int n2){...} 매개변수의 수가 다르므로 함수 오버로딩 성립

		void MyFunc(int n){...}
		int MyFunc(int n){...} 반환형의 차이는 함수 오버로딩의 조건을 만족시키지 않는다.
	*/


	return 0;
}

