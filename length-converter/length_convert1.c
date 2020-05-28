#include<stdio.h>
void main()
{
	float cm,m,mm,km,feet,inch,yard;
	printf("By Priya Mandal\n");
	printf("---------------------\n");
	printf("Enter the length in centimeter:");
	scanf("%f",&cm);
	m=cm/100.00;
	mm=cm*10.00;
	km=cm/100000.00;
	feet=cm/30.48;
	inch=cm/2.54;
	yard=cm/91.44;
	printf("Length in meter=%.2f m\n",m);
	printf("Length in millimeter=%.2f mm\n",mm);
	printf("Length in kilometer=%.3f km\n",km);
	printf("Length in feet=%.2f feet\n",feet);
	printf("Length in inch =%.2f inch\n",inch);
	printf("Length in yard=%.2f yard\n",yard);
	
}
