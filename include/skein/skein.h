#ifndef SKEIN_H
#define SKEIN_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __WEBASSEMBLY__
#   pragma message "Building for webassembly arch....."
#   include "webassembly.h"
#else
#   include <string.h>
#endif /// __WEBASSEMBLY__

#ifdef __EMSCRIPTEN__
#   pragma message "Building using emscripten SDK....."
#   include "emscripten.h"
#else
#   define EMSCRIPTEN_KEEPALIVE
#endif


typedef enum
{
    SKEIN_SUCCESS         =      0,          /* return codes from Skein calls */
    SKEIN_FAIL            =      1,
    SKEIN_BAD_HASHLEN     =      2
} SkeinHashReturn;


void  __attribute__((used))  __attribute__((visibility("default"))) EMSCRIPTEN_KEEPALIVE
skein256(const unsigned char *input, size_t input_len, unsigned char *output);

extern SkeinHashReturn skein(int hashbitlen, const unsigned char *input,
    size_t input_len, unsigned char *output);

#ifdef __cplusplus
}
#endif

#endif
