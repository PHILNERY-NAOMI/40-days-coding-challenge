#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	
    int dice;
 
 printf("***THIS IS A DICE ROLLER***\n\n");
 
 //setting Random Number generator
 srand(time(0));
 //Generating random numbers
 dice=(rand() % 6) + 1;
 //displaying dice rolling result
 printf("You rolled the dice %d times", dice);
 return 0;
}
