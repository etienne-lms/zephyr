/*
 * Copyright (c) 2022 Google Inc
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief STM32 reset controller devicetree helper macros for STM32U5
 * @ingroup reset_controller_stm32
 */

#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_RESET_STM32U5_RESET_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_RESET_STM32U5_RESET_H_

#include "stm32-common.h"

/** @cond INTERNAL_HIDDEN */

/* RCC bus reset register offset */
#define STM32_RESET_BUS_AHB1	0x60
#define STM32_RESET_BUS_AHB2_1	0x64
#define STM32_RESET_BUS_AHB2_2	0x68
#define STM32_RESET_BUS_AHB3	0x6C
#define STM32_RESET_BUS_APB1_1	0x74
#define STM32_RESET_BUS_APB1_2	0x78
#define STM32_RESET_BUS_APB2	0x7C
#define STM32_RESET_BUS_APB3	0x80

/** @deprecated Please use STM32_RESET_BUS_AHB2_1 */
#define STM32_RESET_BUS_AHB2L	STM32_RESET_BUS_AHB2_1
/** @deprecated Please use STM32_RESET_BUS_AHB2_2 */
#define STM32_RESET_BUS_AHB2H	STM32_RESET_BUS_AHB2_2
/** @deprecated Please use STM32_RESET_BUS_APB1_1 */
#define STM32_RESET_BUS_APB1L	STM32_RESET_BUS_APB1_1
/** @deprecated Please use STM32_RESET_BUS_APB1_2 */
#define STM32_RESET_BUS_APB1H	STM32_RESET_BUS_APB1_2

/** @endcond */

#endif /* ZEPHYR_INCLUDE_DT_BINDINGS_RESET_STM32U5_RESET_H_ */
