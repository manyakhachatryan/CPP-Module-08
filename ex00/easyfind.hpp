#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template <typename T>

int easyfind(const T& arr, int num)
{
	typename T::const_iterator c_it = arr.begin();
	for(; c_it != arr.end(); ++c_it)
	{
		if (*c_it == num)
		{
			std::cout << "Finded!!!" << std::endl;
			return(0);
		}
	}
	throw "Exception: Occurrence is not found!!";
}

#endif