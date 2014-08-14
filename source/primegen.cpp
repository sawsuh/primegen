#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include "primegen.h"
int main(int argc, char *argv[])
{
	std::string type = argv[1];
	if (type == "amount")
	{
		int num = std::atoi(argv[2]);
		std::vector<int> p = prime_amount(num);
		for (int i = 0; i < p.size(); i++)
		{
			std::cout << p[i] << " | ";
		}
		std::cout << std::endl;
	}
	else if (type == "upto")
	{
		int num = std::atoi(argv[2]);
		std::vector<int> p = prime_upto(num);
		for (int i = 0; i < p.size(); i++)
		{
			std::cout << p[i] << " | ";
		}
		std::cout << std::endl;
	}
	else {
		std::cout << "please specify upto or amount" << std::endl;
	}
}
