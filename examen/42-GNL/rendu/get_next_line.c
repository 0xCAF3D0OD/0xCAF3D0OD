#include <unistd.h>
#include <stdio.h>
int ft_strlen(char* str) {
	int len = 0;
	for (int i = 0; str[i]; i++)
		len = i;
	printf("len = %d\n", len);
	return (len);
}
char *get_next_line(int fd) {
	char *string;


	return (string);
}

int main(int ac, char** av) {
	if (ac != 2 && av[1] == 0)
		return(1);
	ft_strlen(av[1]);
//	get_next_line(av[1]);
	return (0);
}
