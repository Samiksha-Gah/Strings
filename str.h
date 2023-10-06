#ifndef STR_H
#define STR_H
#include <stddef.h>

/* Returns length of String pcSrc */ 
size_t Str_getLength(const char* pcSrc[]);

/* Copies pcSrc into pcDest, returning a pointer 
to the new string */

char *Str_copy(char* pcDest[], const char* pcSrc[]);

/* Adds pcSrc to the end of pcDest, 
returning a pointer to the start of pcDest */

char *Str_concat(char* pcDest[], const char* pcSrc[]);

/* Comparing pcStr1 and pcStr2, returning a int less 
than 0 if pcStr1 is less than pcStr2, returning a int more 
than 0 if pcStr1 is greater than pcStr2, and returning 
0 if pcStr1 is equal to pcStr2 */

int Str_compare(const char* pcStr1[], const char* pcStr2[]);

/* Returns a pointer to the first occurrence 
of the needle in the haystack stack */
char *Str_search(const char* pcHaystack[], const char* pcNeedle[]);

#endif
