#ifndef MATRIX_H
#define MATRIX_H

/**
 * Initializes all elements of the matrix to zero.
 */
void init_zero_matrix(float matrix[3][3]);

/**
*Initializes an identity matrix.
*/
void init_identity_matrix(float matrix [3][3]);

/**
*Multiple matrix by a scalar value.
*/
void mult_scalar_matrix(float matrix [3][3], float scalar);

/**
*Multiple matrices.
*/
void multiply_matrices(float a[3][3], float b[3][3], float c[3][3]);

/**
 * Print the elements of the matrix.
 */
void print_matrix(const float matrix[3][3]);

/**
 * Add matrices.
 */
void add_matrices(const float a[3][3], const float b[3][3], float c[3][3]);

#endif // MATRIX_H

