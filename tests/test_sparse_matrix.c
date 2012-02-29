#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <assert.h>
#include <conio.h>

#include "../standard_normal.h"
#include "../projection.h"
#include "../projection_family.h"

#include "../sparse_matrix.h"
#include "../sparse_matrix_hash.h"


int main(void)
{
	coo_matrix_t* cmatrix = init_coo_matrix(6);
	sparse_matrix_t* smatrix = NULL;

	int dimension = 3;
	int seed = 4578;
	int bin_width = 35;
	int proj_family_size = 3;

	projection_family_t* pfamily = NULL;

	/* Initialize a family (size = proj_family_size) */
	pfamily = 
		init_random_projections(dimension, seed, bin_width, proj_family_size);

	insert_coo_matrix(1, 0, 0, cmatrix);
	insert_coo_matrix(2, 0, 1, cmatrix);
	insert_coo_matrix(3, 1, 0, cmatrix);
	insert_coo_matrix(5, 1, 1, cmatrix);
	insert_coo_matrix(60, 2, 0, cmatrix);
	insert_coo_matrix(1, 2, 1, cmatrix);
	//insert_coo_matrix(0, 2, 2, cmatrix);

	sort_coo_matrix(cmatrix);

	smatrix = init_sparse_matrix(cmatrix, 3, 3);

	printf("LSH for r1 = %d \n", lsh_row(pfamily, smatrix, 0));
	printf("LSH for r2 = %d \n", lsh_row(pfamily, smatrix, 1));
	printf("LSH for r3 = %d \n", lsh_row(pfamily, smatrix, 2));

	return 0;
}

