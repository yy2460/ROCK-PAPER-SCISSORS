#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int R=1;
int P=2;
int S=3;
int i;
int turn;
int Pscore =0;
int Cscore =0;
int choice;

void introduction();
void game();
void output();
void delay(int second){

int milsec = 1000 * second;

clock_t startTime = clock();

while(clock() < (startTime + milsec));

}

int main()
{
	 
    srand(time(NULL));
	introduction();
    game();
    delay(3);
   system("COLOR 0F");
      
}

void introduction()
{
	printf("\n \t                           o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o     ");
	printf("\n \t                           *                                               *     ");
	printf("\n \t                           *                                               *     ");
	printf("\n \t                           *                   WELCOME TO                  *     ");
	printf("\n \t                           *                                               *     ");
	printf("\n \t                           *         | ROCK, PAPER, SCISSORS GAME |        *     ");
	printf("\n \t                           *                                               *     ");
	printf("\n \t                           *                                               *     ");
	printf("\n \t                           o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o     ");
}

void game()
{
	printf("\nEnter number of turns u want to play\nEnter Any Odd Number: ");
    Part:
    scanf("%d", &turn);
    system("cls");
	if(turn%2!=0)
    {    
    for(i=0;i<turn;i++)
	{ 
	printf("\n Press 1 for Rock:\n Press 2 for Paper:\n Press 3 for Scissors:\n\n");   
    printf("\tPlayer's turn: ");
    scanf("%d",&choice);
    printf(" -----------------\n");
    printf("| You choose: %d   |\n", choice);
    printf(" -----------------\n\n");
    printf("\tComputer's turn\n");
    int computer=rand()%3+1;
    printf(" --------------------\n");
    printf("| Computer choose: %d |\n", computer);
    //printf(" --------------------\n\n");
    //printf("===========================================================\n\n");
            if(choice==1)
			{
				
                if(computer==1)
				{
					//system("COLOR 3F");
                    Cscore++;
                    Pscore++;
                    printf("\t\tIt's a draw. Both got 1 point!\n\n");
                }
                if(computer==2)
				{
					//system("COLOR 4F");
                    Cscore++;
                    printf("\t\tComputer Got It!\n\n");
                }
                if(computer==3)
				{
					//system("COLOR 2F");
                    Pscore++;
                    printf("\t\tYou Got It!\n\n");
                }
            }
            else  if(choice==2)
			{
                    if(computer==2)
					{
						//system("COLOR 3F");
					    Cscore++;
                        Pscore++;
                        printf("\t\tIt's a draw. Both got 1 point!\n\n");
					    
					}
                    if(computer==1)
					{
						//system("COLOR 2F");
                        Pscore++;
                        printf("\t\tYou Got It!\n\n");
                    }
                    if(computer==3)
					{
						//system("COLOR 4F");
                    Cscore++;
                    printf("\t\tComputer Got It!\n\n");
                    }
            }
            else if(choice==3)
			{
                    if(computer==3)
					{
                        //system("COLOR 3F");
                        Cscore++;
                        Pscore++;
                        printf("\t\tIt's a draw. Both got 1 point!\n\n");
                    }
                    if(computer==1)
					{
					//system("COLOR 4F");
                    Cscore++;
                    printf("\t\tComputer Got It!\n\n");
                    }
                    if(computer==2)
					{
						//system("COLOR 2F");
                        Pscore++;
                        printf("\t\tYou Got It!\n\n");
                    } 
		    }
            else
		{
		    //system("COLOR 0A");
            printf("Wrong Answer\n");
        }
       // printf("===========================================================\n\n");
        }
        output();
    }
    else
    { 
    printf("Please enter only odd number of turns to play the game : ");
    goto Part;
    }
}


void output()
{
    system("cls");
	printf("\n\n");
	printf("\n\t\t\t -----------------\n");
    printf("\t\t\t|   Final Score   |\n");
    printf("\t\t\t -----------------\n");
    printf("\t\t\t|  You | Computer |\n");
    printf("\t\t\t|------|----------|\n");
    printf("\t\t\t|   %d  |   %d      |\n", Pscore, Cscore);
    printf("\t\t\t -----------------\n\n");
        if(Cscore > Pscore )
	    {
	    	system("COLOR 4F");
			printf("\n\t\t ----------------------------------\n");
            printf("\t\t| Computer Won the match by %d to %d |\n",Cscore,Pscore);
            printf("\t\t----------------------------------\n");
            printf("\tOOPS! you have lost the game Better luck next time! \n ");
        }
        else if(Cscore < Pscore )
		{
			system("COLOR 2F");
		    printf("\n\t\t-------------------------------\n");
            printf("\t\t| You Won the match by %d to %d |\n",Pscore,Cscore);
            printf("\t\t-------------------------------\n");
            printf("\t\tHURRAY! Congrats you won the game \n");
        }
        else if(Cscore == Pscore )
		{
			system("COLOR 3F");
		    printf("\n\t\t ----------------------------\n");
            printf("\t\t\t  |It's a draw|");
            printf("\n\t\t ----------------------------\n");
		}
}
