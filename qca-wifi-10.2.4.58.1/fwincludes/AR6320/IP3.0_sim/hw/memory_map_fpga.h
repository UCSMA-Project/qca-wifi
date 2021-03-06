#ifndef _MEMORY_MAP_VRH_
#define _MEMORY_MAP_VRH_
#define KBYTE 1024
#define MBYTE (KBYTE*KBYTE)

/*wlan cpu*/ 
#define WLAN_CPU_DRAM_BLOCK_SIZE  (32*KBYTE)
#define WLAN_CPU_DRAM_BLOCK_NUM   10
#define WLAN_CPU_DRAM_BASE        0x400000
#define WLAN_CPU_DRAM_SIZE        (WLAN_CPU_DRAM_BLOCK_SIZE*WLAN_CPU_DRAM_BLOCK_NUM)
#define WLAN_CPU_IRAM_BLOCK_SIZE  (32*KBYTE)
#define WLAN_CPU_IRAM_BLOCK_NUM   4
#define WLAN_CPU_IRAM_BASE        0x980000
#define WLAN_CPU_IRAM_SIZE        (WLAN_CPU_IRAM_BLOCK_SIZE*WLAN_CPU_IRAM_BLOCK_NUM)
#define WLAN_CPU_IROM_BLOCK0_SIZE (64*KBYTE)
#define WLAN_CPU_IROM_BLOCK0_NUM  1 
#define WLAN_CPU_IROM_BLOCK1_SIZE (128*KBYTE)
#define WLAN_CPU_IROM_BLOCK1_NUM  3 
#define WLAN_CPU_IROM_BASE        0x910000
#define WLAN_CPU_IROM_SIZE        (WLAN_CPU_IROM_BLOCK0_SIZE*WLAN_CPU_IROM_BLOCK0_NUM+WLAN_CPU_IROM_BLOCK1_SIZE*WLAN_CPU_IROM_BLOCK1_NUM)
#define WLAN_CPU_ROM_SIZE         WLAN_CPU_IROM_SIZE
#define WLAN_CPU_DPORT_BASE       WLAN_CPU_DRAM_BASE 
#define WLAN_CPU_IPORT_BASE       WLAN_CPU_IROM_BASE

/*bt cpu*/

/*axi bus matrix*/

/*wifi ahb map*/
#define WIFI_CPU_PIF_IN_IRAM_BASE  WLAN_CPU_IRAM_BASE
#define WIFI_CPU_PIF_IN_IRAM_SIZE  WLAN_CPU_IRAM_SIZE
#define WIFI_CPU_PIF_IN_IROM_BASE  WLAN_CPU_IROM_BASE
#define WIFI_CPU_PIF_IN_IROM_SIZE  WLAN_CPU_IROM_SIZE
#define WIFI_CPU_PIF_IN_DRAM0_BASE WLAN_CPU_DRAM_BASE
#define WIFI_CPU_PIF_IN_DRAM0_SIZE (WLAN_CPU_DRAM_BLOCK_SIZE*8)
#define WIFI_CPU_PIF_IN_DRAM1_BASE (WIFI_CPU_PIF_IN_DRAM0_BASE+WIFI_CPU_PIF_IN_DRAM0_SIZE)
#define WIFI_CPU_PIF_IN_DRAM1_SIZE (WLAN_CPU_DRAM_BLOCK_SIZE*2)
/*#define WIFI_AHB_BRIDGE_2_BT_BASE  0x1000000*/
/*#define WIFI_AHB_BRIDGE_2_BT_SIZE  0x1000000*/
/*#define WIFI_USB_BASE  0x84000*/
/*#define WIFI_USB_SIZE  0x4000*/
/*#define WIFI_PCIE_BASE 0x100000*/
/*#define WIFI_PCIE_SIZE 0x4000*/

#define WAITI 0x7100
#endif
