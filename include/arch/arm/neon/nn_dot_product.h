#ifndef NN_DOT_PRODUCT_NEON_H
#define NN_DOT_PRODUCT_NEON_H

#include <stddef.h>

// NN_DOT_PROD_MAX_VECTOR_SIZE defines the maximum size of a vector.
#ifndef NN_DOT_PROD_MAX_VECTOR_SIZE
#define NN_DOT_PROD_MAX_VECTOR_SIZE 64
#endif

// nn_dot_product_neon calculates the dot product of two vectors.
float nn_dot_product_neon(const float a[NN_DOT_PROD_MAX_VECTOR_SIZE], const float b[NN_DOT_PROD_MAX_VECTOR_SIZE], size_t vector_size);

#endif // NN_DOT_PRODUCT_NEON_H
