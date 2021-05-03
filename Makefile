##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

LDFLAGS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

SRC	=	my_hunter.c\
		parameter.c\
		shoot.c\
		sprite_sheet.c\
		main.c

CPPFLAGS	=	-Iinclude

CFLAGS	+=	-g3

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

all: $(NAME)

$(NAME):	$(OBJ)
	gcc $(CFLAGS) -o $(NAME) $(OBJ) $(LDFLAGS) $(CPPFLAGS)
clean:
	rm -f $(OBJ) *~

fclean: clean
	rm -f $(NAME)

re:	fclean all
