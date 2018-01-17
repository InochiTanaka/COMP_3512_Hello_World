#include "lab1.h"


// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	// Replace this line with your code (have fun!).
	int bigNum = 0;
	int smallNum = 0;
	int biggestCommDomin = 0;

	if (a > b)
	{
		bigNum = a;
		smallNum = b;
	}
	else
	{
		bigNum = b;
		smallNum = a;
	}

	while (smallNum > 0)
	{
		if ((bigNum % smallNum) == 0)
		{
			biggestCommDomin = smallNum;
			return biggestCommDomin;
		}
		smallNum--;
	}

	return 0;
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	// Replace this line with your code (challenge: do this with recursion!).

	if (n <= 1)
	{
		return n;

	}

	return fibonacci(n - 1) + fibonacci(n - 2);

	/*size_t numOfSeque = n;
	int numA = 0;
	int numB = 0;
	int temp = 0;



	if (numOfSeque != 0)
	{
	numB = 1;

	while (numOfSeque > 1)
	{
	temp = numB;
	numB += numA;
	numA = temp;

	numOfSeque--;
	}
	}

	return numB;*/
}
