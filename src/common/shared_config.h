//config.h - main configuration file
#ifndef _SHARED_CONFIG_H
#define _SHARED_CONFIG_H

#include "stdint.h"

// EEPROM firmware update flag
#define FW_UPDATE_ENABLE 0xAA
#define FW_UPDATE_DISABLE 0x00

#pragma pack(push)
#pragma pack(1)
typedef struct {
    uint8_t fw_update_flag;
    uint8_t reserved1;
    uint8_t reserved2;
    uint8_t reserved3;
    uint8_t reserved4;
    uint8_t reserved5;
    uint8_t reserved6;
    uint8_t reserved7;
    uint8_t reserved8;
    uint8_t reserved9;
    uint8_t reserved10;
    uint8_t reserved11;
    uint8_t reserved12;
    uint8_t reserved13;
    uint8_t reserved14;
    uint8_t reserved15;
} data_exchange_t;

#pragma pack(pop)

#endif /* _SHARED_CONFIG_H */
