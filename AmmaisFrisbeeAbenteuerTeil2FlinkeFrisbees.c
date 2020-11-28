#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



//Angabe der Bildschirmauflösung des konsolenfensters, auf den der Bildschirminhalt gerechnet wird
#define hoehe 25
#define breite 100 


//Angabe Standort der Ziele
#define bankdist 40	//abstand nach vorne
#define bankbre 70 //abstand horizontal
#define baumdist 100
#define baumbre 30



void darstellung(int positionbreite, int positiondistanz, int p, int q);

int main (void)
{
	int j=0;
	int m=0;
	int n=0;
	int i=0;
	int k=0;
	int p=0;
	int q=0;
	int a=0;
	int b=0;
	int z=0;
	int g=0;
	int u=0;
	int zieldistanz=0;
	int zielbreite=0;
	int positiondistanz=0;
	int positionbreite=breite/2;
	while (j==0)
	{
			 	printf("AMMAIS FRISBEE ABENTEUER\n Teil 2: Flinke Frisbees  \n \n Du kannst \n");
				printf("1 auf den Baum zuspielen\n");
				printf("2 auf die Bank zuspielen\n");
				i=0; 			
				scanf ("%d",&i);
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				if (i==2)
				{
					j=1;
					printf("2 auf die Bank zuspielen\n");
					zieldistanz=bankdist;
					zielbreite=bankbre;
				}
				else if (i==1)
				{
					j=1;
					printf("1 auf den Baum zuspielen\n");
					zieldistanz=baumdist;
					zielbreite=baumbre;
				}
				else
	 			{
	 				printf("Eingabe nicht verstanden.\n");
	 			}	
	} 
	
	while (z==0)
	{
	g=0;
	darstellung(positionbreite,positiondistanz, 0, 0);
	while (g==0)
	{
		printf("waehle deine Wurfrichtung 1-5 (entspricht der ersten Zahl auf den Richtungsanzeigen, 1 ist ganz rechts, 5 ganz links), nach hinten 6\n");
		scanf("%d",&p);
		if(p<=5&&p>=1)
		{
			g=2;
		}
		if(p==6)
		{
			g=1;
		}
		if((p==1||p==2||p==3||p==4||p==5)&&(g==2))
		{
		
			printf("waehle deine wurfweite 1-3 (entspricht der 2. Zahl der Richtungsangaben, 1 ist am weitesten, 3 am kuerzesten)\n");
			q=0;
			scanf("%d",&q);
			darstellung(positionbreite,positiondistanz, p, q);
			sleep(2); 
			if(q==1) //vertikale positionsberechnung
			{
				positiondistanz=positiondistanz +40;
			}
			if(q==2)
			{
				positiondistanz=positiondistanz +20;
			}
			if(q==3)
			{
				positiondistanz=positiondistanz +10;
			}
		}
		if (g==0)
			{
				printf("eingabe unverstaendlich.\n");
			}
		if(p==1) //horizontale positionsberechung
		{
			positionbreite=positionbreite -30;
		}
		if(p==2)	
		{
			positionbreite=positionbreite -10;
		}
		if(p==4)
		{
			positionbreite=positionbreite +10;
		}
		if(p==5)
		{
			positionbreite=positionbreite +30;
		}
		if(p==3)
		{
			positiondistanz=positiondistanz +10;
		}
		if(p==6)
		{
			positiondistanz=positiondistanz -10;
		}	
	}
	
	//berechnung der Zieldistanz
	a=positiondistanz-zieldistanz;
	b=positionbreite-zielbreite;
	//ausgabe der Zieldistanz
	printf("\n Es landet %d meter",abs(a));
	if(a<0)
	{
		printf(" vor");
	}
	else
	{
		printf("  hinter");
	}
	printf(" und %d meter", abs(b));
	if(0>b)
	{
		printf(" links");
	}
	else
	{
		printf("  rechts");
	}
	printf(" des Ziels.\n");
	
	
	
	//TREFFER
	if(a==0&&b==0)
	{
		z=1;
		printf("gewonnen\n");
	}
	u=u+1;
	}
	
	printf("du hast %d Wuerfe gebraucht.", u);
	
	scanf("%d",&p);
}

void darstellung(int positionbreite, int positiondistanz, int p, int q)//, int zieldistanz, int zielbreite)
{

	int set =0;
	int spalte=0;
	int i=0;
	int j=0;
	int baumbreite=0;
	int bankbreite=0;
	int faktor=0;
	
	printf("Position von Startposition aus %d m entfernt, %d meter ", positiondistanz, abs(positionbreite - (int) breite/2));
		if (positionbreite - (int) breite/2 >0 )
		{
			printf("rechts\n");
		}
		else
		{
			printf("links\n");
		}
	baumbreite=(int) (baumbre-positionbreite+(breite/2));
	bankbreite= (int) (bankbre-positionbreite+(breite/2));
	for (i=1;i<=hoehe;i++)	//Zeile
	{
		set=0;
		spalte=0;
		for (j=1;j<=breite;j++)	//Spalte
		{	
			spalte=0;
			if (i==2)
			{
				spalte=1;
			}
			if (i==hoehe-1)
			{
				spalte=3;
			}
			if (i==((int)hoehe/2))
			{
				spalte=2;
			}
			if (spalte>0)
			{

				if (j==2)
				{
					set=2; 
					printf("1%d",spalte); //Bildschirmraster
					j=j+1;
					if(p==1&&q==spalte) //ausdruck des frisbees
					{
						set=set+4;
						printf("%c%c%c%c",0xdb,0xdb,0xdb,0xdb);						
					}
				}
				if (j==(int)(1*breite/4))
				{
					set=1;
					printf("2%d",spalte);  //Bildschirmraster
					j=j+1;
					if(p==2&&q==spalte)
					{
						set=set+4;
						printf("%c%c%c%c",0xdb,0xdb,0xdb,0xdb);						
					}
				}
				if (j==((int)(breite/2)))
				{
					set=1;
					printf("3%d",spalte);  //Bildschirmraster
					j=j+1;
					if(p==3&&q==spalte)
					{
						set=set+4;
						printf("%c%c%c%c",0xdb,0xdb,0xdb,0xdb);						
					}
				}
				if (j==(int)(3*breite/4))
				{
					set=2;
					printf("4%d",spalte);  //Bildschirmraster
					j=j+1;
					if(p==4&&q==spalte)
					{
						set=set+4;
						printf("%c%c%c%c",0xdb,0xdb,0xdb,0xdb);						
					}
				}
				if (j==breite-1)
				{
					set=2;
					printf("5%d",spalte);
					if(p==1&&q==spalte)
					{
						set=set+4;
						printf("%c%c%c%c",0xdb,0xdb,0xdb,0xdb);						
					}
				}
			}
			
			
			
			//zoomfaktor berechnen.
			faktor = (int)positiondistanz/20+1;
			//baum
			if(positiondistanz<baumdist)
			{
			if ( (hoehe -i <=10*faktor && hoehe -i>9*faktor )&&set==0 )
			{
				if(abs(j-baumbreite)<2*faktor)
				{
					set=1;
					printf("%c",0xdb);
				}
			}
			if ( hoehe -i <=9*faktor && hoehe -i>8*faktor )
			{
				if(abs(j-baumbreite)<3*faktor)
				{
					set=1;
					printf("%c",0xdb);
				}
			}
			if ( hoehe -i <=8*faktor && hoehe -i>6*faktor )
			{
				if(abs(j-baumbreite)<4*faktor)
				{
					set=1;
					printf("%c",0xdb);
				}
			}
			if ( hoehe -i <=6*faktor && hoehe -i>5*faktor )
			{
				if(abs(j-baumbreite)<3*faktor)
				{
					set=1;
					printf("%c",0xdb);
					
				}
			}	
			if ( hoehe -i <=5*faktor && hoehe -i>4*faktor )
			{
				if(abs(j-baumbreite)<2*faktor)
				{
					set=1;
					printf("%c",0xdb);
				}
			}
			if ( hoehe -i <=4*faktor && hoehe -i>1*faktor )
			{
				if(abs(j-baumbreite)<1*faktor)
				{
					set=1;
					printf("%c",0xdb);
				}
				
			}
			}
			
			
			//bank
			if(positiondistanz<bankdist)
			{
			if ( (hoehe -i <=3*faktor && hoehe -i>2*faktor )&&set==0 )
			{
				if(abs(j-bankbreite)<6*faktor)
				{
					set=1;
					printf("%c",0xdb);
				}
			}
			if ( (hoehe -i <=2*faktor && hoehe -i>1*faktor )&&set==0 )
			{
				if(abs(j-bankbreite)==4*faktor)
				{
					set=1;
					printf("%c",0xdb);
				}
			}
			}
			
			
			
			
			if (set==0) //bildschirmhintergrund
			{
				printf(" ");
			}
			if (set!=0)
			{
				set=set-1;
			}
	}
			

			
		spalte=0;
		printf("\n");
	}
	
}
