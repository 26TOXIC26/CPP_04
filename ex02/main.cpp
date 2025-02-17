/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amousaid <amousaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 05:13:50 by amousaid          #+#    #+#             */
/*   Updated: 2025/02/14 05:58:09 by amousaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    // Animal* meta = new Animal(); ❌ ERROR: makaymknch instantiate abstract class
    Animal* j = new Dog();
    Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); // Meow! Meow!
    j->makeSound(); // Woof! Woof!


    delete j;
    delete i;

    return 0;
}

