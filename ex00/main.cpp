/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:04:43 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/18 14:24:29 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    clap1("cl1");
    ClapTrap    clap2("cl2");

    clap1.attack("c2");
    clap2.takeDamage(5);
    clap2.beRepaired(10);
    clap2.attack("C1");
}