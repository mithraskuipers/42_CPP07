/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/23 20:23:30 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/06/25 22:20:15 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./../incs/iter.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "Example of integer array:" << std::endl;
	int intArray[] = {1, 2, 3, 4, 5};
	size_t intArrayLen = sizeof(intArray) / sizeof(intArray[0]);
	iter(intArray, intArrayLen, printElement<int>);

	std::cout << std::endl;
	std::cout << "Example of float array:" << std::endl;
	float floatArray[] = {1.123, 2.234, 3.345, 4.456, 5.567};
	size_t floatArrayLen = sizeof(floatArray) / sizeof(floatArray[0]);
	iter(floatArray, floatArrayLen, printElement<float>);

	std::cout << std::endl;
	std::cout << "Example of character array:" << std::endl;
	char charArray[] = {'a','b','c','d','e'};
	size_t charArrayLen = sizeof(charArray) / sizeof(charArray[0]);
	iter(charArray, charArrayLen, printElement<char>);

	std::cout << std::endl;
	std::cout << "Example of string array:" << std::endl;
	std::string stringArray[] = {"Hoi", "ik", "ben", "Mithras"};
	size_t stringArrayLen = sizeof(stringArray) / sizeof(stringArray[0]);
	iter(stringArray, stringArrayLen, printElement<std::string>);
}
