/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   irc_parse.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 15:20:52 by abenrach          #+#    #+#             */
/*   Updated: 2026/11/21 00:21:43 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "irc.hpp"

void    Server::parse_argument(void)
{
    if (this->_port_str.empty())
        throw std::invalid_argument("Error: Port is empty");
    if (this->_password.empty())
        throw std::invalid_argument("Error: Password is empty");
    size_t  i = 0;
    while (this->_port_str[i] && this->_port_str[i] == ' ')
        i++;
    if (this->_port_str[i] == '\0')
        throw std::invalid_argument("Error: Please enter a valid syntaxe port");
    if (this->_port_str[i] == '-')
        throw std::invalid_argument("Error: Please no enter negative port");
    while (this->_port_str[i] && std::isdigit(this->_port_str[i]))
        i++;
    while (this->_port_str[i] && this->_port_str[i] == ' ')
        i++;
    if (this->_port_str[i] != '\0')
        throw std::invalid_argument("Error: Please enter a valid syntaxe port");
    this->_port = std::atoi(this->_port_str.c_str());
    if (this->_port == 0 || (this->_port >= 1 && this->_port <= 1023))
        throw std::invalid_argument("Error: These ports require root access in order to be manipulated, please enter a valid port (1024-65535)");
    if (this->_port > 65535 )
        throw std::invalid_argument("Error: Please enter a valid port (1024-65535)");
    return ;
}
