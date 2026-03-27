# Copyright (c) 2025 STMicroelectronics
# SPDX-License-Identifier: Apache-2.0

board_runner_args(stm32cubeprogrammer "--port=swd" "--reset-mode=hw")

if(CONFIG_BUILD_WITH_TFM)
  # Flash merged TF-M + Zephyr binary
  set_property(TARGET runners_yaml_props_target PROPERTY hex_file tfm_merged.hex)

  # Flash is set all secure (<build>/tfm/api_ns/regression.sh) before flash programming
  # hence locate non-secure image from the secure flash base address in HEX file.
  set(flash_secure_base_address 0x0c000000)
  math(EXPR TFM_HEX_BASE_ADDRESS_NS "${flash_secure_base_address}+${CONFIG_FLASH_LOAD_OFFSET}")

  board_runner_args(stm32cubeprogrammer "--erase" "--start-address=${tfm_fwm_boot_address}")
endif()

board_runner_args(pyocd "--target=stm32u3c5zit6q")
board_runner_args(jlink "--device=STM32U3C5ZI" "--reset-after-load")
board_runner_args(stlink_gdbserver "--apid=0")

include(${ZEPHYR_BASE}/boards/common/stm32cubeprogrammer.board.cmake)
include(${ZEPHYR_BASE}/boards/common/pyocd.board.cmake)
include(${ZEPHYR_BASE}/boards/common/jlink.board.cmake)
include(${ZEPHYR_BASE}/boards/common/stlink_gdbserver.board.cmake)
