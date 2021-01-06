#include <iostream>

#include "templateclass.h"

int main() {

	TemplateClass<int> temp_int(4);
	TemplateClass<long> temp_long(4);
	TemplateClass<double> temp_double(4);
	TemplateClass<char> temp_char(4);

	temp_int.setArr();
	temp_int.showArr();
	std::cout << "\nMax = " << temp_int.amax(4) << std::endl;

	temp_long.setArr();
	temp_long.showArr();
	std::cout << "\nAvg = " << temp_long.avg(4) << std::endl;

	temp_double.setArr();
	temp_double.showArr();
	std::cout << "\nMax = " << temp_double.amax(4) << std::endl;

	temp_char.setArr();
	temp_char.showArr();
	std::cout << "\nAvg = " << temp_char.avg(4) << std::endl;
	std::cout << "\nMax = " << temp_char.amax(4) << std::endl;
	
	return 0;
}