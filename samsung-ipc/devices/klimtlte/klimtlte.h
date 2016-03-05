/*
 * This file is part of libsamsung-ipc.
 *
 * Copyright (C) 2013-2014 Paul Kocialkowski <contact@paulk.fr>
 *
 * libsamsung-ipc is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * libsamsung-ipc is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with libsamsung-ipc.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __KLIMTLTE_H__
#define __KLIMTLTE_H__

#define KLIMTLTE_MODEM_IMAGE_SIZE                                  0x3000000
#define KLIMTLTE_PSI_OFFSET                                        0x1000
#define KLIMTLTE_PSI_SIZE                                          0x18000
#define KLIMTLTE_EBL_OFFSET                                        0x19000
#define KLIMTLTE_EBL_SIZE                                          0x1C000
#define KLIMTLTE_SEC_START_OFFSET                                  0x1635900
#define KLIMTLTE_SEC_START_SIZE                                    0x800
#define KLIMTLTE_FIRMWARE_OFFSET                                   0x35000
#define KLIMTLTE_FIRMWARE_SIZE                                     0xDE5C5C
#define KLIMTLTE_NV_DATA_SIZE                                      0x110000
#define KLIMTLTE_SEC_LTE_START_OFFSET                              0x1A36100
#define KLIMTLTE_SEC_LTE_START_SIZE                                0x800
#define KLIMTLTE_LTE_OFFSET                                        0x1636100
#define KLIMTLTE_LTE_SIZE                                          0x290220

#define KLIMTLTE_MODEM_IMAGE_DEVICE                                "/dev/block/mmcblk0p13"

struct klimtlte_transport_data {
    int fd;
};

extern struct ipc_client_ops klimtlte_fmt_ops;
extern struct ipc_client_ops klimtlte_rfs_ops;
extern struct ipc_client_handlers klimtlte_handlers;
extern struct ipc_client_gprs_specs klimtlte_gprs_specs;
extern struct ipc_client_nv_data_specs klimtlte_nv_data_specs;

#endif

// vim:ts=4:sw=4:expandtab
