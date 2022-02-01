/**
 * @file ibutton_key_command.h
 * @author Sergey Gavrilov (who.just.the.doctor@gmail.com)
 * @version 1.0
 * @date 2021-11-18
 * 
 * List of misc commands for Dallas and blanks
 */

#pragma once

#define RW1990_1_CMD_WRITE_RECORD_FLAG 0xD1
#define RW1990_1_CMD_READ_RECORD_FLAG 0xB5
#define RW1990_1_CMD_WRITE_ROM 0xD5

#define RW1990_2_CMD_WRITE_RECORD_FLAG 0x1D
#define RW1990_2_CMD_READ_RECORD_FLAG 0x1E
#define RW1990_2_CMD_WRITE_ROM 0xD5

#define TM2004_CMD_READ_STATUS 0xAA
#define TM2004_CMD_READ_MEMORY 0xF0
#define TM2004_CMD_WRITE_ROM 0x3C
#define TM2004_CMD_FINALIZATION 0x35
#define TM2004_ANSWER_READ_MEMORY 0xF5

#define TM01_CMD_WRITE_RECORD_FLAG 0xC1
#define TM01_CMD_WRITE_ROM 0xC5
#define TM01_CMD_SWITCH_TO_CYFRAL 0xCA
#define TM01_CMD_SWITCH_TO_METAKOM 0xCB

#define DS1990_CMD_READ_ROM 0x33