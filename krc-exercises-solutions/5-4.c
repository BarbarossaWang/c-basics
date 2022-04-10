/* Write the function strend(s,t), which returns 1 if the string t occurs at the
end of the string s, and zero otherwise.  */
#include <string.h>

int strend(char *s, char *t)
{
  char *bs = s; /* remember beginning of strs */
  char *bt = t;
  while (*s) /* end of the string s */
  {
    s++;
  }
  while (*t) /* end of the string t */
  {
    t++;
  }
  while (*s-- == *t--)
  {
    if (t == bt || s == bs)
    {
      break; /* at the beginning of a str */
    }
  }
  if (*s == *t && t == bt && *s != '\0')
  {
    /* strend returns 1 (the string t occurs at the end of the string s) when the characters in t match the characters in s, the pointer t is back at the beginning of the string, and the strings are not empty */
    return 1;
  }
  else
  {
    return 0;
  }
}