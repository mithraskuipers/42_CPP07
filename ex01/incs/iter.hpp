/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/25 19:24:54 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/06/25 22:09:05 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef> // for size_t
#include <iostream> // for cout and endl

// Function template iter
template <typename T, typename Func>
void iter(T* arr, size_t len, Func func)
{
	for (size_t i = 0; i < len; ++i)
	{
		func(arr[i]);
	}
}

// Example function to be called on each array element
template <typename T>
void printElement(T element)
{
	std::cout << element << std::endl;
}

#endif
