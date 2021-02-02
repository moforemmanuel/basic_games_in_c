#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {

int count,number,guess,flag=1,low=0,high=0;

srand(time(0));
number=rand()%10 + 1;

printf("Guess a number : ");

	for(count=1;count>0;count++){
		
scanf("%d",&guess);
if (guess == number){
	printf("Congratulations, you attempted %d trials, %d high attempts and %d low attempts\n",count,high,low);
	break;
}
if (guess!=number){
	printf("TRY AGAIN\n");
}
if (guess>number){
	printf("too high\n");
	high++;
}

else if(guess<number){
	printf("too low\n");
	low++;
}

}
return 0;
}
