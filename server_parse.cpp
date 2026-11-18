/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_parse.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 15:20:52 by abenrach          #+#    #+#             */
/*   Updated: 2026/11/18 16:16:19 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "irc.hpp"

int server::parse_port(void)
{
    size_t  i = 0;
    while (this->_port_str[i] && this->_port_str[i] == ' ')
        i++;
    if (this->_port_str[i] == '\0')
        return (0);
    while (this->_port_str[i] && std::isdigit(this->_port_str[i]))
        i++;
    while (this->_port_str[i] && this->_port_str[i] == ' ')
        i++;
    if (this->_port_str[i] != '\0')
        return (0)
    this->_port = std::atoi(this->_port_str);
    if ()
        throw std::invalid_argument("Error: The port is already reserved");
    return (1);
}
