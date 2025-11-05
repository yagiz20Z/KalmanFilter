// ==================== matrix.h ====================
#ifndef MATRIX_H
#define MATRIX_H

// Matris çarpma fonksiyonları
void matrix_multiply_4x4_4x1(float A[4][4], float x[4], float result[4]);
void matrix_multiply_4x4(float A[4][4], float B[4][4], float result[4][4]);
void matrix_multiply_4x2(float A[4][4], float B[4][2], float result[4][2]);
void matrix_multiply_2x4_4x4(float A[2][4], float B[4][4], float result[2][4]);
void matrix_multiply_2x4_4x2(float A[2][4], float B[4][2], float result[2][2]);
void matrix_multiply_2x2(float A[2][2], float B[2][2], float result[2][2]);
void matrix_multiply_4x2_2x1(float A[4][2], float b[2], float result[4]);

// Matris toplama/çıkarma
void matrix_add_4x4(float A[4][4], float B[4][4], float result[4][4]);
void matrix_subtract_4x4(float A[4][4], float B[4][4], float result[4][4]);
void matrix_add_2x2(float A[2][2], float B[2][2], float result[2][2]);

// Matris transpoz
void matrix_transpose_4x4(float A[4][4], float result[4][4]);
void matrix_transpose_2x4(float A[2][4], float result[4][2]);

// Matris ters alma
void matrix_inverse_2x2(float A[2][2], float result[2][2]);

// Birim matris oluşturma
void matrix_identity_4x4(float result[4][4]);

// Matris kopyalama
void matrix_copy_4x4(float src[4][4], float dest[4][4]);
void matrix_copy_4x1(float src[4], float dest[4]);

// Matris yazdırma (debug için)
void matrix_print_4x4(const char* name, float A[4][4]);
void matrix_print_4x1(const char* name, float x[4]);
void matrix_print_2x2(const char* name, float A[2][2]);

#endif // MATRIX_H
