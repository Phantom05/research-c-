#include <iostream>

int main(void) {
	
	int num = 20;
	std::cout << "Hello, world" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << "A";
	std::cout << ' ' << 3.14 <<std::endl;

	/*
	int val1;
	std::cout << "ù ���� �����Է�: ";
	std::cin >> val1; //�Է��� �⺻ ����

	int val2;
	std::cout << "�� ��° �����Է�: ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "���� ��� : " << result << std::endl;
	*/

	int val1, val2;
	int result = 0;
	std::cout << "�� ���� �����Է�: ";
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
	std::cout << "�� �� ������ ���� ��: " << result << std::endl;
	return 0;
}