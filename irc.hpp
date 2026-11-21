/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   irc.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 14:31:14 by abenrach          #+#    #+#             */
/*   Updated: 2026/11/20 23:40:24 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IRC_HPP
# define IRC_HPP

# include <iostream>
# include <string>
# include <exception>
# include <cctype>
# include <cstdlib>

class   Server
{
    private:
        std::string _port_str;
        unsigned int    _port;
        std::string _password;
    public:
        Server(char *port, char *password);
        Server(const Server &src);
        Server  &operator=(const Server &src);
        ~Server(void);
        void    parse_argument(void);
};

#endif