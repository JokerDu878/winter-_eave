#include "diceroll.h"

#include <time.h>
//#include <stdio.h>
//#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
//extern void srand1(unsigned int x);
//extern unsigned int rand1(void);
//rand()函数返回的是0-INT_MAX之间的数
//int roll_count = 0;
//int rollem(int sides);

int main(){
	int dice,roll;
	int sides;
	int status;
	
	srand((unsigned int) time(0));  //srand()用来设置rand()产生随机数时的随机数种子
	printf("Enter the number of sides per die,\n");

	while (scanf_s("%d",&sides) ==1 && sides>0)
	{
		printf("How many dice?\n");
		if ((status = scanf("%d",&dice)) != 1)
		{
			if(status == EOF)
				break;
			else{
				printf("You should have entered an integer.");
				printf("Let's begin again.\n");
				while(getchar() != '\n')
					continue;
				printf("How many sides?\n");
				continue;
			}
		}
		roll = roll_n_dice( dice,sides);
		if (roll == -2 || roll == -1)
		{
			printf("Let's begin again.\n");
		printf("How many sides?\n");
		continue;
		}
		printf("You have rolled a %d using %d %d-sided dice.\n",roll,dice,sides);
		printf("How many dice?\n");

	}
	printf("The rollem() function was called %d times.\n",roll_count);
	printf("Good fortune to you \n");
	return 0;
}












