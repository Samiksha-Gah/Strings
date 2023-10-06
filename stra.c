#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <assert.h>
#include "str.h" 

size_t Str_getLength(const char pcSrc[])
{
   size_t uLength = 0;
   assert(pcSrc != NULL);
   while (pcSrc[uLength] != '\0')
      uLength++;
   return uLength;
}

char *Str_copy(char pcDest[], const char pcSrc[]) {
    size_t character;
    assert(pcDest != NULL);
    assert(pcSrc != NULL);
   for (character = 0; pcDest[character] != '\0'; ++character) {
      pcDest[character] = pcSrc[character];
   }
   pcDest[character] = '\0';
   return pcDest;
}
/*my own */
char *Str_concat(char pcDest[], const char pcSrc[]) {
    size_t lengthDest;
    size_t x;
    assert(pcDest != NULL);
    assert(pcSrc != NULL);
    lengthDest = 0; 

   while (pcDest[lengthDest] != '\0') {
      lengthDest++;
   }

   x = 0;
   while (pcSrc[x] != '\0') {
      pcDest[lengthDest + x] = pcSrc[x];
      x++;
   }

   pcDest[lengthDest + x] = '\0';
   return pcDest;
} 

int Str_compare(const char pcStr1[], const char pcStr2[]) {
    size_t i = 0;
    assert(pcStr1 != NULL);
    assert(pcStr2 != NULL);
    while (pcStr1[i] == pcStr2[i]) {
        if (pcStr1[i] == '\0') {
            return 0;
        }
        i++; 
    }

    int strSpot1 = (int)pcStr1[i];
    int strSpot2 = (int)pcStr2[i];

    return strSpot1 - strSpot2; 

    }

char *Str_search(const char pcHaystack[], const char pcNeedle[]) {
    size_t i, j; 
    assert(pcHaystack != NULL);
    assert(pcNeedle != NULL);
    for (i = 0; pcHaystack[i] != '\0'; i++) {
        if (pcHaystack[i] == pcNeedle[0]) {
            for (j = 0; pcNeedle[j] != '\0'; j++) {
                if (pcHaystack[i + j] != pcNeedle[j]) {
                    break;
                }
            }
            if (pcNeedle[j] == '\0') { 
                return &pcHaystack[i];
            }
        }
    }
    return NULL;

}

