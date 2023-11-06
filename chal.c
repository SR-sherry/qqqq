#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	setvbuf(stdin, 0, 2, 0);
	setvbuf(stdout, 0, 2, 0);
	puts("I add a length check this time, so you can't perform bof, can you?");
	char str[0x20];
	gets(str);
	if (strlen(str) > 0x20){
		puts("Try again!");
		exit(0);
	}else{
		puts("Bye!");
	}
	return 0;
}
