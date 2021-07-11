#include <stdio.h>
#include <stdlib.h>


int getInterface();
void clrscr();

//Op1 : Sum between 2 numbers
void getNum(); // Get number and push to op1_sum()
int op1_sum(int,int);

//Op2 : ASCII table between 2 number 
void getChar();//Get Character and push to op2_ASCII()
void op2_ASCII(char,char);


int main(){
	int c;
	// loop the Menu
	do{
		c=getInterface(); // Open Interface(MENU) and enter the option
		switch(c){
		case 1: printf("Operation 1 \n"); getNum();   break; // go to getNum() function--> get 2 number --> print sum
		case 2: printf("Operation 2 \n"); getChar();  break; // go to getChar() function --> get 2 character --> printf
		case 3: clrscr(); 							  break; // go to clrscr() function --> clear screen
		default : printf("\nThanks :D\n");					 // end the menu when input != 1~3
		}
	}while(c>0 && c<=3);
	
	system("pause");	
	return 0;
}
// INTERFACE
int getInterface(){
	int choice;
	//Menu
	printf("   ==========================\n");
	printf("   |          MENU          |\n");
	printf("   ==========================\n");
	
	
	printf("\n   Choice \tOperation");
	printf("\n   ------------------------");
	printf("\n   1\t\tOperation 1 ");
	printf("\n   2\t\tOperation 2 ");
	printf("\n   3\t\tClear Screen ");
	printf("\n   Other\t\tQuit ");
	printf("\n   ------------------------");
	
	//Accept input
	printf("\n----> Choice : ");
	
	// %*c --> Ignore 1 character input -> ignore Enter
	scanf("%d%*c",&choice);
	printf("\n");
	
	return choice;
}
// CLEAR SCREEN
void clrscr(){
	system("cls || clear");
}

// GET NUMBER 
void getNum(){
	int n1,n2,sum; 						// initiate 2 variables n1,n2,sum
	printf("Enter 2 number : "); 
	scanf("%d%d",&n1,&n2);				// get user input and put it to n1,n2
	sum=op1_sum(n1,n2);					// sum = return of op1_sum(n1,n2) function
	printf("Sum = %d\n",sum);			// print out sum
}
// SUM BETWEEN 2 NUMBERS
int op1_sum(int a,int b){
	int t,sum=0;	
	if(a>b){							// swap a & b if a>b
		t=a;
		a=b;
		b=t;
	}
	for(int i=a;i<=b;i++) sum+=i;		// i running from a to b <-- sum = sum + i 
	return sum;
}

// GET CHARACTER
void getChar(){
	char c1,c2;			   				// initiate 2 variables --> character
	printf("Enter 2 character : ");
	scanf("%c%c",&c1,&c2); 				// get user input and put it to c1,c2
	op2_ASCII(c1,c2);  	   				// go to op2_ASCII() function and input 2 parameters c1,c2
}

// ASCII TABLE BETWEEN 2 CHARACTERS
void op2_ASCII(char c1,char c2){
	char t;								// temporary t
	if(c1>c2){							// swap value of c1 & c2 if c1 > c2
		t=c1;			
		c1=c2;
		c2=t;
	}
	// Title ~ (Do nothing)
	printf("   Char   Dec   Octal   Hexa\n");
	printf("   ====   ===   =====   ====\n");
	
	// (Loop) to get the character between c1 & c2 --> Char - Decimal - Octal - Hexa
	for(int i=c1;i<=c2;i++){
		printf("   | %c %6d %6o %6X |\n",i,i,i,i);
	}
	//Do nothing
	printf("   ==========================\n");
	printf("\n");
	
}
