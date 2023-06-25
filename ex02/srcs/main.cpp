/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/23 20:23:30 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/06/25 23:16:08 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
    // Create an empty array
    Array<int> emptyArray;
    std::cout << "Empty array size: " << emptyArray.size() << std::endl;

    // Create an array of 5 elements initialized by default
    Array<int> array(5);
    std::cout << "Array size: " << array.size() << std::endl;

    // Access elements using subscript operator
    for (unsigned int i = 0; i < array.size(); i++) {
        array[i] = i + 1; // Assign values to the elements
        std::cout << "array[" << i << "] = " << array[i] << std::endl;
    }

    // Test out-of-bounds exception
    try {
        std::cout << array[10] << std::endl; // Access an element beyond the array size
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl; // Handle the exception
    }

    // Test copy construction and assignment operator
    Array<int> copiedArray(array); // Create a copy of the array
    std::cout << "Copied array size: " << copiedArray.size() << std::endl;
    for (unsigned int i = 0; i < copiedArray.size(); i++) {
        std::cout << "copiedArray[" << i << "] = " << copiedArray[i] << std::endl;
    }

    Array<int> assignedArray; // Create an empty array
    assignedArray = array; // Assign the values of the array to the assignedArray
    std::cout << "Assigned array size: " << assignedArray.size() << std::endl;
    for (unsigned int i = 0; i < assignedArray.size(); i++) {
        std::cout << "assignedArray[" << i << "] = " << assignedArray[i] << std::endl;
    }

    return 0;
}
