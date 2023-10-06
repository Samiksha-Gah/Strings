#ifndef STR_H
#define STR_H
#include <stddef.h>
/* Returns length of String pcSrc */ 
size_t Str_getLength(const char pcSrc[]);

/* Ruturn a pointer to pcDest after
copying pcSrc into pcDest */

char *Str_copy(char pcDest[], const char pcSrc[]);

/* Returns a pointer to the beginning of pcDest
after adding pcSrc to the end of pcDest */

char *Str_concat(char pcDest[], const char pcSrc[]);

/* Returns an integer less 
than 0 if pc1 < pc2.Returns an integer greater 
than 0 if pc1 > pc2. Returns 0
if pc1 = pc2.  */

int Str_compare(const char pcStr1[], const char pcStr2[]);

/* Returns a pointer to the first occurrence 
of the substring needle in 
haystack.  */

char *Str_search(char pcHaystack[], char pcNeedle[]);

#endif