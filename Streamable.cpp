/*
Name: Khushi Arora
Section : ZBB
Email : karora63@myseneca.ca
Student ID : 146209234

I have done all the coding by myself and only copied the code that my professor
provided to complete my workshops and assignments.
*/

#include <iostream>
#include "Streamable.h"

using namespace std;

namespace seneca {
	std::ostream& operator<<(std::ostream& os, const Streamable& S) {
		if (S) {
			return S.write(os);
		}
		return os;
	}
	std::istream& operator>>(std::istream& is, Streamable& S) {
		return S.read(is);
	}
}