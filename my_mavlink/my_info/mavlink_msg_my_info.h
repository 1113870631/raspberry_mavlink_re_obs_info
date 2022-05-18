#pragma once
// MESSAGE my_info PACKING

#define MAVLINK_MSG_ID_my_info 17001


typedef struct __mavlink_my_info_t {
 int16_t x1; /*<  */
 int16_t y1; /*<   */
 int16_t x2; /*<  */
 int16_t y2; /*<  */
 int16_t pos; /*<  */
 int16_t dis; /*<  */
} mavlink_my_info_t;

#define MAVLINK_MSG_ID_my_info_LEN 12
#define MAVLINK_MSG_ID_my_info_MIN_LEN 12
#define MAVLINK_MSG_ID_17001_LEN 12
#define MAVLINK_MSG_ID_17001_MIN_LEN 12

#define MAVLINK_MSG_ID_my_info_CRC 126
#define MAVLINK_MSG_ID_17001_CRC 126



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_my_info { \
    17001, \
    "my_info", \
    6, \
    {  { "x1", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_my_info_t, x1) }, \
         { "y1", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_my_info_t, y1) }, \
         { "x2", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_my_info_t, x2) }, \
         { "y2", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_my_info_t, y2) }, \
         { "pos", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_my_info_t, pos) }, \
         { "dis", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_my_info_t, dis) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_my_info { \
    "my_info", \
    6, \
    {  { "x1", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_my_info_t, x1) }, \
         { "y1", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_my_info_t, y1) }, \
         { "x2", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_my_info_t, x2) }, \
         { "y2", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_my_info_t, y2) }, \
         { "pos", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_my_info_t, pos) }, \
         { "dis", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_my_info_t, dis) }, \
         } \
}
#endif

/**
 * @brief Pack a my_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param x1  
 * @param y1   
 * @param x2  
 * @param y2  
 * @param pos  
 * @param dis  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_my_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t x1, int16_t y1, int16_t x2, int16_t y2, int16_t pos, int16_t dis)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_my_info_LEN];
    _mav_put_int16_t(buf, 0, x1);
    _mav_put_int16_t(buf, 2, y1);
    _mav_put_int16_t(buf, 4, x2);
    _mav_put_int16_t(buf, 6, y2);
    _mav_put_int16_t(buf, 8, pos);
    _mav_put_int16_t(buf, 10, dis);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_my_info_LEN);
#else
    mavlink_my_info_t packet;
    packet.x1 = x1;
    packet.y1 = y1;
    packet.x2 = x2;
    packet.y2 = y2;
    packet.pos = pos;
    packet.dis = dis;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_my_info_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_my_info;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_my_info_MIN_LEN, MAVLINK_MSG_ID_my_info_LEN, MAVLINK_MSG_ID_my_info_CRC);
}

/**
 * @brief Pack a my_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param x1  
 * @param y1   
 * @param x2  
 * @param y2  
 * @param pos  
 * @param dis  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_my_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t x1,int16_t y1,int16_t x2,int16_t y2,int16_t pos,int16_t dis)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_my_info_LEN];
    _mav_put_int16_t(buf, 0, x1);
    _mav_put_int16_t(buf, 2, y1);
    _mav_put_int16_t(buf, 4, x2);
    _mav_put_int16_t(buf, 6, y2);
    _mav_put_int16_t(buf, 8, pos);
    _mav_put_int16_t(buf, 10, dis);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_my_info_LEN);
#else
    mavlink_my_info_t packet;
    packet.x1 = x1;
    packet.y1 = y1;
    packet.x2 = x2;
    packet.y2 = y2;
    packet.pos = pos;
    packet.dis = dis;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_my_info_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_my_info;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_my_info_MIN_LEN, MAVLINK_MSG_ID_my_info_LEN, MAVLINK_MSG_ID_my_info_CRC);
}

/**
 * @brief Encode a my_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param my_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_my_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_my_info_t* my_info)
{
    return mavlink_msg_my_info_pack(system_id, component_id, msg, my_info->x1, my_info->y1, my_info->x2, my_info->y2, my_info->pos, my_info->dis);
}

/**
 * @brief Encode a my_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param my_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_my_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_my_info_t* my_info)
{
    return mavlink_msg_my_info_pack_chan(system_id, component_id, chan, msg, my_info->x1, my_info->y1, my_info->x2, my_info->y2, my_info->pos, my_info->dis);
}

/**
 * @brief Send a my_info message
 * @param chan MAVLink channel to send the message
 *
 * @param x1  
 * @param y1   
 * @param x2  
 * @param y2  
 * @param pos  
 * @param dis  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_my_info_send(mavlink_channel_t chan, int16_t x1, int16_t y1, int16_t x2, int16_t y2, int16_t pos, int16_t dis)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_my_info_LEN];
    _mav_put_int16_t(buf, 0, x1);
    _mav_put_int16_t(buf, 2, y1);
    _mav_put_int16_t(buf, 4, x2);
    _mav_put_int16_t(buf, 6, y2);
    _mav_put_int16_t(buf, 8, pos);
    _mav_put_int16_t(buf, 10, dis);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_my_info, buf, MAVLINK_MSG_ID_my_info_MIN_LEN, MAVLINK_MSG_ID_my_info_LEN, MAVLINK_MSG_ID_my_info_CRC);
#else
    mavlink_my_info_t packet;
    packet.x1 = x1;
    packet.y1 = y1;
    packet.x2 = x2;
    packet.y2 = y2;
    packet.pos = pos;
    packet.dis = dis;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_my_info, (const char *)&packet, MAVLINK_MSG_ID_my_info_MIN_LEN, MAVLINK_MSG_ID_my_info_LEN, MAVLINK_MSG_ID_my_info_CRC);
#endif
}

/**
 * @brief Send a my_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_my_info_send_struct(mavlink_channel_t chan, const mavlink_my_info_t* my_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_my_info_send(chan, my_info->x1, my_info->y1, my_info->x2, my_info->y2, my_info->pos, my_info->dis);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_my_info, (const char *)my_info, MAVLINK_MSG_ID_my_info_MIN_LEN, MAVLINK_MSG_ID_my_info_LEN, MAVLINK_MSG_ID_my_info_CRC);
#endif
}

#if MAVLINK_MSG_ID_my_info_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_my_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t x1, int16_t y1, int16_t x2, int16_t y2, int16_t pos, int16_t dis)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, x1);
    _mav_put_int16_t(buf, 2, y1);
    _mav_put_int16_t(buf, 4, x2);
    _mav_put_int16_t(buf, 6, y2);
    _mav_put_int16_t(buf, 8, pos);
    _mav_put_int16_t(buf, 10, dis);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_my_info, buf, MAVLINK_MSG_ID_my_info_MIN_LEN, MAVLINK_MSG_ID_my_info_LEN, MAVLINK_MSG_ID_my_info_CRC);
#else
    mavlink_my_info_t *packet = (mavlink_my_info_t *)msgbuf;
    packet->x1 = x1;
    packet->y1 = y1;
    packet->x2 = x2;
    packet->y2 = y2;
    packet->pos = pos;
    packet->dis = dis;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_my_info, (const char *)packet, MAVLINK_MSG_ID_my_info_MIN_LEN, MAVLINK_MSG_ID_my_info_LEN, MAVLINK_MSG_ID_my_info_CRC);
#endif
}
#endif

#endif

// MESSAGE my_info UNPACKING


/**
 * @brief Get field x1 from my_info message
 *
 * @return  
 */
static inline int16_t mavlink_msg_my_info_get_x1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field y1 from my_info message
 *
 * @return   
 */
static inline int16_t mavlink_msg_my_info_get_y1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field x2 from my_info message
 *
 * @return  
 */
static inline int16_t mavlink_msg_my_info_get_x2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field y2 from my_info message
 *
 * @return  
 */
static inline int16_t mavlink_msg_my_info_get_y2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field pos from my_info message
 *
 * @return  
 */
static inline int16_t mavlink_msg_my_info_get_pos(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field dis from my_info message
 *
 * @return  
 */
static inline int16_t mavlink_msg_my_info_get_dis(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Decode a my_info message into a struct
 *
 * @param msg The message to decode
 * @param my_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_my_info_decode(const mavlink_message_t* msg, mavlink_my_info_t* my_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    my_info->x1 = mavlink_msg_my_info_get_x1(msg);
    my_info->y1 = mavlink_msg_my_info_get_y1(msg);
    my_info->x2 = mavlink_msg_my_info_get_x2(msg);
    my_info->y2 = mavlink_msg_my_info_get_y2(msg);
    my_info->pos = mavlink_msg_my_info_get_pos(msg);
    my_info->dis = mavlink_msg_my_info_get_dis(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_my_info_LEN? msg->len : MAVLINK_MSG_ID_my_info_LEN;
        memset(my_info, 0, MAVLINK_MSG_ID_my_info_LEN);
    memcpy(my_info, _MAV_PAYLOAD(msg), len);
#endif
}
