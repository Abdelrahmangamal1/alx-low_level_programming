#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        	int r = 0;
        	int i = n;
 
        	for (; r < i; r++)
        	{
                    	dest[r] = src[r];
                    	n--;
        	}
        	return (dest);
}
 
 
 
============================
 
1-strncat.c
 
#include "main.h"




/**


 * _strncat - function concatenate two strings


 * using at most n bytes from src


 * @dest: entered value


 * @src: entered value


 * @n: entered value


 *


 * Return: dest


 */


char *_strncat(char *dest, char *src, int n)


{


        	int a;


        	int b;


 


        	a = 0;


        	while (dest[a] != '\0')


        	{


                    	a++;


        	}


        	b = 0;


        	while (b < n && src[b] != '\0')


        	{


        	dest[a] = src[b];


        	a++;


        	b++;


        	}


        	dest[a] = '\0';


        	return (dest);


}


