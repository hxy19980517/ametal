/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief GPIO �����û������ļ�
 * \sa am_hwconf_key_gpio.c
 *
 * \internal
 * \par Modification history
 * - 1.00 17-07-13  tee, first implementation
 * \endinternal
 */
#include "stm32f103rbt6_pin.h"
#include "ametal.h"
#include "am_stm32f103rbt6_inst_init.h"
#include "am_key_gpio.h"
#include "am_input.h"

/**
 * \addtogroup am_if_src_hwconf_key_gpio
 * \copydoc am_hwconf_key_gpio.c
 * @{
 */

static const int __g_key_pins[]  = {PIOC_7};
static const int __g_key_codes[] = {KEY_KP0};

/** \brief �豸��Ϣ */
static const am_key_gpio_info_t __g_key_gpio_info = {
    __g_key_pins,
    __g_key_codes,
    AM_NELEMENTS(__g_key_pins),
    AM_TRUE,
    10
};

/** \brief �豸ʵ�� */
static am_key_gpio_t __g_key_gpio;

/** \brief ʵ����ʼ������ */
int am_key_gpio_inst_init (void)
{
    return am_key_gpio_init(&__g_key_gpio, &__g_key_gpio_info);
}

/**
 * @}
 */

/* end of file */