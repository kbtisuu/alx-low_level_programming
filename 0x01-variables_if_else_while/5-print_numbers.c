#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 on success
 */
int main(void)
{
int num = 0;
while (num < 10)
{
putchar(num + '0');
num++;
}
putchar('\n');
return (0);
}
