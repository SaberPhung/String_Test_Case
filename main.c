#include <stdio.h>
#include "string.h"

int main(void)
{
	char string[50]="phungNguyenQuynhGiao123";
	char *s=string;
	printf("Main release version of program\n ready to be released to customers\n");
	my_strlen(string);
	str2upper(string);
	str2lower(string);

}
