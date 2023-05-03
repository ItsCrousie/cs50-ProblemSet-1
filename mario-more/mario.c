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

  //generate height:
  for (int row = 0; row < height; row++)
  {
    //print leading spaces:
    for (int space = 0; space < height - row - 1; space++)
    {
      printf(" ");
    }
    //print 1st pyramid hashes:
    for (int hashes = 0; hashes <=row; hashes++)
    {
      printf("#");
    }
    //print gap:
    printf("  ");

    //print 2nd pyramid hashes
    for (int hashes = 0; hashes <=row; hashes++)
    {
      printf("#");
    }
    printf("\n");
  }
}