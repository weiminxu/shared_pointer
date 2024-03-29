#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <iterator>
#include <memory>
#include "shared_pointer.h"

int main()
{
	int amtToStore;
	std::cout << "How many numbers do you want to store: ";
	std::cin >> amtToStore;
	std::shared_ptr<int[]> pNums(new int[amtToStore]); //use new to create 
	//std::shared_ptr<int> pNums = std::make_shared<int>(amtToStore);	
	if (pNums != NULL)
	{
		int i = 0;
		while (i < amtToStore)
		{
			std::cout << "Enter a Number: ";
			std::cin >> pNums[i];
			i++;
		}
	}
	std::cout << "You entered these numbers\n";
	for (int i = 0; i < amtToStore; i++)
	{
		std::cout << pNums[i] << "\n";
	}

	return 0;
}