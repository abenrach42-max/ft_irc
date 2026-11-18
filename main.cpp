/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 14:31:09 by abenrach          #+#    #+#             */
/*   Updated: 2026/11/18 15:32:09 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "irc.hpp"

int main(int ac, char **av)
{
    if (ac != 3)
    {
        std::cout << "Error: Not valid argument (./ircserv <port> <password>)" << std::endl;
        return (1);
    }
    return (0);
}