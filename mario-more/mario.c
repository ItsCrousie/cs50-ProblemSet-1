#include <cs50.h>
#include <stdio.h>

int main(void)
{
  //get height from user
  int height;
  do
  {
    height = get_int("Height: ");
  } while(height < 0 || height > 8);

  //generate pyramids:
  int spaces = height - 2;
  //generate height:
  for (int i = 0; i < height; i++)
  {
    printf("Spaces %i\n", spaces);
    //print leading spaces:
    while (spaces > 0)
    {
      printf("_");
      spaces -= 1;
    }
    //print hashes:
    int hashes = 0;
    while (hashes <= i)
    {
      printf("#");
      hashes++;
    }
    //print space between:
    printf("__");
    printf("\n");
  }
}