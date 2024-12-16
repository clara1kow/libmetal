/*
 * @file	baremetal/cache.h
 * @brief	baremetal cache operation primitives for libmetal.
 */

#ifndef __METAL_CACHE__H__
#error "Include metal/cache.h instead of metal/baremetal/cache.h"
#endif

#ifndef __METAL_BAREMETAL_CACHE__H__
#define __METAL_BAREMETAL_CACHE__H__

#ifdef __cplusplus
extern "C" {
#endif

void metal_machine_cache_flush(void *addr, unsigned int len);
void metal_machine_cache_invalidate(void *addr, unsigned int len);

static inline void __metal_cache_flush(void *addr, unsigned int len) {
  metal_machine_cache_flush(addr, len);
}

static inline void __metal_cache_invalidate(void *addr, unsigned int len) {
  metal_machine_cache_invalidate(addr, len);
}

#ifdef __cplusplus
}
#endif

#endif /* __METAL_BAREMETAL_CACHE__H__ */
