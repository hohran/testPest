#include <stdio.h>

int main(int argc, char** argv) {
	if (argc != 3) {
		fprintf(stderr, "Honza je debil a zadej dvakrat argument programu.\n");
		return 1;
	}
	printf("Hello %s!\n", argv[1]);
	printf("You are %s.\n", argv[2]);
}
