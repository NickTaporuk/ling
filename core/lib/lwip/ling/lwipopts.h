#ifndef LWIPOPTS_H
#define LWIPOPTS_H

#define NO_SYS					1

#define LWIP_IPV6				1

#define LWIP_STATS				1
#define LWIP_STATS_DISPLAY		1

#define	LWIP_RANDOMIZE_INITIAL_LOCAL_PORTS 1

#define CHECKSUM_CHECK_IP		0
#define CHECKSUM_CHECK_UDP		0
#define CHECKSUM_CHECK_TCP		0

#define MEM_ALIGNMENT			4
#define MEM_SIZE				(2*1024*1024)

#define MEMP_MEM_MALLOC			1

#define ETH_PAD_SIZE			2

#define LWIP_RAW				0
#define LWIP_AUTOIP				0
#define LWIP_DHCP				1
#define LWIP_DNS				1
#define LWIP_NETCONN			0
#define LWIP_SOCKET				0

#define TCP_MSS					1460
#define TCP_SND_BUF				8192
#define TCP_OVERSIZE			TCP_MSS

#define LWIP_HAVE_LOOPIF			1
#define LWIP_NETIF_LOOPBACK			1

#define LWIP_NETIF_STATUS_CALLBACK	1

#define LWIP_DEBUG
#define NETIF_DEBUG			LWIP_DBG_OFF
#define ETHARP_DEBUG		LWIP_DBG_OFF
#define ICMP_DEBUG			LWIP_DBG_OFF
#define DHCP_DEBUG			LWIP_DBG_OFF
#define DNS_DEBUG			LWIP_DBG_OFF
#define AUTOIP_DEBUG		LWIP_DBG_OFF

#define UDP_DEBUG			LWIP_DBG_OFF

#define TCP_DEBUG			LWIP_DBG_OFF
#define TCP_INPUT_DEBUG		LWIP_DBG_OFF
#define TCP_OUTPUT_DEBUG	LWIP_DBG_OFF

#define TIMERS_DEBUG		LWIP_DBG_OFF

#endif
