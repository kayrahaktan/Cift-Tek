#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	system("title TEK-��FT");
	setlocale(LC_ALL, "Turkish");
	int girdi = 1;
	while (girdi!=0)
	{
		std::cout << "say�: ";
		std::cin >> girdi;

		if (girdi % 2 == 0) {
			std::cout << "�ifttir." << endl;
		}
		else if (girdi%2==1 || girdi%2==-1) {
			std::cout << "tektir" << endl;
		}
	}
	return 0;
}