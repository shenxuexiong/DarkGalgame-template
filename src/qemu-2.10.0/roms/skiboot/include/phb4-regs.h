/* Copyright 2013-2016 IBM Corp.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * 	http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
 * implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __PHB4_REGS_H
#define __PHB4_REGS_H

/*
 * PHB registers
 */

/* PHB Fundamental register set A */
/* phb4_spec_036.pdf, page 80, "5.4.1 ETU/RSB HV Register Address Map" */
/* FIXME: check these (phb3 currently below) */
#define PHB_LSI_SOURCE_ID		0x100
#define   PHB_LSI_SRC_ID		PPC_BITMASK(4,12)
#define PHB_DMA_CHAN_STATUS		0x110
#define   PHB_DMA_CHAN_ANY_ERR		PPC_BIT(27)
#define   PHB_DMA_CHAN_ANY_ERR1		PPC_BIT(28)
#define   PHB_DMA_CHAN_ANY_FREEZE	PPC_BIT(29)
#define PHB_CPU_LOADSTORE_STATUS	0x120
#define   PHB_CPU_LS_ANY_ERR		PPC_BIT(27)
#define   PHB_CPU_LS_ANY_ERR1		PPC_BIT(28)
#define   PHB_CPU_LS_ANY_FREEZE		PPC_BIT(29)
#define PHB_DMA_MSI_NODE_ID		0x128
#define   PHB_DMAMSI_NID_FIXED		PPC_BIT(0)
#define   PHB_DMAMSI_NID		PPC_BITMASK(24,31)
#define PHB_CONFIG_DATA			0x130
#define PHB_LOCK0			0x138
#define PHB_CONFIG_ADDRESS		0x140
#define   PHB_CA_ENABLE			PPC_BIT(0)
#define	  PHB_CA_STATUS			PPC_BITMASK(1,3)
#define	  PHB_CA_BUS			PPC_BITMASK(4,11)
#define   PHB_CA_DEV			PPC_BITMASK(12,16)
#define   PHB_CA_FUNC			PPC_BITMASK(17,19)
#define   PHB_CA_BDFN			PPC_BITMASK(4,19) /* bus,dev,func */
#define   PHB_CA_REG			PPC_BITMASK(20,31)
#define   PHB_CA_PE			PPC_BITMASK(39,47)
#define PHB_LOCK1			0x148
#define PHB_IVT_BAR			0x150
#define   PHB_IVT_BAR_ENABLE		PPC_BIT(0)
#define   PHB_IVT_BASE_ADDRESS		PPC_BITMASK(14,48)
#define   PHB_IVT_LENGTH		PPC_BITMASK(52,63)
#define PHB_RBA_BAR			0x158
#define   PHB_RBA_BAR_ENABLE		PPC_BIT(0)
#define   PHB_RBA_BASE_ADDRESS		PPC_BITMASK(14,55)
#define PHB_PHB4_CONFIG			0x160
#define   PHB_PHB4C_32BIT_MSI_EN	PPC_BIT(8)
#define   PHB_PHB4C_64BIT_MSI_EN	PPC_BIT(14)
#define PHB_RTT_BAR			0x168
#define   PHB_RTT_BAR_ENABLE		PPC_BIT(0)
#define   PHB_RTT_BASE_ADDRESS		PPC_BITMASK(8,46)
#define PHB_PELTV_BAR			0x188
#define   PHB_PELTV_BAR_ENABLE		PPC_BIT(0)
#define   PHB_PELTV_BASE_ADDRESS	PPC_BITMASK(8,50)
#define PHB_M32_BASE_ADDR		0x190
#define PHB_M32_BASE_MASK		0x198
#define PHB_M32_START_ADDR		0x1a0
#define PHB_PEST_BAR			0x1a8
#define   PHB_PEST_BAR_ENABLE		PPC_BIT(0)
#define   PHB_PEST_BASE_ADDRESS		PPC_BITMASK(8,51)
#define PHB_M64_UPPER_BITS		0x1f0
#define PHB_INTREP_TIMER		0x1f8
#define PHB_DMARD_SYNC			0x200
#define   PHB_DMARD_SYNC_START		PPC_BIT(0)
#define   PHB_DMARD_SYNC_COMPLETE	PPC_BIT(1)
#define PHB_RTC_INVALIDATE		0x208
#define   PHB_RTC_INVALIDATE_ALL	PPC_BIT(0)
#define   PHB_RTC_INVALIDATE_RID	PPC_BITMASK(16,31)
#define PHB_TCE_KILL			0x210
#define   PHB_TCE_KILL_ALL		PPC_BIT(0)
#define   PHB_TCE_KILL_PE		PPC_BIT(1)
#define   PHB_TCE_KILL_ONE		PPC_BIT(2)
#define	  PHB_TCE_KILL_PSEL		PPC_BIT(3)
#define	  PHB_TCE_KILL_64K		0x1000 /* Address override */
#define	  PHB_TCE_KILL_2M		0x2000 /* Address override */
#define	  PHB_TCE_KILL_1G		0x3000 /* Address override */
#define	  PHB_TCE_KILL_PENUM		PPC_BITMASK(55,63)
#define PHB_TCE_SPEC_CTL		0x218
#define PHB_IODA_ADDR			0x220
#define   PHB_IODA_AD_AUTOINC		PPC_BIT(0)
#define	  PHB_IODA_AD_TSEL		PPC_BITMASK(11,15)
#define	  PHB_IODA_AD_MIST_PWV		PPC_BITMASK(28,31)
#define	  PHB_IODA_AD_TADR		PPC_BITMASK(55,63)
#define PHB_IODA_DATA0			0x228
#define PHB_FFI_REQUEST			0x238
#define   PHB_FFI_LOCK_CLEAR		PPC_BIT(3)
#define   PHB_FFI_REQUEST_ISN		PPC_BITMASK(49,59)
#define PHB_FFI_LOCK			0x240
#define PHB_XIVE_UPDATE			0x248 /* Broken in DD1 */
#define PHB_PHB4_GEN_CAP		0x250
#define PHB_PHB4_TCE_CAP		0x258
#define PHB_PHB4_IRQ_CAP		0x260
#define PHB_PHB4_EEH_CAP		0x268
#define PHB_PAPR_ERR_INJ_CTL		0x2b0
#define   PHB_PAPR_ERR_INJ_CTL_INB	PPC_BIT(0)
#define   PHB_PAPR_ERR_INJ_CTL_OUTB	PPC_BIT(1)
#define   PHB_PAPR_ERR_INJ_CTL_STICKY	PPC_BIT(2)
#define   PHB_PAPR_ERR_INJ_CTL_CFG	PPC_BIT(3)
#define   PHB_PAPR_ERR_INJ_CTL_RD	PPC_BIT(4)
#define   PHB_PAPR_ERR_INJ_CTL_WR	PPC_BIT(5)
#define   PHB_PAPR_ERR_INJ_CTL_FREEZE	PPC_BIT(6)
#define PHB_PAPR_ERR_INJ_ADDR		0x2b8
#define   PHB_PAPR_ERR_INJ_ADDR_MMIO		PPC_BITMASK(16,63)
#define PHB_PAPR_ERR_INJ_MASK		0x2c0
#define   PHB_PAPR_ERR_INJ_MASK_CFG		PPC_BITMASK(4,11)
#define   PHB_PAPR_ERR_INJ_MASK_CFG_ALL		PPC_BITMASK(4,19)
#define   PHB_PAPR_ERR_INJ_MASK_MMIO		PPC_BITMASK(16,63)
#define PHB_ETU_ERR_SUMMARY		0x2c8
#define PHB_INT_NOTIFY_ADDR		0x300
#define PHB_INT_NOTIFY_INDEX		0x308
#define PHB_VERSION			0x800
#define PHB_CTRLR			0x810
#define   PHB_CTRLR_IRQ_PGSZ_64K	PPC_BIT(11)
#define   PHB_CTRLR_MMIO_RD_STRICT	PPC_BIT(13)
#define   PHB_CTRLR_CFG_EEH_DISABLE	PPC_BIT(15)
#define   PHB_CTRLR_FENCE_LNKILL_DIS	PPC_BIT(16)
#define   PHB_CTRLR_TVT_ADDR_SEL	PPC_BITMASK(17,19)
#define     TVT_1_PER_PE		0
#define     TVT_2_PER_PE		1
#define     TVT_4_PER_PE		2
#define     TVT_8_PER_PE		3
#define     TVT_16_PER_PE		4
#define   PHB_CTRLR_DMA_RD_SPACING	PPC_BITMASK(28,31)
#define PHB_TIMEOUT_CTRL1		0x878
#define PHB_TIMEOUT_CTRL2		0x880
#define PHB_Q_DMA_R			0x888
#define   PHB_Q_DMA_R_QUIESCE_DMA	PPC_BIT(0)
#define   PHB_Q_DMA_R_AUTORESET		PPC_BIT(1)
#define   PHB_Q_DMA_R_DMA_RESP_STATUS	PPC_BIT(4)
#define   PHB_Q_DMA_R_MMIO_RESP_STATUS	PPC_BIT(5)
#define   PHB_Q_DMA_R_TCE_RESP_STATUS	PPC_BIT(6)
#define   PHB_Q_DMA_R_TCE_KILL_STATUS	PPC_BIT(7)

/* Performance monitor & Debug registers */
#define PHB_TRACE_CONTROL		0xf80
#define PHB_PERFMON_CONFIG		0xf88
#define PHB_PERFMON_CTR0		0xf90
#define PHB_PERFMON_CTR1		0xf98
#define PHB_PERFMON_CTR2		0xfa0
#define PHB_PERFMON_CTR3		0xfa8

// FIXME add more here
#define PHB_RC_CONFIG_BASE		0x1000

#define PHB_PBL_TIMEOUT_CTRL		0x1810

// FIXME add more here
#define PHB_PCIE_SCR			0x1A00
#define	  PHB_PCIE_SCR_MAXLINKSPEED	PPC_BITMASK(32,35)


#define PHB_PCIE_CRESET			0x1A10
#define	  PHB_PCIE_CRESET_CFG_CORE	PPC_BIT(0)
#define	  PHB_PCIE_CRESET_TLDLP		PPC_BIT(1)
#define	  PHB_PCIE_CRESET_PBL		PPC_BIT(2)
#define	  PHB_PCIE_CRESET_PERST_N	PPC_BIT(3)
#define	  PHB_PCIE_CRESET_PIPE_N	PPC_BIT(4)


#define PHB_PCIE_HOTPLUG_STATUS		0x1A20
#define	  PHB_PCIE_HPSTAT_PRESENCE	PPC_BIT(10)

#define PHB_PCIE_DLP_TRAIN_CTL		0x1A40
#define	  PHB_PCIE_DLP_TL_LINKACT	PPC_BIT(23)
#define   PHB_PCIE_DLP_INBAND_PRESENCE  PPC_BIT(19)

#define PHB_PCIE_LANE_EQ_CNTL0		0x1AD0
#define PHB_PCIE_LANE_EQ_CNTL1		0x1AD8
#define PHB_PCIE_LANE_EQ_CNTL2		0x1AE0
#define PHB_PCIE_LANE_EQ_CNTL3		0x1AE8
#define PHB_PCIE_LANE_EQ_CNTL20		0x1AF0
#define PHB_PCIE_LANE_EQ_CNTL21		0x1AF8
#define PHB_PCIE_LANE_EQ_CNTL22		0x1B00
#define PHB_PCIE_LANE_EQ_CNTL23		0x1B08

/*
 * PHB4 xscom address defines
 */

/* Nest base registers */
#define XPEC_NEST_PBCQ_HW_CONFIG		0x0

/* Nest base per-stack registers */
#define XPEC_NEST_STK_PCI_NFIR			0x0
#define XPEC_NEST_STK_PCI_NFIR_CLR		0x1
#define XPEC_NEST_STK_PCI_NFIR_SET		0x2
#define XPEC_NEST_STK_PCI_NFIR_MSK		0x3
#define XPEC_NEST_STK_PCI_NFIR_MSK_CLR		0x4
#define XPEC_NEST_STK_PCI_NFIR_MSK_SET		0x5
#define XPEC_NEST_STK_PCI_NFIR_ACTION0		0x6
#define XPEC_NEST_STK_PCI_NFIR_ACTION1		0x7
#define XPEC_NEST_STK_PCI_NFIR_WOF		0x8
#define XPEC_NEST_STK_ERR_RPT0			0xa
#define XPEC_NEST_STK_ERR_RPT1			0xb
#define XPEC_NEST_STK_PBCQ_STAT			0xc
#define XPEC_NEST_STK_PBCQ_MODE			0xd
#define XPEC_NEST_STK_MMIO_BAR0			0xe
#define XPEC_NEST_STK_MMIO_BAR0_MASK		0xf
#define XPEC_NEST_STK_MMIO_BAR1			0x10
#define XPEC_NEST_STK_MMIO_BAR1_MASK		0x11
#define XPEC_NEST_STK_PHB_REG_BAR		0x12
#define XPEC_NEST_STK_IRQ_BAR			0x13
#define XPEC_NEST_STK_BAR_EN			0x14
#define   XPEC_NEST_STK_BAR_EN_MMIO0		PPC_BIT(0)
#define   XPEC_NEST_STK_BAR_EN_MMIO1		PPC_BIT(1)
#define   XPEC_NEST_STK_BAR_EN_PHB		PPC_BIT(2)
#define   XPEC_NEST_STK_BAR_EN_INT		PPC_BIT(3)
#define XPEC_NEST_STK_DATA_FREZ_TYPE		0x15

/* PCI base registers */
#define XPEC_PCI_PBAIB_HW_CONFIG		0x0
#define XPEC_PCI_CAPP_SEC_BAR			0x1

/* PCI base per-stack registers */
#define XPEC_PCI_STK_PCI_FIR			0x0
#define XPEC_PCI_STK_PCI_FIR_CLR		0x1
#define XPEC_PCI_STK_PCI_FIR_SET		0x2
#define XPEC_PCI_STK_PCI_FIR_MSK		0x3
#define XPEC_PCI_STK_PCI_FIR_MSK_CLR		0x4
#define XPEC_PCI_STK_PCI_FIR_MSK_SET		0x5
#define XPEC_PCI_STK_PCI_FIR_ACTION0		0x6
#define XPEC_PCI_STK_PCI_FIR_ACTION1		0x7
#define XPEC_PCI_STK_PCI_FIR_WOF		0x8
#define XPEC_PCI_STK_ETU_RESET			0xa
#define XPEC_PCI_STK_PBAIB_ERR_REPORT		0xb

/* ETU XSCOM registers */
#define XETU_HV_IND_ADDRESS			0x0
#define   XETU_HV_IND_ADDR_VALID		PPC_BIT(0)
#define   XETU_HV_IND_ADDR_4B			PPC_BIT(1)
#define   XETU_HV_IND_ADDR_AUTOINC		PPC_BIT(2)
#define XETU_HV_IND_DATA			0x1

/*
 * IODA3 on-chip tables
 */

#define IODA3_TBL_LIST		1
#define IODA3_TBL_MIST		2
#define IODA3_TBL_RCAM		5
#define IODA3_TBL_MRT		6
#define IODA3_TBL_PESTA		7
#define IODA3_TBL_PESTB		8
#define IODA3_TBL_TVT		9
#define IODA3_TBL_TCAM		10
#define IODA3_TBL_TDR		11
#define IODA3_TBL_MBT		16
#define IODA3_TBL_MDT		17
#define IODA3_TBL_PEEV		20

/* LIST */
#define IODA3_LIST_P			PPC_BIT(6)
#define IODA3_LIST_Q			PPC_BIT(7)
#define IODA3_LIST_STATE		PPC_BIT(14)

/* MIST */
#define IODA3_MIST_P3			PPC_BIT(48 + 0)
#define IODA3_MIST_Q3			PPC_BIT(48 + 1)
#define IODA3_MIST_PE3			PPC_BITMASK(48 + 4, 48 + 15)

/* TVT */
#define IODA3_TVT_TABLE_ADDR		PPC_BITMASK(0,47)
#define IODA3_TVT_NUM_LEVELS		PPC_BITMASK(48,50)
#define   IODA3_TVE_1_LEVEL	0
#define   IODA3_TVE_2_LEVELS	1
#define   IODA3_TVE_3_LEVELS	2
#define   IODA3_TVE_4_LEVELS	3
#define   IODA3_TVE_5_LEVELS	4
#define IODA3_TVT_TCE_TABLE_SIZE	PPC_BITMASK(51,55)
#define IODA3_TVT_NON_TRANSLATE_50	PPC_BIT(56)
#define IODA3_TVT_IO_PSIZE		PPC_BITMASK(59,63)

/* PESTA */
#define IODA3_PESTA_MMIO_FROZEN		PPC_BIT(0)

/* PESTB */
#define IODA3_PESTB_DMA_STOPPED		PPC_BIT(0)

/* MDT */
/* FIXME: check this field with Eric and add a B, C and D */
#define IODA3_MDT_PE_A			PPC_BITMASK(0,15)
#define IODA3_MDT_PE_B			PPC_BITMASK(16,31)
#define IODA3_MDT_PE_C			PPC_BITMASK(32,47)
#define IODA3_MDT_PE_D			PPC_BITMASK(48,63)

/* MBT */
#define IODA3_MBT0_ENABLE		PPC_BIT(0)
#define IODA3_MBT0_TYPE			PPC_BIT(1)
#define   IODA3_MBT0_TYPE_M32		IODA3_MBT0_TYPE
#define   IODA3_MBT0_TYPE_M64		0
#define IODA3_MBT0_MODE			PPC_BITMASK(2,3)
#define	  IODA3_MBT0_MODE_PE_SEG	0
#define	  IODA3_MBT0_MODE_MDT		1
#define	  IODA3_MBT0_MODE_SINGLE_PE	2
#define IODA3_MBT0_SEG_DIV		PPC_BITMASK(4,5)
#define   IODA3_MBT0_SEG_DIV_MAX	0
#define   IODA3_MBT0_SEG_DIV_128	1
#define   IODA3_MBT0_SEG_DIV_64		2
#define   IODA3_MBT0_SEG_DIV_8		3
#define IODA3_MBT0_MDT_COLUMN		PPC_BITMASK(4,5)
#define IODA3_MBT0_BASE_ADDR		PPC_BITMASK(8,51)

#define IODA3_MBT1_ENABLE		PPC_BIT(0)
#define IODA3_MBT1_MASK			PPC_BITMASK(8,51)
#define IODA3_MBT1_SEG_BASE		PPC_BITMASK(55,63)
#define IODA3_MBT1_SINGLE_PE_NUM	PPC_BITMASK(55,63)

/*
 * IODA2 in-memory tables
 */

/* PEST
 *
 * 2x8 bytes entries, PEST0 and PEST1
 */

#define IODA3_PEST0_MMIO_CAUSE		PPC_BIT(2)
#define IODA3_PEST0_CFG_READ		PPC_BIT(3)
#define IODA3_PEST0_CFG_WRITE		PPC_BIT(4)
#define IODA3_PEST0_TTYPE		PPC_BITMASK(5,7)
#define   PEST_TTYPE_DMA_WRITE		0
#define   PEST_TTYPE_MSI		1
#define   PEST_TTYPE_DMA_READ		2
#define   PEST_TTYPE_DMA_READ_RESP	3
#define   PEST_TTYPE_MMIO_LOAD		4
#define   PEST_TTYPE_MMIO_STORE		5
#define   PEST_TTYPE_OTHER		7
#define IODA3_PEST0_CA_RETURN		PPC_BIT(8)
#define IODA3_PEST0_UR_RETURN		PPC_BIT(9)
#define IODA3_PEST0_PCIE_NONFATAL	PPC_BIT(10)
#define IODA3_PEST0_PCIE_FATAL		PPC_BIT(11)
#define IODA3_PEST0_PARITY_UE		PPC_BIT(13)
#define IODA3_PEST0_PCIE_CORRECTABLE	PPC_BIT(14)
#define IODA3_PEST0_PCIE_INTERRUPT	PPC_BIT(15)
#define IODA3_PEST0_MMIO_XLATE		PPC_BIT(16)
#define IODA3_PEST0_IODA3_ERROR		PPC_BIT(16) /* Same bit as MMIO xlate */
#define IODA3_PEST0_TCE_PAGE_FAULT	PPC_BIT(18)
#define IODA3_PEST0_TCE_ACCESS_FAULT	PPC_BIT(19)
#define IODA3_PEST0_DMA_RESP_TIMEOUT	PPC_BIT(20)
#define IODA3_PEST0_AIB_SIZE_INVALID	PPC_BIT(21)
#define IODA3_PEST0_LEM_BIT		PPC_BITMASK(26,31)
#define IODA3_PEST0_RID			PPC_BITMASK(32,47)
#define IODA3_PEST0_MSI_DATA		PPC_BITMASK(48,63)

#define IODA3_PEST1_FAIL_ADDR		PPC_BITMASK(3,63)


#endif /* __PHB4_REGS_H */
