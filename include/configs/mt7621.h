/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2022 MediaTek Inc. All rights reserved.
 *
 * Author: Weijie Gao <weijie.gao@mediatek.com>
 */

#ifndef __CONFIG_MT7621_H
#define __CONFIG_MT7621_H

#define CONFIG_SYS_SDRAM_BASE		0x80000000

#define CONFIG_VERY_BIG_RAM
#define CONFIG_MAX_MEM_MAPPED		0x1c000000

#define CONFIG_SYS_INIT_SP_OFFSET	0x800000

/* MMC */
#define MMC_SUPPORTS_TUNING

/* NAND */

/* Serial SPL */
#if defined(CONFIG_SPL_BUILD) && defined(CONFIG_SPL_SERIAL)
#define CONFIG_SYS_NS16550_MEM32
#define CONFIG_SYS_NS16550_CLK		50000000
#define CONFIG_SYS_NS16550_REG_SIZE	-4
#define CONFIG_SYS_NS16550_COM1		0xbe000c00
#endif

/* Serial common */
#define CONFIG_SYS_BAUDRATE_TABLE	{ 9600, 19200, 38400, 57600, 115200, \
					  230400, 460800, 921600 }

/* Dummy value */
#define CONFIG_SYS_UBOOT_BASE		0

#endif /* __CONFIG_MT7621_H */
