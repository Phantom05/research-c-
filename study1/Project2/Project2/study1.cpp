#include <iostream>

int MyFunc(int num) {
	num++;
	return num;
}

int MyFunc(int a, int b) {
	return a + b;
}

// ����Ʈ ��
int MyFuncOne(int num = 7) {
	return num + 1;
}
int main(void) {
	
	/*
	C++ ������ Hello World ��� ���α׷�
	int num = 20;
	std::cout << "Hello, world" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << "A";
	std::cout << ' ' << 3.14 <<std::endl;
	*/
	

	/*
	scanf�� ����ϴ� �������� �Է�
	int val1;
	std::cout << "ù ���� �����Է�: ";
	std::cin >> val1; //�Է��� �⺻ ����

	int val2;
	std::cout << "�� ��° �����Է�: ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "���� ��� : " << result << std::endl;
	*/

	/*
	C++�� ���� ���� ����
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
	*/

	char name[100];
	char lang[200];
	std::cout << "�̸��� �����Դϱ�? ";
	std::cin >> name;

	std::cout << "�����ϴ� ���α׷��� ���� �����ΰ���? ";
	std::cin >> lang;

	std::cout << "�� �̸���" << name << "�Դϴ�. \n";
	std::cout<< "���� �����ϴ� ���� " << lang << "�Դϴ�." << std::endl;

	//�Լ��� �̸��� ���Ƶ� ������ ������ ���ÿ� �����Ͽ� ȣ���� �Լ��� �����Ѵ�. �̷��� ������ �Լ����Ǹ� ������ �Լ� �����ε� �̶�� �մϴ�.
	std::cout << MyFunc(20) << std::endl;
	std::cout << MyFunc(20,40) << std::endl;

	/*
		int MyFunc(char c){...}
		int MyFunc(int n ){...} �Ű������� �ڷ����� �ٸ��Ƿ� �Լ� �����ε� ����

		int MyFunc(int n){...}
		int MyFunc(int n1, int n2){...} �Ű������� ���� �ٸ��Ƿ� �Լ� �����ε� ����

		void MyFunc(int n){...}
		int MyFunc(int n){...} ��ȯ���� ���̴� �Լ� �����ε��� ������ ������Ű�� �ʴ´�.
	*/


	return 0;
}

