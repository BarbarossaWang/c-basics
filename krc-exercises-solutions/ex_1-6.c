/* Verify that the expression getchar() != EOF is 0 or 1 */
#include <stdio.h>

int main()
{
  int c = getchar();
  printf("the expression getchar() != EOF is %d\n", c != EOF);
}