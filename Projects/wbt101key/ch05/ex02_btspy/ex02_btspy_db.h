/*
 * This file has been automatically generated by the WICED 20719-B1 Designer.
 * Definitions for constants used in the device's GATT database and function
 * prototypes.
 *
 */

// ex02_ble_con_db.h

#ifndef __GATT_DATABASE_H__
#define __GATT_DATABASE_H__

#define __UUID_CAPSENSE                       0x31, 0x01, 0x9b, 0x5f, 0x80, 0x00, 0x00, 0x80, 0x00, 0x10, 0x00, 0x00, 0xb5, 0xca, 0x03, 0x00
#define __UUID_CAPSENSE_BUTTONS               0x31, 0x01, 0x9b, 0x5f, 0x80, 0x00, 0x00, 0x80, 0x00, 0x10, 0x00, 0x00, 0xa3, 0xca, 0x03, 0x00

// ***** Primary Service 'Generic Attribute'
#define HDLS_GENERIC_ATTRIBUTE                0x0001

// ***** Primary Service 'Generic Access'
#define HDLS_GENERIC_ACCESS                   0x0014
// ----- Characteristic 'Device Name'
#define HDLC_GENERIC_ACCESS_DEVICE_NAME       0x0015
#define HDLC_GENERIC_ACCESS_DEVICE_NAME_VALUE 0x0016
// ----- Characteristic 'Appearance'
#define HDLC_GENERIC_ACCESS_APPEARANCE        0x0017
#define HDLC_GENERIC_ACCESS_APPEARANCE_VALUE  0x0018

// ***** Primary Service 'CapSense'
#define HDLS_CAPSENSE                         0x0028
// ----- Characteristic 'Buttons'
#define HDLC_CAPSENSE_BUTTONS                 0x0029
#define HDLC_CAPSENSE_BUTTONS_VALUE           0x002A
// ===== CCCD
#define HDLD_CAPSENSE_BUTTONS_CLIENT_CONFIGURATION 0x002B

// External Lookup Table Entry
typedef struct
{
    uint16_t handle;
    uint16_t max_len;
    uint16_t cur_len;
    uint8_t  *p_data;
} gatt_db_lookup_table;

// External definitions
extern const uint8_t  gatt_database[];
extern const uint16_t gatt_database_len;
extern gatt_db_lookup_table ex01_btspy_gatt_db_ext_attr_tbl[];
extern const uint16_t ex01_btspy_gatt_db_ext_attr_tbl_size;
extern uint8_t BT_LOCAL_NAME[];
extern const uint16_t BT_LOCAL_NAME_CAPACITY;

#endif /* __GATT_DATABASE_H__ */
