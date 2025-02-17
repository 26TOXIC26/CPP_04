/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 06:15:45 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/12 06:16:09 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &wronganimal);
	WrongAnimal &operator=(const WrongAnimal &wronganimal);
	virtual ~WrongAnimal();
	std::string getType() const;
	void makeSound() const;
};

#endif
