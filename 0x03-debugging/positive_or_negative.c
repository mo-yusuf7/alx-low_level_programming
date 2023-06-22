#include "main.h"
/**
  * main - Determine if the number is positive, negative or zero.
  * Description: 'print 0 is zero'
  * @i : is the number to be checked
  * Return: 0 on success
  */
void positive_or_negative(int i)
{
	if (i < 0)
{
	printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
	printf("%d is %s\n", i, "positive");
}
else
{
	printf("%d is %s\n", i, "zero");
}
	return;
}
