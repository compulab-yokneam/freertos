/*
 * Copyright 2017-2018 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 * 
 */


/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v4.0
processor: MIMX8MQ6xxxJZ
package_id: MIMX8MQ6DVAJZ
mcu_data: ksdk2_0
processor_version: 0.0.0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {coreID: m4}
- pin_list:
  - {pin_num: B6, peripheral: UART1, signal: uart_rx, pin_signal: UART1_RXD, PUE: Enabled, SRE: MEDIUM}
  - {pin_num: D6, peripheral: UART1, signal: uart_tx, pin_signal: UART1_TXD, PUE: Enabled, SRE: MEDIUM}
  - {pin_num: K6, peripheral: GPIO1, signal: 'gpio_io, 12', pin_signal: GPIO1_IO12}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {                                /*!< Function assigned for the core: Cortex-M4[m4] */
    IOMUXC_SetPinMux(IOMUXC_GPIO1_IO12_GPIO1_IO12, 0U);
    IOMUXC_SetPinMux(IOMUXC_UART1_RXD_UART1_RX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_UART1_RXD_UART1_RX,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(6U) |
                        IOMUXC_SW_PAD_CTL_PAD_SRE(1U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK);
    IOMUXC_SetPinMux(IOMUXC_UART1_TXD_UART1_TX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_UART1_TXD_UART1_TX,
                        IOMUXC_SW_PAD_CTL_PAD_DSE(6U) |
                        IOMUXC_SW_PAD_CTL_PAD_SRE(1U) |
                        IOMUXC_SW_PAD_CTL_PAD_PUE_MASK);
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
