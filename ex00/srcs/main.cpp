/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/23 20:23:30 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/06/25 19:21:23 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./../incs/whatever.hpp"

/*
int main()
{
	int num1 = 11;
	int num2 = 22;
	std::cout << "Original values of num1 and num2 are: " << num1 << " " << num2 << std::endl;
	::swap(num1, num2);
	std::cout << "Swapped values of num1 and num2 are: " << num1 << " " << num2 << std::endl;

	int minimumNum = min(num1, num2);
	std::cout << "Minimum value num1 and num2 is: " << minimumNum << std::endl;

	int maximumNum = max(num1, num2);
	std::cout << "Maximum value num1 and num2 is: " << maximumNum << std::endl;
}
*/

// Example main provided by the subject
int main( void )
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
