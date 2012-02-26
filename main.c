#include <stdio.h>
#include "standard_normal.h"
#include "projection.h"

int main()
{
	int i;
	double data1[10] = {45, 2, 1, 7, 1, 1, 0.5 , 0, 5.6, 47};
	double data2[10] = {46, 2, 1, 8, 1, 1, 0.5 , 0, 5.6, 45};
	double data3[10] = {1, 8, 1, -7, 2, 10, 0.5 , 0, 0.6, 7};	

	projection_t* proj1 = init_random_projection(10, 57485, 40);
	projection_t* proj2 = init_random_projection(10, 5885,  40);
	projection_t* proj3 = init_random_projection(10, 4851545, 40);

	printf("Proj = %d \n", project_data(proj1, data1));
	printf("Proj = %d \n", project_data(proj2, data1));
	printf("Proj = %d \n", project_data(proj3, data1));

	printf("Proj = %d \n", project_data(proj1, data2));
	printf("Proj = %d \n", project_data(proj2, data2));
	printf("Proj = %d \n", project_data(proj3, data2));

	printf("Proj = %d \n", project_data(proj1, data3));
	printf("Proj = %d \n", project_data(proj2, data3));
	printf("Proj = %d \n", project_data(proj3, data3));

	
	
	return 0;
}
