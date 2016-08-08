/*
 * allgroCANProtocol.h
 *
 *  Created on: Nov 15, 2012
 *      Author: seungsu
 */

#ifndef ALLGROCANPROTOCOL_H_
#define ALLGROCANPROTOCOL_H_


#define ID_CMD_SET_SYSTEM_ON 0x01
#define ID_CMD_SET_SYSTEM_OFF 0x02
#define ID_CMD_SET_PERIOD 0x03
#define ID_CMD_SET_MODE_JOINT 0x04
#define ID_CMD_SET_MODE_TASK 0x05
#define ID_CMD_SET_TORQUE_1 0x06
#define ID_CMD_SET_TORQUE_2 0x07
#define ID_CMD_SET_TORQUE_3 0x08
#define ID_CMD_SET_TORQUE_4 0x09
#define ID_CMD_SET_POSITION_1 0x0a
#define ID_CMD_QUERY_STATE_DATA 0x0e
#define ID_CMD_QUERY_CONTROL_DATA 0x0f

#define ID_COMMON 0x01
#define ID_DEVICE_MAIN 0x02
#define ID_DEVICE_SUB_01 0x03
#define ID_DEVICE_SUB_02 0x04
#define ID_DEVICE_SUB_03 0x05
#define ID_DEVICE_SUB_04 0x06

enum eJointName
{
	eJOINTNAME_INDEX_0,
	eJOINTNAME_INDEX_1,
	eJOINTNAME_INDEX_2,
	eJOINTNAME_INDEX_3,
	eJOINTNAME_MIDDLE_0,
	eJOINTNAME_MIDDLE_1,
	eJOINTNAME_MIDDLE_2,
	eJOINTNAME_MIDDLE_3,
	eJOINTNAME_PINKY_0,
	eJOINTNAME_PINKY_1,
	eJOINTNAME_PINKY_2,
	eJOINTNAME_PINKY_3,
	eJOINTNAME_THUMB_0,
	eJOINTNAME_THUMB_1,
	eJOINTNAME_THUMB_2,
	eJOINTNAME_THUMB_3,
	DOF_JOINTS
};

#endif /* ALLGROCANPROTOCOL_H_ */