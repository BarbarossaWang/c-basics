/* Write versions of the library functions strncpy, strncat, and strncmp,
 * which operate on at most the first n characters of their argument strings.
 * For example, strncpy(s,t,n) copies at most n characters of t to s. */

/* copy at most n characters of string t to s; return s. Pad with '\0''s if ct has fewer than n characters*/
char *strnpy(char *s, char *t, int n)
{
  while (*t && n--)
  {
    *s++ = *t++;
  }
  while (n--)
  {
    *s++ = '\0';
  }
  return s;
}

/* concatenate at most n characters of string ct to string s, terminate s with '\0', return s */
char *strncat(char *s, char *t, int n)
{
  while (*s)
  {
    s++;
  }
  strnpy(s, t, n);
}

int strncmp(char *s, char *t, int n)
{
  while (n--)
  {
    if (*s != *t)
    {
      return *s - *t;
    }
    s++;
    t++;
  }
  return 0;
}