/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   irc.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 14:31:14 by abenrach          #+#    #+#             */
/*   Updated: 2026/11/18 15:37:27 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IRC_HPP
# define IRC_HPP

# include <iostream>
# include <string>
# include <exception>
# include <cctype>
# include <cstdlib>

class   server
{
    private:
        std::string _port_str;
        unsigned int    _port;
        std::string _password;
    public:
        server(char *port, char *password);
        server(const server &src);
        server  &operator=(const server &src);
        ~server(void);
}

int is_number(char *str);

#endif