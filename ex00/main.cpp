/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clados-s <clados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:22:27 by clados-s          #+#    #+#             */
/*   Updated: 2026/03/11 16:44:39 by clados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("Player_01");
	
	a.attack("Player_02");
	a.takeDamage(5);
	a.beRepaired(1);
	a.takeDamage(9);
	a.beRepaired(1);
	return 0;
}