/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   irc.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 23:17:40 by abenrach          #+#    #+#             */
/*   Updated: 2026/11/20 23:17:40 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "irc.hpp"

Server::Server(char *port, char *password)
{
    this->_port_str = std::string(port);
    this->_password = std::string(password);
}
Server::Server(const Server &src)
{
    *this = src;
}

Server  &Server::operator=(const Server &src)
{
    if (this != &src)
    {
        this->_port_str = src._port_str;
        this->_port = src._port;
        this->_password = src._password;
    }
    return (*this);
}

Server::~Server(void){}