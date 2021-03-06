// main.cpp : Defines the entry point for the console application.
// ax^2 + bx + c = 0

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cassert>


int main()
{   
	int a { };
	int b { };
	int c { };

	std::cout << "This program will calculate the roots of a quadratic equation in the form of ax^2 + bx + c." << '\n' ;
	std::cout << "Enter a value for a: " << '\n';
	std::cin >> a;
	std::cout << "Enter a value for b: " << '\n';
	std::cin >> b;
	std::cout << "Enter a value for c: " << '\n';
	std::cin >> c;

	double discriminant = b * b - 4.0 * a * c;
	double denominator = 2.0 * a;

	assert(discriminant >= 0);

	double root1 = (-b + sqrt(discriminant)) / denominator;
	double root2 = (-b - sqrt(discriminant)) / denominator;

	std::cout << "The roots are: " << root1 << " , " << root2 << std::endl;

    return 0;
}

