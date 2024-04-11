#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   const int MIN = 1;
   const int MAX = 100;
   int guess = 0;
   int guesses = 0;
   int answer = 0;

   srand(time(0));

  answer = (rand() % MAX ) + MIN;

  do{
    printf ("Enter a guess : ");
    scanf ("%d", &guess);
    if(guess > answer)
    {
      printf ("Too High!\n ");
    }
    else if (guess < answer)
    {
      printf ("Too Low!\n ");
    }
    else
    {
      printf ("Correct!\n ");
    }
    guesses++;
}while(guess != answer);

    printf ("*******************\n");
    printf ("Answer is :  %d\n ",answer);
    printf ("Guesses are :  %d\n ",guesses);
    printf ("*******************");

    return 0;

}