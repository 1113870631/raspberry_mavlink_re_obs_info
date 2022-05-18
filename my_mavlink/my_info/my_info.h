/** @file
 *  @brief MAVLink comm protocol generated from my_info.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_MY_INFO_H
#define MAVLINK_MY_INFO_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_MY_INFO.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_HASH
#define MAVLINK_THIS_XML_HASH 4908924429776537265

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{17001, 126, 12, 12, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_MY_INFO

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_my_info.h"

// base include


#undef MAVLINK_THIS_XML_HASH
#define MAVLINK_THIS_XML_HASH 4908924429776537265

#if MAVLINK_THIS_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_my_info}
# define MAVLINK_MESSAGE_NAMES {{ "my_info", 17001 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_MY_INFO_H
