#include<iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main(void) {

	string name;
	string pwd;
	while (true) {
		system("cls");
		cout << "«Î ‰»Î’À∫≈£∫";
		cin >> name;	//»√”√ªß ‰»Î’À∫≈,≤¢±£¥ÊµΩname÷–

		cout << "«Î ‰»Î√‹¬Î£∫";
		cin >> pwd;	//»√”√ªß ‰»Î√‹¬Î,≤¢±£¥ÊµΩpwd÷–

		if (name == "54hk"&& pwd == "123456") {
			break;
		}
		else {
			cout << "”√ªß√˚ªÚ’ﬂ√‹¬Î¥ÌŒÛ" << endl;
			system("pause");
		}
	}
	system("cls");
	std::cout << "1.Õ¯’æ 404 π•ª˜" << std::endl;
	std::cout << "2.Õ¯’æ¥€∏ƒπ•ª˜" << std::endl;
	std::cout << "3.Õ¯’æπ•ª˜º«¬º" << std::endl;
	std::cout << "4.DNS π•ª˜" << std::endl;
	std::cout << "5.∑˛ŒÒ∆˜÷ÿ∆Ùπ•ª˜" << std::endl;


	/*
	std::cout << "1.Õ¯’æ 404 π•ª˜" << std::endl;
	std::cout << "2.Õ¯’æ¥€∏ƒπ•ª˜" << std::endl;
	std::cout << "3.Õ¯’æπ•ª˜º«¬º" << std::endl;
	std::cout << "4.DNS π•ª˜" << std::endl;
	std::cout << "5.∑˛ŒÒ∆˜÷ÿ∆Ùπ•ª˜" << std::endl;
	*/
	system("pause");
	return 0;
}