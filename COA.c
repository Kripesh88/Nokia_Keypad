#include<stdio.h>
int main(){
	int n,num;
	char ch;
	
do{

		printf("Enter any number available in the nokia phone: \n");
	scanf("%d",&num);
		switch(num){
			case 1:
				printf("{} ");
				break;
				case 2:
				printf("a ");
				break;
				case 22:
				printf("b");
				break;
			case 222:
				printf("c");
				break;
				case 2222:
				printf("2");
				break;
			case 3:
				printf("d");
				break;
				case 33:
				printf("e");
				break;
				case 333:
				printf("f");
				break;
				case 3333:
				printf("3");
				break;
				case 4:
				printf("g");
				break;
				case 44:
				printf("h");
				break;
				case 444:
				printf("i");
				break;
				case 4444:
				printf("4");
				break;
				case 5:
				printf("j");
				break;
				case 55:
				printf("k");
				break;
				case 555:
				printf("l");
				break;
				case 5555:
				printf("5");
				break;
				case 6:
				printf("m");
				break;
				case 66:
				printf("n");
				break;
				case 666:
				printf("o");
				break;
				case 6666:
				printf("6");
				break;
				case 7:
				printf("p");
				break;
				case 77:
				printf("q");
				break;
				case 777:
				printf("r");
				break;
				case 7777:
				printf("s");
				break;
				case 77777:
				printf("7");
				break;
				case 8:
				printf("t");
				break;
				case 88:
				printf("u");
				break;
				case 888:
				printf("v");
				break;
				case 8888:
				printf("8");
				break;
				case 9:
				printf("w");
				break;
				case 99:
				printf("x");
				break;
				case 999:
				printf("y");
				break;
				case 9999:
				printf("z");
				break;
				case 99999:
				printf("9");
				break;
				case 0:
				printf(" ");
				break;
				default:
					printf("The number that you entered is not listed in our NOKIA phone.");
		}
		
		
		
 	printf("\n");
	  printf("Do you want to continue? (y/n): \n");
        scanf("%c",&ch);
				
	
    } while(ch = 'y');


    printf("\n");
	
			
		
		

	return 0;
}
