/* How would your test the word count program?
 * What kinds of input are most likely to uncover bugs if there are any?
 */

/* To test the word count program first try no input. The output should be: 0 0 0 (zero newlines. zero words, zero characters).
 * Then try a one-character word. The output should be: 1 1 2 (one newline. one word, two characters - a letter followed by a newline character).
 * Then try a two-character word. The output should be: 1 1 3 (one newline. one word. three characters - two characters followed by a newline character).
 * In addition, try 2 one-character words (the output should be: 1 2 4) and 2 one-character words-one word per line (the output should be 2 2 4).
 * Some boundaries are:
 * --no inoput
 * --no words - just newlines
 * --not words - just blanks, tabs, and newlines
 * --one word per line - no blanks and tabs
 * --word starting at the beginning of the line
 * --word starting after blanks
 */