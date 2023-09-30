#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template <typename T>

int easyfind(const T& arr, int num)
{
	typename T::const_iterator c_it;
	c_it = std::find(arr.begin(), arr.end(), num);
	if (c_it != arr.end())
	{
		std::cout << "Finded!!!" << std::endl;
		return(0);
	}

	throw "Exception: Occurrence is not found!!";
}

#endif