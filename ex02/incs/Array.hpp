/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/25 22:35:07 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/07/15 10:52:50 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <exception>

/*
Difference explicit and implicit conversions:

Explicit:
unsigned int n = 5;
Array<int> arr(n); // Explicitly construct an Array object

Implicit:
unsigned int n = 5;
Array<int> arr = n; // Implicit conversion from unsigned int to Array
*/

template <typename T>
class Array
{
	public:
		Array();																// "Construction with no parameter: Creates an empty array"
		~Array();
		Array(const Array& other);
		Array& operator=(const Array& other);

		explicit Array(unsigned int n);											// "Construction with an unsigned int n as a parameter". Indicates that you want to prevent implicit conversions from unsigned int to Array.
		T& operator[](unsigned int index);										// Overload the subscript operator
		unsigned int size() const;
	private:
		T* elements;
		unsigned int length;
};

// Default constructor
template <typename T>															// Allows to create generic array that holds elements of any type T. Now it can be instantiated with different types at compile time.
Array<T>::Array() : elements(NULL), length(0)									// Array<T>::Array() instead of Array::Array() because we have a template class. This constructor belongs to the template class Array<T>.
{

}

// Constructor with size parameter
// Dynamically allocate memory for the elements array with size n using the new operator
template <typename T>
Array<T>::Array(unsigned int n) : elements(new T[n]), length(n)					// Allocate memory
{
	for (unsigned int i = 0; i < length; i++)
	{
		this->elements[i] = T();														// Init element to default val using default constructor
	}
}

// Copy constructor
template <typename T>
Array<T>::Array(const Array& other) : elements(new T[other.length]), length(other.length)
{
	for (unsigned int i = 0; i < length; i++)
	{
		this->elements[i] = other.elements[i];
	}
}

// Assignment operator
template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		T* newElements = new T[other.length];									// Create a new array to hold the elements of 'other'
		for (unsigned int i = 0; i < other.length; i++)
		{
			newElements[i] = other.elements[i];									// Copy each element from 'other' to the new array
		}
		delete[] this->elements;														// Delete the existing elements array
		this->elements = newElements;													// Update the elements with the new array
		this->length = other.length;													// Update the length with the length of 'other'
	}
	return *this;																// Return a reference to the current object
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->elements;
	this->elements = 0; // Set elements to 0 after deletion
}

// Subscript operator (this introduces array indexing functionality)
template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= this->length)
	{
		throw std::exception();
	}
	return this->elements[index];
}

// Size member function
template <typename T>
unsigned int Array<T>::size() const
{
	// Where this this value come from? When you construct the array,
	// you need to specify the length. Simply that value is being read here.
	// It is basically a getter function for length.
	return (this->length);
}

#endif