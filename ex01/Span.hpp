#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <array>

class Span
{
	public :
		Span();
		Span(unsigned int size);
		Span(const Span& );
        Span& operator=(const Span&);
		~Span();

		void addNumber(unsigned int num);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		template <typename T>
		void fillNumber(T begin, T end) {
			while (begin != end) {
				addNumber((*begin) *10);
				++begin;
			}
		}
	private :
		std::vector<unsigned int> _numbers;
		unsigned int _n;
};

#endif