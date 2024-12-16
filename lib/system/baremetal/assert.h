/*
 * @file	assert.h
 * @brief	Generic assertion support.
 */

#ifndef __METAL_ASSERT__H__
#error "Include metal/assert.h instead of metal/baremetal/assert.h"
#endif

#ifndef __METAL_BAREMETAL_ASSERT__H__
#define __METAL_BAREMETAL_ASSERT__H__

#include <assert.h>

/**
 * @brief Assertion macro for bare-metal applications.
 * @param cond Condition to evaluate.
 */
#define metal_sys_assert(cond) assert(cond)

#endif /* __METAL_BAREMETAL_ASSERT__H__ */
