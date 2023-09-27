#include "Span.hpp"
#include <random>

int main()
{
	try
	{
		std::vector<int> v;
		for (int i = 0; i < 15; i++){
			v.push_back(i);
		}
		Span sp = Span(15);
		sp.fillNumber(v.begin(), v.end()); 
		
		Span sp2(sp);
		sp2 = sp;

		Span sp1 = Span(5);
		sp1.addNumber(6);
		sp1.addNumber(3);
		sp1.addNumber(17);
		sp1.addNumber(9);
		sp1.addNumber(11);
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch (const char* msg) {
    	std::cout << msg << std::endl;
   	}
	return 0;
}