/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/25 22:35:07 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/06/25 23:17:41 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <exception>

template <typename T>
class Array
{
	public:
		Array(); // "Construction with no parameter: Creates an empty array"
		~Array();
		Array(const Array& other);
		Array& operator=(const Array& other);

		explicit Array(unsigned int n); // "Construction with an unsigned int n as a parameter"
		T& operator[](unsigned int index);
		unsigned int size() const;
	private:
		T* elements;
		unsigned int length;
};

// Default constructor
template <typename T>
Array<T>::Array() : elements(NULL), length(0)
{
	
}

// Constructor with size parameter
template <typename T>
Array<T>::Array(unsigned int n) : elements(new T[n]), length(n)
{
	for (unsigned int i = 0; i < length; i++)
	{
		elements[i] = T();
	}
}

// Copy constructor
template <typename T>
Array<T>::Array(const Array& other) : elements(new T[other.length]), length(other.length)
{
	for (unsigned int i = 0; i < length; i++)
	{
		elements[i] = other.elements[i];
	}
}

// Assignment operator
template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		T* newElements = new T[other.length];
		for (unsigned int i = 0; i < other.length; i++)
		{
			newElements[i] = other.elements[i];
		}
		delete[] elements;
		elements = newElements;
		length = other.length;
	}
	return *this;
}

// Destructor
template <typename T>
Array<T>::~Array()
{
	delete[] elements;
}

// Subscript operator (this introduces array indexing functionality)
template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index > this->length)
	{
		throw std::exception();
	}
	return (elements[index]);
}

// Size member function
template <typename T>
unsigned int Array<T>::size() const
{
	// Where this this value come from? Well when you construct the array,
	// you need to specify the length. Simply that value is being read here.
	// It is basically a getter function for length.
	return (this->length);
}

#endif