/* Write a program that print one word per line. */
#include <stdio.h>

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

/* print input one word perline */
main()
{
  int c, state;

  state = OUT;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\n' || c == '\t')
    {
      if (state == IN) /* finish the word */
      {
        putchar('\n');
        state = OUT;
      }
    }
    else if (state == OUT) /* beginning of word */
    {
      state = IN;
      putchar(c);
    }
    else /* inside a word */
    {
      putchar(c);
    }
  }
}