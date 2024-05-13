#include "1_1E.h"

void algorithm1_1E() {
	int m, n;
	std::cout << 
		"Algorithm E (Euclid's algorithm) Given two positive integers m and n, find their greatest common divisor, that is, the largest positive integer that evenly divides both m and n.\n";
	std::cout << "Enter a positive integer for dividend m: \n";
	while (!(std::cin >> m) || m < 1) {
		std::cout << "Please enter a positive integer: \n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	std::cout << "Enter a positive integer for divisor n: \n";
	while (!(std::cin >> n) || n < 1) {
		std::cout << "Please enter a positive integer: \n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	int m_temp = m;
	int n_temp = n;
	while (n_temp != 0) {
		int remainder = m_temp % n_temp;
		m_temp = n_temp;
		n_temp = remainder;
	}
	
	std::cout << "The greatest common divisor of " << m << " and " << n << " is " << m_temp << ".\n";
	
	return;
}