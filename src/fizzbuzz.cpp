#include "fizzbuzz.hpp"
#include <string>

std::string play(const int& value)
{
	std::string retVal;

	if(value % 3 == 0)
	{
		retVal = "Fizz";
	}
	else
	{
		retVal = std::to_string(value);
	}


    return retVal;
}
