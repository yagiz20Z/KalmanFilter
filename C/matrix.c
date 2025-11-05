#include "matrix.h"


// Matris çarpma: 4x4 * 4x1
void matrix_multiply_4x4_4x1(float A[4][4], float x[4], float result[4]) {
    for (int i = 0; i < 4; i++) {
        result[i] = 0;
        for (int j = 0; j < 4; j++) {
            result[i] += A[i][j] * x[j];
        }
    }
}

// Matris çarpma: 4x4 * 4x4
void matrix_multiply_4x4(float A[4][4], float B[4][4], float result[4][4]) {
    float temp[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            temp[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                temp[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    memcpy(result, temp, sizeof(temp));
}

// Matris çarpma: 4x4 * 4x2
void matrix_multiply_4x2(float A[4][4], float B[4][2], float result[4][2]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Matris çarpma: 2x4 * 4x4
void matrix_multiply_2x4_4x4(float A[2][4], float B[4][4], float result[2][4]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Matris çarpma: 2x4 * 4x2
void matrix_multiply_2x4_4x2(float A[2][4], float B[4][2], float result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Matris çarpma: 2x2 * 2x2
void matrix_multiply_2x2(float A[2][2], float B[2][2], float result[2][2]) {
    float temp[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            temp[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                temp[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    memcpy(result, temp, sizeof(temp));
}

// Matris çarpma: 4x2 * 2x1
void matrix_multiply_4x2_2x1(float A[4][2], float b[2], float result[4]) {
    for (int i = 0; i < 4; i++) {
        result[i] = 0;
        for (int j = 0; j < 2; j++) {
            result[i] += A[i][j] * b[j];
        }
    }
}

// Matris toplama: 4x4
void matrix_add_4x4(float A[4][4], float B[4][4], float result[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Matris çıkarma: 4x4
void matrix_subtract_4x4(float A[4][4], float B[4][4], float result[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

// Matris toplama: 2x2
void matrix_add_2x2(float A[2][2], float B[2][2], float result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Matris transpoz: 4x4
void matrix_transpose_4x4(float A[4][4], float result[4][4]) {
    float temp[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            temp[i][j] = A[j][i];
        }
    }
    memcpy(result, temp, sizeof(temp));
}

// Matris transpoz: 2x4
void matrix_transpose_2x4(float A[2][4], float result[4][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            result[j][i] = A[i][j];
        }
    }
}

// 2x2 Matris tersi
void matrix_inverse_2x2(float A[2][2], float result[2][2]) {
    float det = A[0][0] * A[1][1] - A[0][1] * A[1][0];
    
    // Sıfıra bölmeyi önle
    if (fabs(det) < 1e-10) {
        det = 1e-10;
    }
    
    result[0][0] = A[1][1] / det;
    result[0][1] = -A[0][1] / det;
    result[1][0] = -A[1][0] / det;
    result[1][1] = A[0][0] / det;
}

// Birim matris oluşturma: 4x4
void matrix_identity_4x4(float result[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            result[i][j] = (i == j) ? 1.0f : 0.0f;
        }
    }
}

// Matris kopyalama: 4x4
void matrix_copy_4x4(float src[4][4], float dest[4][4]) {
    memcpy(dest, src, 16 * sizeof(float));
}

// Matris kopyalama: 4x1
void matrix_copy_4x1(float src[4], float dest[4]) {
    memcpy(dest, src, 4 * sizeof(float));
}

// Debug: 4x4 matris yazdırma
void matrix_print_4x4(const char* name, float A[4][4]) {
    printf("%s:\n", name);
    for (int i = 0; i < 4; i++) {
        printf("  [");
        for (int j = 0; j < 4; j++) {
            printf("%8.4f", A[i][j]);
            if (j < 3) printf(", ");
        }
        printf("]\n");
    }
}

// Debug: 4x1 vektör yazdırma
void matrix_print_4x1(const char* name, float x[4]) {
    printf("%s: [%8.4f, %8.4f, %8.4f, %8.4f]\n", 
           name, x[0], x[1], x[2], x[3]);
}

// Debug: 2x2 matris yazdırma
void matrix_print_2x2(const char* name, float A[2][2]) {
    printf("%s:\n", name);
    for (int i = 0; i < 2; i++) {
        printf("  [%8.4f, %8.4f]\n", A[i][0], A[i][1]);
    }
}