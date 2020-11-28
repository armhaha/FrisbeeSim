#include <stdio.h>
#include <stdlib.h>


void displayBank(void);
void displaycontrols(void);
void displayinventory(void);
int irand( int a, int e);
int main (void)
{
	int i=0;
	int j=0;
	int k=0;
	int l=0;
	int b=0;
	time_t t;
	int parkgesehen=0;
	int frisbeegeworfen = 0;
	int frisbeeiminventar;
	srand((unsigned) time(&t));
	printf ("AMMAIS FRISBEE ABENTEUER \n \n \n");

	printf ("Dann kann es ja losgehen\n\n");
	
	printf ("Du stehst vor einem Park. \n");

	
	while (k==0)
	{
		printf("\nBist du bereit fuer diese SPANNENDE Spiel?\n");
		printf("Druecke \n");
		printf("1 fuer JA\n");
		printf("2 fuer NEIN\n");
		printf("Bestaetige mit Enter.\n");
 		scanf ("%d",&i);
 		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
 		 while (i==2)
		 {
	 		printf("Schade. Wenn du bereit bist, druecke 1, falls nein, druecke 2\n");
	 		scanf ("%d",&i); 
	 	}
	 	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
 		if (i==1)
 		{
 			while (j==0)
 			{
			 	printf("Du kannst ... \n");
				printf("1 den Park ansehen\n");
				printf("2 in den Park gehen\n");
				i=0; 			
				scanf ("%d",&i);
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				if (i==1)
				{
					printf("Du siehst den Park an. Der Park sieht schoen aus. Gruene Baeume, ein paar Leute sind da. In der Ferne siehst du eine Bank.\n\n");
					parkgesehen=1;
				}
				else if (i==2)
				{
					j=1;
					printf("Du gehst in den Park\n\n");
					k=1;
					if (parkgesehen==1)
					{
						printf("Die Leute, die du gesehen hast, sind deine Mitspieler. Ihr wollt Frisbee spielen.\n");
					}
					else
					{
						printf("Oh Ueberraschung! Da spielen Leute Frisbee.\n\n"); 
					}
				}
				else
	 			{
	 				printf("Eingabe nicht verstanden.\n");
	 			}	
     		} 
		}
		else
		{
			printf("Eingabe nicht verstanden.\n");
		}
	}
	k=0;
	while (k==0)
	{
		printf("Da liegt dein Frisbee.\n");
		if(parkgesehen==1)
		{
			printf("Deine Leute haben es dir mitgebracht.\n");
		}
		else
		{
			printf("Du wunderst dich, wie es dahingekommen ist.\n");
		}
		printf("Willst du es \n");
		printf("1 ansehen\n");
		printf("2 nehmen\n");
		printf("3 jonglieren\n");
		printf("4 in Richtung des abgemachten Ziels werfen\n");
		i=0;
		scanf ("%d",&i);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		if(i==1)
		{
			printf("Du betrachtest das Frisbee. Es ist ein tolles Frisbee, es laeuchtet im Dunkeln.\n\n");
			
		}
		if(i==3)
		{
			printf("Du musst das Frisbee in die Hand nehmen bevor du es jonglieren kannst.\n\n");
		}
		if(i==4)
		{
			printf("Du musst das Frisbee in die Hand nehmen bevor du es werfen kannst.\n\n");
		}
		if (i==2)
		{
			k=1;
			printf("Du nimmst das Frisbee.\n\n");
		}
		
	}
	
	k=0;
	while (k==0)
	{
		printf("Du kannst es \n");
		printf("1 ansehen\n");
		printf("2 jonglieren\n");
		printf("3 in Richtung des abgemachten Ziels werfen\n");
		i=0;
		scanf ("%d",&i);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		if(i==1)
		{
			printf("Du betrachtest das Frisbee. Es ist ein tolles Frisbee, es laeuchtet im Dunkeln.\n");
			
		}
		if(i==2)
		{
			printf("Du jonglierst das Frisbee mit einer Hand. SO AWESOME\n\n");
		}
		if(i==3)
		{
			k=1;
			printf("Das abgemachte Ziel ist eine Bank. Das Frisbee fliegt fast bis dorthin.\n\n");
		}
	}
	k=0;
	b=1;
	while (k==0)
	{
		printf("Oh, jetzt musst du es zur Bank putten.\n");
		printf("Du kannst es \n");
		printf("1 niedrig werfen\n");
		printf("2 mittig werfen\n");
		printf("3 hoch werfen\n");
		i=0;
		scanf ("%d",&i);
		l=l+i;
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		
		if(l==2)
		{
			printf("Das war knapp zu kurz. Das Frisbee fliegt nicht weit genug. Du brauchst noch einen Wurf.\n");
			b=b+1;
		}
		if(l==4||l==5)
		{
			printf("Das war zu weit. Du hast ueber das Ziel hinausgeworfen. Du wirfst zurueck. Das Frisbee liegt jetzt ganz kurz vor der Bank.\n\n");
			l=2;
			b=b+2;
		}
		if(l==3)
		{
			k=1;
			printf("Volltreffer!\n\n\n");
			b=b+1;
		
		}
		if(l==1)
		{
			printf("Das war wohl zu niedrig. Das Frisbee fliegt nicht weit genug. Du brauchst noch einen Wurf.\n");
			b=b+1;
		}
	}
		
	
	printf("Du hast %d Wuerfe gebraucht.\n\n", b);
	printf("Ende. Druecke 1 zum beenden.\n");
	scanf ("%d",&i);
	
}

