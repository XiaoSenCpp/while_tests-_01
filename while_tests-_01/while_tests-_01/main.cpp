#include<iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main(void) {

	string name;
	string pwd;
	while (true) {
		system("cls");
		cout << "�������˺ţ�";
		cin >> name;	//���û������˺�,�����浽name��

		cout << "���������룺";
		cin >> pwd;	//���û���������,�����浽pwd��

		if (name == "54hk"&& pwd == "123456") {
			break;
		}
		else {
			cout << "�û��������������" << endl;
			system("pause");
		}
	}
	system("cls");
	std::cout << "1.��վ 404 ����" << std::endl;
	std::cout << "2.��վ�۸Ĺ���" << std::endl;
	std::cout << "3.��վ������¼" << std::endl;
	std::cout << "4.DNS ����" << std::endl;
	std::cout << "5.��������������" << std::endl;


	/*
	std::cout << "1.��վ 404 ����" << std::endl;
	std::cout << "2.��վ�۸Ĺ���" << std::endl;
	std::cout << "3.��վ������¼" << std::endl;
	std::cout << "4.DNS ����" << std::endl;
	std::cout << "5.��������������" << std::endl;
	*/
	system("pause");
	return 0;
}