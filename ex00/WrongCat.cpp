/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 06:17:34 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/13 04:07:35 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat)
{
	*this = wrongcat;
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongcat)
{
	(void)wrongcat;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}

std::string WrongCat::getType() const
{
	return ("WrongCat");
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat Sound" << std::endl;
}
