/*
 * This file has been automatically generated by the WICED 20719-B1 Designer.
 * BLE device's GATT database and device configuration.
 *
 */

// ex02_ble_con_db.c

#include "wiced_bt_uuid.h"
#include "wiced_bt_gatt.h"
#include "ex06_ble_num_db.h"

/*************************************************************************************
** GATT server definitions
*************************************************************************************/

const uint8_t gatt_database[] = // Define GATT database
{
    /* Primary Service 'Generic Attribute' */
    PRIMARY_SERVICE_UUID16 (HDLS_GENERIC_ATTRIBUTE, UUID_SERVICE_GATT),

    /* Primary Service 'Generic Access' */
    PRIMARY_SERVICE_UUID16 (HDLS_GENERIC_ACCESS, UUID_SERVICE_GAP),

        /* Characteristic 'Device Name' */
        CHARACTERISTIC_UUID16 (HDLC_GENERIC_ACCESS_DEVICE_NAME, HDLC_GENERIC_ACCESS_DEVICE_NAME_VALUE,
            UUID_CHARACTERISTIC_DEVICE_NAME, LEGATTDB_CHAR_PROP_READ,
            LEGATTDB_PERM_READABLE),

        /* Characteristic 'Appearance' */
        CHARACTERISTIC_UUID16 (HDLC_GENERIC_ACCESS_APPEARANCE, HDLC_GENERIC_ACCESS_APPEARANCE_VALUE,
            UUID_CHARACTERISTIC_APPEARANCE, LEGATTDB_CHAR_PROP_READ,
            LEGATTDB_PERM_READABLE),

    /* Primary Service 'CapSense' */
    PRIMARY_SERVICE_UUID128 (HDLS_CAPSENSE, __UUID_CAPSENSE),

        /* Characteristic 'Buttons' */
        CHARACTERISTIC_UUID128 (HDLC_CAPSENSE_BUTTONS, HDLC_CAPSENSE_BUTTONS_VALUE,
            __UUID_CAPSENSE_BUTTONS, LEGATTDB_CHAR_PROP_READ | LEGATTDB_CHAR_PROP_NOTIFY,
            LEGATTDB_PERM_READABLE | LEGATTDB_PERM_AUTH_READABLE),

            /* Descriptor CCCD */
            CHAR_DESCRIPTOR_UUID16_WRITABLE(HDLD_CAPSENSE_BUTTONS_CLIENT_CONFIGURATION,
                    UUID_DESCRIPTOR_CLIENT_CHARACTERISTIC_CONFIGURATION,
                    LEGATTDB_PERM_READABLE | LEGATTDB_PERM_AUTH_READABLE | LEGATTDB_PERM_WRITE_REQ | LEGATTDB_PERM_AUTH_WRITABLE ),

};

// Length of the GATT database
const uint16_t gatt_database_len = sizeof(gatt_database);
