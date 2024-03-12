#include<stdio.h>

main()

{
	int unit;
	float bill, total_bill,sc ;
	
	printf("Enter Electricity Unit =");
	scanf("%d",&unit);
	
	if(unit<=50 && unit>0)
	{
		bill = unit *0.50;
		
	}
	else if (unit<=150)
	{
		bill= (unit-50)* 0.75 + 25;
	}
	else if (unit<=250)
	{
		bill= (unit-150)* 1.20  + 25 + 75;	
	}
	
	else 
	{
		bill= (unit-250)* 1.50  + 25 + 75 + 120;	
	}
    printf("\nBill = %.2f\n",bill);
	sc = bill * 20/100;
	printf("Surcharge = %.2f\n",sc);
	total_bill = bill + sc;
	
	printf("Electricity Bill = %.2f",total_bill);
}