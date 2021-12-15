//
// Copyright (c) .NET Foundation and Contributors
// See LICENSE file in the project root for full license information.
//

#ifndef NF_NETXDUO_H_
#define NF_NETXDUO_H_

#include <nanoHAL_v2.h>
#include <nxd_dns.h>
#include <nxd_dhcp_client.h>
#include <nxd_bsd.h>

#ifdef STM32L4XX

#include <nx_driver_stm32l4.h>
#define NETXDUO_DRIVER nx_driver_stm32l4

#elif defined(STM32F7XX)

#include <nx_stm32_eth_driver.h>
#define NETXDUO_DRIVER nx_stm32_eth_driver

#else
#error "Missing define with series name"
#endif

#ifdef __cplusplus
extern "C"
{
#endif

    uint32_t NF_NetXDuo_Init(HAL_Configuration_NetworkInterface *networkConfig);

#ifdef __cplusplus
}
#endif

#endif // NF_NETXDUO_H_