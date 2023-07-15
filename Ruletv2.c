#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int bet,num;
int para;
int color1;
printf("Welcome to the Roulette game.\n");
for(para = 100;para != 0;){
printf("Your money is %d\n",para);
printf("Please enter your bet amount: ");
scanf("%d", &bet);
if(bet<=para){
para -= bet;
printf("Your remaining money is %d\n",para);
printf("Please select a number between 1 and 36. type '37' if you want to play with colors.\n");scanf("%d",&num);
while(num>37 || num<=0){
	printf("Please select a number between 0 and 36.\n");scanf("%d",&num);
}
if(num != 37){
	int r = rand() % 36 + 0;
	if (r == num)
		{
			printf("You won! Your prize is %d\n", bet * 35);
			para += (bet*36);
		}
		else
		{
			printf("You lost! The number was %d\n", r);
		}
}
else{
printf("Please type 1 for 'black' and 2 for 'red' to select your color\n");scanf("%d",&color1);
time(NULL);
int r = rand() % 2 + 0;
	if(r == color1){
		printf("You won! Your prize is %d\n", bet * 1);
		para += (bet*2);
	}
	else{
		printf("You lost!\n");
	}
}
}
else printf("Your bet is higher than your money!\n");

}
	return 0;
}


