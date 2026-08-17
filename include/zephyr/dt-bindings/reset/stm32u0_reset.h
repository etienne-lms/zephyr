/*
 * Copyright (c) 2024 STMicroelectronics
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief STM32 reset controller devicetree helper macros for STM32U0
 * @ingroup reset_controller_stm32
 */

#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_RESET_STM32U0_RESET_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_RESET_STM32U0_RESET_H_

#include "stm32-common.h"

/** @cond INTERNAL_HIDDEN */

/* RCC bus reset register offset */
#define STM32_RESET_BUS_IOP	0x2C
#define STM32_RESET_BUS_AHB	0x28
#define STM32_RESET_BUS_APB_1	0x38
#define STM32_RESET_BUS_APB_2	0x40

/** @deprecated Please use STM32_RESET_BUS_AHB */
#define STM32_RESET_BUS_AHB1	STM32_RESET_BUS_AHB
/** @deprecated Please use STM32_RESET_BUS_APB1_1 */
#define STM32_RESET_BUS_APB1L	STM32_RESET_BUS_APB_1
/** @deprecated Please use STM32_RESET_BUS_APB1_2 */
#define STM32_RESET_BUS_APB1H	STM32_RESET_BUS_APB_2

/** @endcond */

#endif /* ZEPHYR_INCLUDE_DT_BINDINGS_RESET_STM32U0_RESET_H_ */
