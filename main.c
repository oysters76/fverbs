#include <stdio.h>
#include <string.h> 
#define P_SIZE 8

int quiz_verb(char ** pronouns, char ** verbs, char * verb, int p_size)
{
  int score = 0; 
  printf("Write the conjucations of %s\n", verb); 
  for (int i = 0; i < p_size; i++)
  {
    char user_input [20]; 
    printf("%d. %s -> ", (i+1), pronouns[i]); 
    scanf("%s", user_input); 
    if (strcmp(user_input, verbs[i]) == 0)
    {
      printf("\nGood!\n"); 
      score += 10; 
    }else
    {
      printf("\nBad! The correct answer was %s\n", verbs[i]);
    }
  }
 
  return score; 
}

int main(void)
{
 int score = 0; 
 
 
 char * pronouns[] = {"je", "tu", "elle", "il", "nous", "vous", "ils", "elles"}; 
 char * v_etre[] = {"suis", "es", "est", "est", "sommes", "etes", "sont", "sont"}; 
 char * etre = "Etre"; 
 score = quiz_verb(pronouns, v_etre, etre, P_SIZE);
 printf("Finished! Your score is : %d\n", score); 
}
