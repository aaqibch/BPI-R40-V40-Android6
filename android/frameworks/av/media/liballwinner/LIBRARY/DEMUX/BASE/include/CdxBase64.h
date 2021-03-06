#ifndef CDX_BASE_64_H
#define CDX_BASE_64_H
#include <CdxTypes.h>
#include <CdxBuffer.h>
#include <AwPool.h>

#ifdef __cplusplus
extern "C" {
#endif

CdxBufferT *CdxDecodeBase64(AwPoolT *pool, const cdx_char *s);

cdx_char *CdxEncodeBase64(AwPoolT *pool, const cdx_void *_data, cdx_size size); 

#ifdef __cplusplus
}
#endif

#endif
