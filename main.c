#include <stdio.h>

int main(int argc, char** argv) {
	if (argc != 2) {
		fprintf(stderr, "Honza je debil a zadej jeden argument programu.\n");
		return 1;
	}
	printf("Hello %s!\n", argv[1]);
}
