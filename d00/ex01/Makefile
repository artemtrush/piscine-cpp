CPP = clang++
HPP = Society.class.hpp
CPPFLAGS = -Wall -Werror -Wextra
NAME = society

OBJ =	main.o \
		Society.class.o

all: $(NAME)

$(NAME):  $(OBJ)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp $(HPP)
	$(CPP) $(CPPFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
