#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[]) {
	int res;
	srandom(time(NULL));
	res = random() % 100;
	printf("%s: %d\n", argv[0], res);
	return res;
}