/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 05:13:50 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/13 05:22:17 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    std::cout << "Creating Animals..." << std::endl;

    Animal* animals[4];

    for (int i = 0; i < 2; i++) {
        animals[i] = new Dog();
    }
    for (int i = 2; i < 4; i++) {
        animals[i] = new Cat();
    }

    std::cout << "\nTesting makeSound():" << std::endl;
    for (int i = 0; i < 4; i++) {
        animals[i]->makeSound();
    }

    std::cout << "\nDeleting Animals..." << std::endl;
    for (int i = 0; i < 4; i++) {
        delete animals[i];
    }

    std::cout << "\nTesting Deep Copy:" << std::endl;
    Dog originalDog;
    Dog copiedDog = originalDog;
    Cat originalCat;
    Cat copiedCat = originalCat;
	std::cout << "\n\n"<<std::endl;

    return 0;
}

