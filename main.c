#include <stdio.h>
#include "standard_normal.h"
#include "projection.h"
#include "projection_family.h"

int main()
{
	double data1[10] = {45, 2, 1, 7, 1, 1, 0.5 , 0, 5.6, 47};
	double data2[10] = {32, 2, 1, 8, 0, 1, 0.5 , 0, 5.6, 45};
	double data3[10] = {1, 8, 1, -7, 2, 10, 0.5 , 0, 0.6, 7};	

	projection_family_t* pfamily = init_random_projections(10, 542445, 45, 3);

	printf("LSH for data1 = %d \n", lsh_data(pfamily, data1));
	printf("LSH for data2 = %d \n", lsh_data(pfamily, data2));
	printf("LSH for data3 = %d \n", lsh_data(pfamily, data3));

	free_projection_family(pfamily);
	
	return 0;
}
