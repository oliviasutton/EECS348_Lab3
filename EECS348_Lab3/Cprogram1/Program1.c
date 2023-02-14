/*
 * Program1.c
 *
 *  Created on: Feb 8, 2023
 *      Author: Liv Sutton
 */

#include <stdio.h>
#define MONTHS 12
char *months[12] = {"January", "February", "March", "April","May","June","July","August", "September", "October", "November", "December"};
float sales[12];
double min, max, sum = 0;
int i, n;



int sales_reports(float sales[]){

printf("Monthly sales report for 2022:\n\n");
printf("Month      Sales \n");
for (i=0; i < 12; i++)
{
	printf("\n%s %.2f", months[i], sales[i]);

}
	return 0;
}
	//CODE




void min_max_avg(float sales [MONTHS]) {
	//code
	min=max= sales[0];
	    for(i=1; i<12; i++)
	    {
	         if(min>sales[i])
			  min=sales[i];
			   if(max<sales[i])
			    max=sales[i];
	    }

	 printf("\n\nSales Summary: \n");
	 printf("\n minimum of array is : %.2lf",min);
	 printf("\n maximum of array is : %.2lf",max);

	 for(i=0; i<12; i++){
		 sum += sales[i];
	 }

	 printf("\n Average is : %.2lf", (sum/12));

}

void six_month_avg(float sales[MONTHS]){
	printf("\n\n Six-Month Moving Average Report: \n\n");

	float sum1;
	int j;
	for (i=0; i < 7; i++){
		for (j=0; j < 6; j++){
			sum1 += sales[j+i];
		}
		if (i==0) {
				printf("January-June ");
				}
				if (i==1) {
					printf("February-July ");
				}
				if (i==2) {
					printf("March-August ");
				}
				if (i==3) {
					printf("April-September ");
				}
				if (i==4) {
					printf("May-October ");
				}
				if (i==5) {
					printf("June-November ");
				}
				if (i==6) {
					printf("July-December ");
				}
		printf("%.2f \n", sum1/6);
		sum1=0;

	}


}

void print_sales_descending(float sales[MONTHS]){
	int j;
	double temp;
	char * temp2;

	for (i=0; i<12; i++)
	{
		for (j = i + 1; j < 12; j++)
		{
		if (sales[i] < sales[j])
			{
			temp= sales[i];
			temp2 = months[i];
			sales[i] = sales[j];
			months[i] = months[j];
			sales[j] = temp;
			months[j] = temp2;
			}

		}
	}

	for (i = 0; i < 12; i++)
	{
		printf("\n%s %.2f", months[i], sales[i]);
	}
}



int main() {
	FILE *fp;
	int i;

	fp = fopen("sample.txt", "r");

	if (fp == NULL) {
		printf("Error opening file\n");
		return 1;
	}

	for (i = 0; i < MONTHS; i++) {
		fscanf(fp, "%f", &sales[i]);
	}

	fclose(fp);
	sales_reports(sales);
	min_max_avg(sales);
	six_month_avg(sales);
	print_sales_descending(sales);
}


