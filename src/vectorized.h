#include <x86intrin.h>

#define STRIDE 4 /* number of doubles */
#define ALIGNMENT (sizeof(double) * STRIDE)

#define ALIGN_UP(_s, _a) ((size_t)(((_s) + (_a - 1)) & ~(_a - 1)))
#define ALIGN_SIZE(_s) ALIGN_UP(_s, ALIGNMENT)
#define ALIGN_VECTOR(_s) ALIGN_UP((_s) * sizeof(double), ALIGNMENT)

typedef __m256d vdouble;

#define load_pd _mm256_load_pd
#define broadcast_sd _mm256_broadcast_sd
#define store_pd _mm256_store_pd

#define mul_pd _mm256_mul_pd
#define add_pd _mm256_add_pd
#define fmsub_pd _mm256_fmsub_pd
