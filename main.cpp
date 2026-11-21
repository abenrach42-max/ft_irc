/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 14:31:09 by abenrach          #+#    #+#             */
/*   Updated: 2026/11/20 23:39:44 by abenrach         ###   ########.fr       */
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
    try
    {
        Server server(av[1], av[2]);
        server.parse_argument();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}