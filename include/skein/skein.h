#ifndef SKEIN_H
#define SKEIN_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum
{
    SKEIN_SUCCESS         =      0,          /* return codes from Skein calls */
    SKEIN_FAIL            =      1,
    SKEIN_BAD_HASHLEN     =      2
} SkeinHashReturn;


extern __attribute__((visibility ("default"))) void skein256(const unsigned char *input, size_t input_len, unsigned char *output);

extern SkeinHashReturn skein(int hashbitlen, const unsigned char *input,
    size_t input_len, unsigned char *output);

#ifdef __cplusplus
}
#endif

#endif
