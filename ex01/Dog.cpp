/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 04:05:38 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/13 04:36:13 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog(const Dog &other)
{
	this->type = other.type;
	this->brain = new Brain(*other.brain);
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain(*other.brain);
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "3aw 3aw" << std::endl;
}
