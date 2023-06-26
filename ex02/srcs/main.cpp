/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/23 20:23:30 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/06/26 18:00:19 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
	// Create an empty array
	Array<int> emptyArray; // Specify it to work with integers.
	std::cout << "Empty array size (should be zero!): " << emptyArray.size() << std::endl;

	// Create an array of 5 elements initialized by default
	Array<int> array(5);
	std::cout << "Array size: " << array.size() << std::endl;

	// Access elements using subscript operator (array indexing)
	for (unsigned int i = 0; i < array.size(); i++)
	{
		array[i] = i + 1; // Assign values to the elements
		std::cout << "array[" << i << "] = " << array[i] << std::endl;
	}

	// Test out-of-bounds exception
	try {
		std::cout << array[10] << std::endl; // Chosen index is way out of the 5 elem range (i.e. 0,1,2,3,4)
	} catch (const std::exception& error)
	{
		std::cout << "[Exception triggered]: " << error.what() << std::endl; // Handle the exception
	}

	// Test copy construction and assignment operator
	Array<int> copiedArray(array); // Create a copy of the array
	std::cout << "Copied array size: " << copiedArray.size() << std::endl;
	for (unsigned int i = 0; i < copiedArray.size(); i++)
	{
		std::cout << "copiedArray[" << i << "] = " << copiedArray[i] << std::endl;
	}

	Array<int> assignedArray; // Create an empty array
	assignedArray = array; // Assign the values of the array to the assignedArray
	std::cout << "Assigned array size: " << assignedArray.size() << std::endl;
	for (unsigned int i = 0; i < assignedArray.size(); i++)
	{
		std::cout << "assignedArray[" << i << "] = " << assignedArray[i] << std::endl;
	}

	return 0;
}
