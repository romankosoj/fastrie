//
// updater.h
// (Header automatically generated by the ispc compiler.)
// DO NOT EDIT THIS FILE.
//

#ifndef ISPC_UPDATER_H
#define ISPC_UPDATER_H

#include <stdint.h>



#ifdef __cplusplus
namespace ispc { /* namespace */
#endif // __cplusplus

///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && !defined(__ISPC_NO_EXTERN_C)
extern "C" {
#endif // __cplusplus
    extern void invert_batch(int32_t * rem1, uint32_t * nPrime, int32_t * results);
    extern void update_batch(uint32_t * indexes, uint32_t prime, uint8_t * sieve, int32_t num_iters);
    extern void update_batch4(uint32_t * indexes, uint32_t prime, uint8_t * sieve, int32_t num_iters);
    extern void update_batch4_2(uint32_t * indexes, uint32_t prime, uint8_t * sieve, int32_t num_iters);
    extern void update_multi_batch(uint32_t indexes_in[][6], uint32_t * primes, uint8_t * sieve, int32_t num_iters);
#if defined(__cplusplus) && !defined(__ISPC_NO_EXTERN_C)
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus

#endif // ISPC_UPDATER_H
