#include "1_1E.h"
// Algorithm E (Euclid's algorithm) Given two positive integers m and n, find their greatest common divisor, that is, the largest positive integer that evenly divides both m and n.

void algorithm1_1E(int m, int n) {
	// Find remainder
	int r = m%n;
	// Return n if 0
	if (r == 0)
	{
		std::cout << "GCD of " << m << " and " << n << " is " << n << std::endl;
		return;
	}
	// Reduce
	else
	{
		algorithm1_1E(n, r);
	}
}