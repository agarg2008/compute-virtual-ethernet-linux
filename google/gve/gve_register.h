/* SPDX-License-Identifier: (GPL-2.0 OR MIT)
 * Google virtual Ethernet (gve) driver
 *
 * Copyright (C) 2015-2018 Google, Inc.
 */

#ifndef _GVE_REGISTER_H_
#define _GVE_REGISTER_H_

/* Fixed Configuration Registers */
#define GVE_REG_BASE 0x0

#define GVE_DEVICE_STATUS_OFFSET 0x0
#define GVE_DEVICE_STATUS (GVE_REG_BASE + GVE_DEVICE_STATUS_OFFSET)
#define GVE_DEVICE_STATUS_RESET_MASK BIT(1)
#define GVE_DEVICE_STATUS_LINK_STATUS_MASK BIT(2)

#define GVE_DRIVER_STATUS_OFFSET 0x4
#define GVE_DRIVER_STATUS (GVE_REG_BASE + GVE_DRIVER_STATUS_OFFSET)

#define GVE_DEVICE_MAX_TX_QUEUES_OFFSET 0x8
#define GVE_DEVICE_MAX_TX_QUEUES \
	(GVE_REG_BASE + GVE_DEVICE_MAX_TX_QUEUES_OFFSET)

#define GVE_DEVICE_MAX_RX_QUEUES_OFFSET 0xC
#define GVE_DEVICE_MAX_RX_QUEUES \
	(GVE_REG_BASE + GVE_DEVICE_MAX_RX_QUEUES_OFFSET)

#define GVE_ADMIN_QUEUE_PFN_OFFSET 0x10
#define GVE_ADMIN_QUEUE_PFN (GVE_REG_BASE + GVE_ADMIN_QUEUE_PFN_OFFSET)

#define GVE_ADMIN_QUEUE_DOORBELL_OFFSET 0x14
#define GVE_ADMIN_QUEUE_DOORBELL \
	(GVE_REG_BASE + GVE_ADMIN_QUEUE_DOORBELL_OFFSET)

#define GVE_ADMIN_QUEUE_EVENT_COUNTER_OFFSET 0x18
#define GVE_ADMIN_QUEUE_EVENT_COUNTER \
	(GVE_REG_BASE + GVE_ADMIN_QUEUE_EVENT_COUNTER_OFFSET)

#define GVE_DRIVER_VERSION_OFFSET 0x1F
#define GVE_DRIVER_VERSION (GVE_REG_BASE + GVE_DRIVER_VERSION_OFFSET)
#endif /* _GVE_REGISTER_H_ */
