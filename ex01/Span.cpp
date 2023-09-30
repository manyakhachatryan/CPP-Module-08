#include "Span.hpp"

Span::Span()
{
	std::cout<<"Default constructor called"<<std::endl;
	_n = 0;
}

Span::Span(unsigned int size)
{
	_n = size;
	std::cout<<"Parameterized constructor called"<<std::endl;
}

Span::Span(const Span&  t)
{
	this->_n = t._n;
 	this->_numbers = t._numbers;
	std::cout<<"Copy constructor called"<<std::endl;
}

Span&Span::operator=(const Span& t)
{
	this->_n = t._n;
 	this->_numbers = t._numbers;
	std::cout<<"Copy assignment operator"<<std::endl;
	return (*this);
}

Span::~Span()
{
	std::cout<<"Destructor called"<<std::endl;
}

void Span::addNumber(unsigned int num)
{
	if (_numbers.size() < _n)
	{
		_numbers.push_back(num);
	}
	else
		throw "No space for the element in your container";
}

unsigned int Span::shortestSpan()
{
	if(_numbers.size()<=1)
		throw "Exception: there are no numbers stored,or only one";
	std::vector<unsigned int>::iterator itr = _numbers.begin();
	std::sort(_numbers.begin(), _numbers.end());
	unsigned int min = *(itr+1)-(*itr);

	for( ; itr!=_numbers.end()-1; ++itr)
	{
		if(min > *(itr+1) - *itr)
		{
			min = *(itr+1) - *itr;
		}
	}
	return min;
}

unsigned int Span::longestSpan()
{
	if(_numbers.size()<=1)
		throw "Exception: there are no numbers stored,or only one";

	std::sort(_numbers.begin(), _numbers.end());
	return _numbers[_numbers.size() - 1] - _numbers[0];
}