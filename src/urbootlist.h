/*
 * Do not edit: automatically generated by the urboot project using
 * https://github.com/stefanrueger/urboot/blob/main/src/mkurbootlist.pl
 *
 * urbootlist.h
 *
 * Definitions for list of template urboot bootloaders
 *
 * Published under GNU General Public License, version 3 (GPL-3.0)
 * Meta-author Stefan Rueger <stefan.rueger@urclocks.com>
 *
 * v 1.2
 * 29.04.2025
 *
 */

#ifndef urbootlist_h
#define urbootlist_h

// Code locations (in words) for urboot parametrisation
enum {
  UL_LDI_BRRLO, UL_LDI_BRRHI, UL_LDI_BRRSHARED, UL_LDI_LINBRRLO, UL_LDI_LINLBT, UL_SWIO_EXTRA12,
  UL_LDI_BVALUE, UL_LDI_WDTO, UL_LDI_STK_INSYNC, UL_LDI_STK_OK, UL_RJMP_APPLICATION,
  UL_JMP_APPLICATION, UL_SBI_DDRTX, UL_CBI_TX, UL_SBI_TX, UL_SBIC_RX_START, UL_SBIC_RX,
  UL_LDI_STARTHHZ, UL_LDI_STARTHI, UL_CPI_STARTHI, UL_CPI_STARTLO,
  UL_CODELOCS_N
};

#define UL_MCU_N            166
#define UL_IOTYPE_N          31
#define UL_BLTYPE_N           3
#define UL_CONFIG_N          14
#define UL_BLN(mcu, io, blt, cfg) ((((mcu)*UL_IOTYPE_N + (io))*UL_BLTYPE_N + (blt))*UL_CONFIG_N + (cfg))

#endif
