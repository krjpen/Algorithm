#include <stdio.h>

int main(void)
{
  int numbers[] = {2,5,6,7,9,10,13,15,16,18,23,29,35,37,38,40,45,47,51,53,59,62,78,82,88,91,93,94,95,97,98,99};
  int f = 99; //what I want to find
  int b = 31; //the length of numbers
  
    for(int i = 0; i <= b ; i++)
      {
	printf("now i is %d and numbers[i] is %d\n", i, numbers[i]);
	if (numbers[i] == f){
	  printf("found %d\n", numbers[i]);
	  return 0;
	}
      }
    printf("Not found\n");
  return 1;
}
