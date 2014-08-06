#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ASSTR(s) #s

#ifndef GENERIC_SCAN
#define GENERIC_SCAN(TYPE, FRMT, PTR, LEN) {\
	size_t SIZE = sizeof(TYPE);\
	int cap = 2;\
	LEN = 0;\
	TYPE v;\
	PTR = malloc(SIZE * cap);\
	printf("Input "#TYPE" values:\n");\
	while( scanf("%"#FRMT, &v) == 1 )\
	{\
		if(LEN == cap)\
		{\
		    cap *= 2;\
            TYPE * temp = PTR;\
            PTR = malloc(SIZE * cap);\
            memcpy(PTR, temp, LEN * SIZE);\
            free(temp);\
		}\
		PTR[LEN] = v;\
		LEN++;\
	}\
}

#endif // GENERIC_GET

// populate array with ints from stdin
int main(int argc, char *argv)
{
	printf(ASSTR(SCANFRMT));
	printf(ASSTR(SCANFRMT));
	SCANTYPE* input;
	int length;
	GENERIC_SCAN(SCANTYPE, SCANFRMT, input, length);
	
	int i;
	for (i=0; i<length; ++i)
	{
	}
	printf("\n");

	return 0;
}
