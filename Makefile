NAME = ircserv

SRCS = main.cpp \
		irc_parse.cpp \
		irc.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = irc.hpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -g3

$(NAME): $(OBJS) $(HEADERS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
