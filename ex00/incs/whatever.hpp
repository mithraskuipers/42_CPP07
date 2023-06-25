/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/25 18:34:04 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/06/25 19:16:01 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP


/*
** The 'T' here means nothing special. It is just a character chosen to use for
** the template parameters. Here we simply say that T represents a type.
*/

/*
** For the min and max templates, the function templates with any type that
** supports the comparison operators < and >.
*/

// Function template to swap the values of 2 arguments
template <typename T>
void swap(T& a, T& b)
{
	T temp = a; // temporary variable 'temp'
	a = b;
	b = temp;
}

// Function template to return the smallest value of 2 arguments
template <typename T>
T min(T a, T b)
{
	if (a < b)
		return (a);
	else if (a == b)
		return (b);
	else
		return (b);
}

// Function template to return the largest value of 2 arguments
template <typename T> 
T max(T a, T b)
{
	if (a > b)
		return (a);
	else if (a == b)
		return (b);
	else
		return (b);
}

#endif