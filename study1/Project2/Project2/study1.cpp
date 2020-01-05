#include <iostream>

int main(void) {
	
	int num = 20;
	std::cout << "Hello, world" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << "A";
	std::cout << ' ' << 3.14 <<std::endl;

	/*
	int val1;
	std::cout << "첫 번재 숫자입력: ";
	std::cin >> val1; //입력의 기본 구성

	int val2;
	std::cout << "두 번째 숫자입력: ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈 결과 : " << result << std::endl;
	*/

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
	return 0;
}