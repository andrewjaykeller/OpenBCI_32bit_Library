//
//  Definitions_32.h
//
//
//  Created by Conor Russomanno, Luke Travis, and Joel Murphy. Summer 2013.
//	Modified by Joel Murphy, Summer 2014
//	Joel Added Daisy Functionality Fall 2014
//

#ifndef _____OpenBCI_32bit_Library_Definitions_h
#define _____OpenBCI_32bit_Library_Definitions_h

// Baud rates
#define OPENBCI_BAUD_RATE 115200
#define OPENBCI_BAUD_RATE_BLE 9600
#define OPENBCI_BAUD_RATE_MIN_NO_AVG 200000

// File transmissions
#define OPENBCI_BOP 'A' // Begining of stream packet

//PIN CONNECTIONS
#define ADS_DRDY 9          // ADS data ready pin
#define ADS_RST	4           // ADS reset pin
#define BOARD_ADS	8         // ADS chip select
#define DAISY_ADS	3         // ADS Daisy chip select
#define BOTH_ADS 5	        // Slave Select Both ADS chips
#define SD_SS 2  	          // SD card chip select
#define LIS3DH_SS	1         // LIS3DH chip select
#define LIS3DH_DRDY 0	      // LIS3DH data ready pin
// #define WIFI_SS 13          // Wifi Chip Select
#define OPENBCI_PIN_LED 11
#define OPENBCI_PIN_PGC 12
// #define WIFI_RESET 18

#define OPENBCI_PIN_SERIAL1_TX 11
#define OPENBCI_PIN_SERIAL1_RX 12

//ADS1299 SPI Command Definition Byte Assignments
#define _WAKEUP 0x02 // Wake-up from standby mode
#define _STANDBY 0x04 // Enter Standby mode
#define _RESET 0x06 // Reset the device registers to default
#define _START 0x08 // Start and restart (synchronize) conversions
#define _STOP 0x0A // Stop conversion
#define _RDATAC 0x10 // Enable Read Data Continuous mode (default mode at power-up)
#define _SDATAC 0x11 // Stop Read Data Continuous mode
#define _RDATA 0x12 // Read data by command supports multiple read back

//ASD1299 Register Addresses
#define ADS_ID	0x3E	// product ID for ADS1299
#define ID_REG  0x00	// this register contains ADS_ID
#define CONFIG1 0x01
#define CONFIG2 0x02
#define CONFIG3 0x03
#define LOFF 0x04
#define CH1SET 0x05
#define CH2SET 0x06
#define CH3SET 0x07
#define CH4SET 0x08
#define CH5SET 0x09
#define CH6SET 0x0A
#define CH7SET 0x0B
#define CH8SET 0x0C
#define BIAS_SENSP 0x0D
#define BIAS_SENSN 0x0E
#define LOFF_SENSP 0x0F
#define LOFF_SENSN 0x10
#define LOFF_FLIP 0x11
#define LOFF_STATP 0x12
#define LOFF_STATN 0x13
#define GPIO 0x14
#define MISC1 0x15
#define MISC2 0x16
#define CONFIG4 0x17

#define OUTPUT_NOTHING (0)  // quiet
#define OUTPUT_8_CHAN (1)   // not using Daisy module
#define OUTPUT_16_CHAN (2)  // using Daisy module
#define ON_BOARD	(8)			  // slave address for on board ADS
#define ON_DAISY	(3)				// slave address for daisy ADS
// CHANNEL SETTINGS
#define POWER_DOWN      (0)
#define GAIN_SET        (1)
#define INPUT_TYPE_SET  (2)
#define BIAS_SET        (3)
#define SRB2_SET        (4)
#define SRB1_SET        (5)
#define YES      	(0x01)
#define NO      	(0x00)

//gainCode choices
#define ADS_GAIN01 (0b00000000)	// 0x00
#define ADS_GAIN02 (0b00010000)	// 0x10
#define ADS_GAIN04 (0b00100000)	// 0x20
#define ADS_GAIN06 (0b00110000)	// 0x30
#define ADS_GAIN08 (0b01000000)	// 0x40
#define ADS_GAIN12 (0b01010000)	// 0x50
#define ADS_GAIN24 (0b01100000)	// 0x60

//inputType choices
#define ADSINPUT_NORMAL     (0b00000000)
#define ADSINPUT_SHORTED    (0b00000001)
#define ADSINPUT_BIAS_MEAS  (0b00000010)
#define ADSINPUT_MVDD       (0b00000011)
#define ADSINPUT_TEMP       (0b00000100)
#define ADSINPUT_TESTSIG    (0b00000101)
#define ADSINPUT_BIAS_DRP   (0b00000110)
#define ADSINPUT_BIAL_DRN   (0b00000111)

//test signal choices...ADS1299 datasheet page 41
#define ADSTESTSIG_AMP_1X (0b00000000)
#define ADSTESTSIG_AMP_2X (0b00000100)
#define ADSTESTSIG_PULSE_SLOW (0b00000000)
#define ADSTESTSIG_PULSE_FAST (0b00000001)
#define ADSTESTSIG_DCSIG (0b00000011)
#define ADSTESTSIG_NOCHANGE (0b11111111)

#define ADS1299_CONFIG1_DAISY (0b10110000)
#define ADS1299_CONFIG1_DAISY_NOT (0b10010000)

//Lead-off signal choices
#define LOFF_MAG_6NA        (0b00000000)
#define LOFF_MAG_24NA       (0b00000100)
#define LOFF_MAG_6UA        (0b00001000)
#define LOFF_MAG_24UA       (0b00001100)
#define LOFF_FREQ_DC        (0b00000000)
#define LOFF_FREQ_7p8HZ     (0b00000001)
#define LOFF_FREQ_31p2HZ    (0b00000010)
#define LOFF_FREQ_FS_4      (0b00000011)
#define PCHAN (0)
#define NCHAN (1)
#define OFF (0)
#define ON (1)

// used for channel settings
#define ACTIVATE_SHORTED (2)
#define ACTIVATE (1)
#define DEACTIVATE (0)

#define PCKT_START 0xA0	// prefix for data packet error checking
#define PCKT_END 0xC0	// postfix for data packet error checking

// daisy module
#define CLK_EN	5

//LIS3DH
#define READ_REG		0x80
#define READ_MULTI		0x40

#define STATUS_REG_AUX	0x07	// axis over-run and data available flags (see 0x27)
#define OUT_ADC1_L		0x08	//
#define OUT_ADC1_H		0x09	//
#define OUT_ADC2_L		0x0A	//	ADC input values (check DS)
#define OUT_ADC2_H		0x0B	//
#define OUT_ADC3_L		0x0C	//
#define OUT_ADC3_H		0x0D	//
#define INT_COUNTER_REG	0x0E	// ??
#define WHO_AM_I		0x0F	// DEVICE ID 0x33
#define TMP_CFG_REG		0x1F	// ADC enable (0x80) Temperature sensor enable (0x40)
#define CTRL_REG1		0x20	// Data Rate Power Mode X enable Y enable Z enable (on >0x10)
#define CTRL_REG2		0x21	// High Pass Filter Stuph
#define CTRL_REG3		0x22	// INT1 select register
#define CTRL_REG4		0x23	// Block update timing endian G-force resolution self test SPI pins
#define CTRL_REG5		0x24	// reboot FIFO enable latch 4D detection
#define CTRL_REG6		0x25	// ??
#define REFERENCE		0x26	// interrupt reference
#define STATUS_REG2		0x27	// axis overrun and availale flags (see 0x07)
#define OUT_X_L			0x28	//
#define OUT_X_H			0x29	//
#define OUT_Y_L			0x2A	//	tripple axis values (see 0x0A)
#define OUT_Y_H			0x2B	//
#define OUT_Z_L			0x2C	//
#define OUT_Z_H			0x2D	//
#define FIFO_CTRL_REG	0x2E	// FIFO mode trigger output pin select (?)
#define FIFO_SRC_REG	0x2F	// ??
#define INT1_CFG		0x30	// 6 degree control register
#define INT1_SOURCE		0x31	// axis threshold interrupt control
#define INT1_THS		0x32	// INT1 threshold
#define INT1_DURATION	0x33	// INT1 duration
#define CLICK_CFG		0x38	// click on axis
#define CLICK_SRC		0x39	// other click
#define CLICK_THS		0x3A	// more click
#define TIME_LIMIT		0x3B	// click related
#define TIME_LATENCY	0x3C	// and so on
#define TIME_WINDOW		0x3D	// contined click

#define SCALE_2G		0x00  //(b00000000)	// +/- 2G sensitivity
#define SCALE_4G		0x10  //(b00010000)	// +/- 4G sensitivity
#define SCALE_8G		0x20  //(b00100000)	// +/- 8G sensitivity
#define SCALE_16G		0x30  //(b00110000)	// +/- 16G sensitivity
#define RATE_1HZ		0x10  //(b00010000)	// 1Hz sample rate in normal or low-power mode
#define RATE_10HZ		0x20  //(b00100000)	// 10Hz sample rate in normal or low-power mode
#define RATE_25HZ		0x30  //(b00110000)	// 25Hz sample rate in normal or low-power mode
#define RATE_50HZ		0x40  //(b01000000)	// 50Hz sample rate in normal or low-power mode
#define RATE_100HZ		0x50  //(b01010000)	// 100Hz sample rate in normal or low-power mode
#define RATE_200HZ		0x60  //(b01100000)	// 200Hz sample rate in normal or low-power mode
#define RATE_400HZ		0x70  //(b01110000)	// 400Hz sample rate in normal or low-power mode
#define RATE_1600HZ_LP	0x80  //(b10000000)	// 1600Hz sample rate in low-power mode
#define RATE_1250HZ_N	0x90  //(b10010000)	// 1250Hz sample rate in normal mode
#define RATE_5000HZ_LP	0x90  //(b10010000)	// 5000Hz sample rate in low-power mode
#define ACCEL_AXIS_X    0x07 // x axis
#define ACCEL_AXIS_Y    0x08 // y axis
#define ACCEL_AXIS_Z    0x09 // z axis

// OPENBCI_COMMANDS
/** Turning channels off */
#define OPENBCI_CHANNEL_OFF_1 '1'
#define OPENBCI_CHANNEL_OFF_2 '2'
#define OPENBCI_CHANNEL_OFF_3 '3'
#define OPENBCI_CHANNEL_OFF_4 '4'
#define OPENBCI_CHANNEL_OFF_5 '5'
#define OPENBCI_CHANNEL_OFF_6 '6'
#define OPENBCI_CHANNEL_OFF_7 '7'
#define OPENBCI_CHANNEL_OFF_8 '8'
#define OPENBCI_CHANNEL_OFF_9 'q'
#define OPENBCI_CHANNEL_OFF_10 'w'
#define OPENBCI_CHANNEL_OFF_11 'e'
#define OPENBCI_CHANNEL_OFF_12 'r'
#define OPENBCI_CHANNEL_OFF_13 't'
#define OPENBCI_CHANNEL_OFF_14 'y'
#define OPENBCI_CHANNEL_OFF_15 'u'
#define OPENBCI_CHANNEL_OFF_16 'i'

/** Turn channels on */
#define OPENBCI_CHANNEL_ON_1 '!'
#define OPENBCI_CHANNEL_ON_2 '@'
#define OPENBCI_CHANNEL_ON_3 '#'
#define OPENBCI_CHANNEL_ON_4 '$'
#define OPENBCI_CHANNEL_ON_5 '%'
#define OPENBCI_CHANNEL_ON_6 '^'
#define OPENBCI_CHANNEL_ON_7 '&'
#define OPENBCI_CHANNEL_ON_8 '*'
#define OPENBCI_CHANNEL_ON_9 'Q'
#define OPENBCI_CHANNEL_ON_10 'W'
#define OPENBCI_CHANNEL_ON_11 'E'
#define OPENBCI_CHANNEL_ON_12 'R'
#define OPENBCI_CHANNEL_ON_13 'T'
#define OPENBCI_CHANNEL_ON_14 'Y'
#define OPENBCI_CHANNEL_ON_15 'U'
#define OPENBCI_CHANNEL_ON_16 'I'

/** Test Signal Control Commands
 * 1x - Voltage will be 1 * (VREFP - VREFN) / 2.4 mV
 * 2x - Voltage will be 2 * (VREFP - VREFN) / 2.4 mV
 */
#define OPENBCI_TEST_SIGNAL_CONNECT_TO_DC            'p'
#define OPENBCI_TEST_SIGNAL_CONNECT_TO_GROUND        '0'
#define OPENBCI_TEST_SIGNAL_CONNECT_TO_PULSE_1X_FAST '='
#define OPENBCI_TEST_SIGNAL_CONNECT_TO_PULSE_1X_SLOW '-'
#define OPENBCI_TEST_SIGNAL_CONNECT_TO_PULSE_2X_FAST ']'
#define OPENBCI_TEST_SIGNAL_CONNECT_TO_PULSE_2X_SLOW '['

/** Channel Setting Commands */
#define OPENBCI_CHANNEL_CMD_ADC_Normal      '0'
#define OPENBCI_CHANNEL_CMD_ADC_Shorted     '1'
#define OPENBCI_CHANNEL_CMD_ADC_BiasDRP     '6'
#define OPENBCI_CHANNEL_CMD_ADC_BiasDRN     '7'
#define OPENBCI_CHANNEL_CMD_ADC_BiasMethod  '2'
#define OPENBCI_CHANNEL_CMD_ADC_MVDD        '3'
#define OPENBCI_CHANNEL_CMD_ADC_Temp        '4'
#define OPENBCI_CHANNEL_CMD_ADC_TestSig     '5'
#define OPENBCI_CHANNEL_CMD_BIAS_INCLUDE    '1'
#define OPENBCI_CHANNEL_CMD_BIAS_REMOVE     '0'
#define OPENBCI_CHANNEL_CMD_CHANNEL_1       '1'
#define OPENBCI_CHANNEL_CMD_CHANNEL_2       '2'
#define OPENBCI_CHANNEL_CMD_CHANNEL_3       '3'
#define OPENBCI_CHANNEL_CMD_CHANNEL_4       '4'
#define OPENBCI_CHANNEL_CMD_CHANNEL_5       '5'
#define OPENBCI_CHANNEL_CMD_CHANNEL_6       '6'
#define OPENBCI_CHANNEL_CMD_CHANNEL_7       '7'
#define OPENBCI_CHANNEL_CMD_CHANNEL_8       '8'
#define OPENBCI_CHANNEL_CMD_CHANNEL_9       'Q'
#define OPENBCI_CHANNEL_CMD_CHANNEL_10      'W'
#define OPENBCI_CHANNEL_CMD_CHANNEL_11      'E'
#define OPENBCI_CHANNEL_CMD_CHANNEL_12      'R'
#define OPENBCI_CHANNEL_CMD_CHANNEL_13      'T'
#define OPENBCI_CHANNEL_CMD_CHANNEL_14      'Y'
#define OPENBCI_CHANNEL_CMD_CHANNEL_15      'U'
#define OPENBCI_CHANNEL_CMD_CHANNEL_16      'I'
#define OPENBCI_CHANNEL_CMD_GAIN_1          '0'
#define OPENBCI_CHANNEL_CMD_GAIN_2          '1'
#define OPENBCI_CHANNEL_CMD_GAIN_4          '2'
#define OPENBCI_CHANNEL_CMD_GAIN_6          '3'
#define OPENBCI_CHANNEL_CMD_GAIN_8          '4'
#define OPENBCI_CHANNEL_CMD_GAIN_12         '5'
#define OPENBCI_CHANNEL_CMD_GAIN_24         '6'
#define OPENBCI_CHANNEL_CMD_LATCH           'X'
#define OPENBCI_CHANNEL_CMD_POWER_OFF       '1'
#define OPENBCI_CHANNEL_CMD_POWER_ON        '0'
#define OPENBCI_CHANNEL_CMD_SET             'x'
#define OPENBCI_CHANNEL_CMD_SRB1_CONNECT    '1'
#define OPENBCI_CHANNEL_CMD_SRB1_DISCONNECT '0'
#define OPENBCI_CHANNEL_CMD_SRB2_CONNECT    '1'
#define OPENBCI_CHANNEL_CMD_SRB2_DISCONNECT '0'

/** Default Channel Settings */
#define OPENBCI_CHANNEL_DEFAULT_ALL_SET 'd'
#define OPENBCI_CHANNEL_DEFAULT_ALL_REPORT 'D'

/** LeadOff Impedance Commands */
#define OPENBCI_CHANNEL_IMPEDANCE_LATCH                'Z'
#define OPENBCI_CHANNEL_IMPEDANCE_SET                  'z'
#define OPENBCI_CHANNEL_IMPEDANCE_TEST_SIGNAL_APPLIED    '1'
#define OPENBCI_CHANNEL_IMPEDANCE_TEST_SIGNAL_APPLIED_NOT '0'

/** SD card Commands */
#define OPENBCI_SD_LOG_FOR_HOUR_1    'G'
#define OPENBCI_SD_LOG_FOR_HOUR_2    'H'
#define OPENBCI_SD_LOG_FOR_HOUR_4    'J'
#define OPENBCI_SD_LOG_FOR_HOUR_12   'K'
#define OPENBCI_SD_LOG_FOR_HOUR_24   'L'
#define OPENBCI_SD_LOG_FOR_MIN_5     'A'
#define OPENBCI_SD_LOG_FOR_MIN_15    'S'
#define OPENBCI_SD_LOG_FOR_MIN_30    'F'
#define OPENBCI_SD_LOG_FOR_SEC_14    'a'
#define OPENBCI_SD_LOG_STOP        'j'

/** Stream Data Commands */
#define OPENBCI_STREAM_START  'b'
#define OPENBCI_STREAM_STOP   's'

/** Miscellaneous */
#define OPENBCI_MISC_QUERY_REGISTER_SETTINGS '?'
#define OPENBCI_MISC_SOFT_RESET              'v'

/** 16 Channel Commands */
#define OPENBCI_CHANNEL_MAX_NUMBER_8    'c'
#define OPENBCI_CHANNEL_MAX_NUMBER_16   'C'

#define OPENBCI_BOARD_MODE_SET '/'

#define OPENBCI_GET_VERSION 'V'

/** Set sample rate */
#define OPENBCI_SAMPLE_RATE_SET '~'

/** Insert marker into the stream */
#define OPENBCI_INSERT_MARKER '`'

/** Sync Clocks */
#define OPENBCI_TIME_SET '<'
#define OPENBCI_TIME_STOP '>'

/** Wifi Stuff */
#define OPENBCI_WIFI_ATTACH '{'
#define OPENBCI_WIFI_REMOVE '}'
#define OPENBCI_WIFI_STATUS ':'
#define OPENBCI_WIFI_RESET ';'

/** Possible number of channels */
#define OPENBCI_NUMBER_OF_CHANNELS_DAISY 16
#define OPENBCI_NUMBER_OF_CHANNELS_DEFAULT 8

/** Helpful numbers */
#define OPENBCI_NUMBER_OF_BOARD_SETTINGS 1
#define OPENBCI_NUMBER_OF_CHANNEL_SETTINGS 6
#define OPENBCI_NUMBER_OF_LEAD_OFF_SETTINGS 2

/** Possible Sample Rates*/
#define OPENBCI_SAMPLE_RATE_125 125
#define OPENBCI_SAMPLE_RATE_250 250

/** Time out for multi char commands **/
#define MULTI_CHAR_COMMAND_TIMEOUT_MS 1000

/** Packet Size */
#define OPENBCI_PACKET_SIZE 33

#define OPENBCI_NUMBER_BYTES_PER_ADS_SAMPLE 24
#define OPENBCI_NUMBER_CHANNELS_PER_ADS_SAMPLE 24

/** Impedance Calculation Variables */
#define OPENBCI_LEAD_OFF_DRIVE_AMPS 0.000000006
#define OPENBCI_LEAD_OFF_FREQUENCY_HZ 31

#define OPENBCI_TIME_OUT_MS_1 1
#define OPENBCI_TIME_OUT_MS_3 3

#define OPENBCI_NUMBER_OF_BYTES_SETTINGS_CHANNEL 9
#define OPENBCI_NUMBER_OF_BYTES_SETTINGS_LEAD_OFF 5

#define OPENBCI_NUMBER_OF_BYTES_AUX 6

#define OPENBCI_FIRMWARE_VERSION_V1 1
#define OPENBCI_FIRMWARE_VERSION_V2 1

#define OPENBCI_ADS_BYTES_PER_CHAN 3
#define OPENBCI_ADS_CHANS_PER_BOARD 8

/** BLE Packet Information */
#define BLE_BYTES_PER_PACKET 20
#define BLE_BYTES_PER_SAMPLE 6
#define BLE_SAMPLES_PER_PACKET 3
#define BLE_TOTAL_DATA_BYTES 18
#define BLE_RING_BUFFER_SIZE 50

/** Response Codes */
#define RESP_SUCCESS_CHANNEL_OFF_1 1
#define RESP_SUCCESS_CHANNEL_OFF_2 2
#define RESP_SUCCESS_CHANNEL_OFF_3 3
#define RESP_SUCCESS_CHANNEL_OFF_4 4
#define RESP_SUCCESS_CHANNEL_OFF_5 5
#define RESP_SUCCESS_CHANNEL_OFF_6 6
#define RESP_SUCCESS_CHANNEL_OFF_7 7
#define RESP_SUCCESS_CHANNEL_OFF_8 8
#define RESP_SUCCESS_CHANNEL_OFF_9 9
#define RESP_SUCCESS_CHANNEL_OFF_10 10
#define RESP_SUCCESS_CHANNEL_OFF_11 11
#define RESP_SUCCESS_CHANNEL_OFF_12 12
#define RESP_SUCCESS_CHANNEL_OFF_13 13
#define RESP_SUCCESS_CHANNEL_OFF_14 14
#define RESP_SUCCESS_CHANNEL_OFF_15 15
#define RESP_SUCCESS_CHANNEL_OFF_16 16
#define RESP_SUCCESS_CHANNEL_ON_1 17
#define RESP_SUCCESS_CHANNEL_ON_2 18
#define RESP_SUCCESS_CHANNEL_ON_3 19
#define RESP_SUCCESS_CHANNEL_ON_4 20
#define RESP_SUCCESS_CHANNEL_ON_5 21
#define RESP_SUCCESS_CHANNEL_ON_6 22
#define RESP_SUCCESS_CHANNEL_ON_7 23
#define RESP_SUCCESS_CHANNEL_ON_8 24
#define RESP_SUCCESS_CHANNEL_ON_9 25
#define RESP_SUCCESS_CHANNEL_ON_10 26
#define RESP_SUCCESS_CHANNEL_ON_11 27
#define RESP_SUCCESS_CHANNEL_ON_12 28
#define RESP_SUCCESS_CHANNEL_ON_13 29
#define RESP_SUCCESS_CHANNEL_ON_14 30
#define RESP_SUCCESS_CHANNEL_ON_15 31
#define RESP_SUCCESS_CHANNEL_ON_16 32
#define RESP_FAILURE_CHANNEL_OFF_1 33
#define RESP_FAILURE_CHANNEL_OFF_2 34
#define RESP_FAILURE_CHANNEL_OFF_3 35
#define RESP_FAILURE_CHANNEL_OFF_4 36
#define RESP_FAILURE_CHANNEL_OFF_5 37
#define RESP_FAILURE_CHANNEL_OFF_6 38
#define RESP_FAILURE_CHANNEL_OFF_7 39
#define RESP_FAILURE_CHANNEL_OFF_8 40
#define RESP_FAILURE_CHANNEL_OFF_9 41
#define RESP_FAILURE_CHANNEL_OFF_10 42
#define RESP_FAILURE_CHANNEL_OFF_11 43
#define RESP_FAILURE_CHANNEL_OFF_12 44
#define RESP_FAILURE_CHANNEL_OFF_13 45
#define RESP_FAILURE_CHANNEL_OFF_14 46
#define RESP_FAILURE_CHANNEL_OFF_15 47
#define RESP_FAILURE_CHANNEL_OFF_16 48
#define RESP_FAILURE_CHANNEL_ON_1 49
#define RESP_FAILURE_CHANNEL_ON_2 50
#define RESP_FAILURE_CHANNEL_ON_3 51
#define RESP_FAILURE_CHANNEL_ON_4 52
#define RESP_FAILURE_CHANNEL_ON_5 53
#define RESP_FAILURE_CHANNEL_ON_6 54
#define RESP_FAILURE_CHANNEL_ON_7 55
#define RESP_FAILURE_CHANNEL_ON_8 56
#define RESP_FAILURE_CHANNEL_ON_9 57
#define RESP_FAILURE_CHANNEL_ON_10 58
#define RESP_FAILURE_CHANNEL_ON_11 59
#define RESP_FAILURE_CHANNEL_ON_12 60
#define RESP_FAILURE_CHANNEL_ON_13 61
#define RESP_FAILURE_CHANNEL_ON_14 62
#define RESP_FAILURE_CHANNEL_ON_15 63
#define RESP_FAILURE_CHANNEL_ON_16 64
#define RESP_SUCCESS_TEST_SIGNAL_CONNECT_TO_GND 65
#define RESP_SUCCESS_TEST_SIGNAL_1X_AMP_SLOW 66
#define RESP_SUCCESS_TEST_SIGNAL_1X_AMP_FAST 67
#define RESP_SUCCESS_TEST_SIGNAL_DC_SIGNAL 68
#define RESP_SUCCESS_TEST_SIGNAL_2X_AMP_SLOW 69
#define RESP_SUCCESS_TEST_SIGNAL_2X_AMP_FAST 70
#define RESP_FAILURE_TEST_SIGNAL_CONNECT_TO_GND 71
#define RESP_FAILURE_TEST_SIGNAL_1X_AMP_SLOW 72
#define RESP_FAILURE_TEST_SIGNAL_1X_AMP_FAST 73
#define RESP_FAILURE_TEST_SIGNAL_DC_SIGNAL 74
#define RESP_FAILURE_TEST_SIGNAL_2X_AMP_SLOW 75
#define RESP_FAILURE_TEST_SIGNAL_2X_AMP_FAST 76
#define RESP_SUCCESS_CHANNEL_1_SET 77
#define RESP_SUCCESS_CHANNEL_2_SET 78
#define RESP_SUCCESS_CHANNEL_3_SET 79
#define RESP_SUCCESS_CHANNEL_4_SET 80
#define RESP_SUCCESS_CHANNEL_5_SET 81
#define RESP_SUCCESS_CHANNEL_6_SET 82
#define RESP_SUCCESS_CHANNEL_7_SET 83
#define RESP_SUCCESS_CHANNEL_8_SET 84
#define RESP_SUCCESS_CHANNEL_9_SET 85
#define RESP_SUCCESS_CHANNEL_10_SET 86
#define RESP_SUCCESS_CHANNEL_11_SET 87
#define RESP_SUCCESS_CHANNEL_12_SET 88
#define RESP_SUCCESS_CHANNEL_13_SET 89
#define RESP_SUCCESS_CHANNEL_14_SET 90
#define RESP_SUCCESS_CHANNEL_15_SET 91
#define RESP_SUCCESS_CHANNEL_16_SET 92
#define RESP_FAILURE_CHANNEL_1_SET 93
#define RESP_FAILURE_CHANNEL_2_SET 94
#define RESP_FAILURE_CHANNEL_3_SET 95
#define RESP_FAILURE_CHANNEL_4_SET 96
#define RESP_FAILURE_CHANNEL_5_SET 97
#define RESP_FAILURE_CHANNEL_6_SET 98
#define RESP_FAILURE_CHANNEL_7_SET 99
#define RESP_FAILURE_CHANNEL_8_SET 100
#define RESP_FAILURE_CHANNEL_9_SET 101
#define RESP_FAILURE_CHANNEL_10_SET 102
#define RESP_FAILURE_CHANNEL_11_SET 103
#define RESP_FAILURE_CHANNEL_12_SET 104
#define RESP_FAILURE_CHANNEL_13_SET 105
#define RESP_FAILURE_CHANNEL_14_SET 106
#define RESP_FAILURE_CHANNEL_15_SET 107
#define RESP_FAILURE_CHANNEL_16_SET 108
#define RESP_SUCCESS_CHANNELS_SET_TO_DEFAULT 109
#define RESP_FAILURE_CHANNELS_SET_TO_DEFAULT 110
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_P_1 111
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_P_2 112
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_P_3 113
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_P_4 114
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_P_5 115
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_P_6 116
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_P_7 117
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_P_8 118
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_P_9 119
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_P_10 120
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_P_11 121
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_P_12 122
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_P_13 123
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_P_14 124
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_P_15 125
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_P_16 126
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_N_1 127
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_N_2 128
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_N_3 129
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_N_4 130
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_N_5 131
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_N_6 132
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_N_7 133
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_N_8 134
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_N_9 135
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_N_10 136
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_N_11 137
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_N_12 138
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_N_13 139
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_N_14 140
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_N_15 141
#define RESP_FAILURE_CHANNEL_OFF_REMOVE_BIAS_N_16 142
#define RESP_FAILURE_LEAD_OFF_P_1 143
#define RESP_FAILURE_LEAD_OFF_P_2 144
#define RESP_FAILURE_LEAD_OFF_P_3 145
#define RESP_FAILURE_LEAD_OFF_P_4 146
#define RESP_FAILURE_LEAD_OFF_P_5 147
#define RESP_FAILURE_LEAD_OFF_P_6 148
#define RESP_FAILURE_LEAD_OFF_P_7 149
#define RESP_FAILURE_LEAD_OFF_P_8 150
#define RESP_FAILURE_LEAD_OFF_P_9 151
#define RESP_FAILURE_LEAD_OFF_P_10 152
#define RESP_FAILURE_LEAD_OFF_P_11 153
#define RESP_FAILURE_LEAD_OFF_P_12 154
#define RESP_FAILURE_LEAD_OFF_P_13 155
#define RESP_FAILURE_LEAD_OFF_P_14 156
#define RESP_FAILURE_LEAD_OFF_P_15 157
#define RESP_FAILURE_LEAD_OFF_P_16 158
#define RESP_FAILURE_LEAD_OFF_N_1 159
#define RESP_FAILURE_LEAD_OFF_N_2 160
#define RESP_FAILURE_LEAD_OFF_N_3 161
#define RESP_FAILURE_LEAD_OFF_N_4 162
#define RESP_FAILURE_LEAD_OFF_N_5 163
#define RESP_FAILURE_LEAD_OFF_N_6 164
#define RESP_FAILURE_LEAD_OFF_N_7 165
#define RESP_FAILURE_LEAD_OFF_N_8 166
#define RESP_FAILURE_LEAD_OFF_N_9 167
#define RESP_FAILURE_LEAD_OFF_N_10 168
#define RESP_FAILURE_LEAD_OFF_N_11 169
#define RESP_FAILURE_LEAD_OFF_N_12 170
#define RESP_FAILURE_LEAD_OFF_N_13 171
#define RESP_FAILURE_LEAD_OFF_N_14 172
#define RESP_FAILURE_LEAD_OFF_N_15 173
#define RESP_FAILURE_LEAD_OFF_N_16 174
#define RESP_SUCCESS_LEAD_OFF_1 175
#define RESP_SUCCESS_LEAD_OFF_2 176
#define RESP_SUCCESS_LEAD_OFF_3 177
#define RESP_SUCCESS_LEAD_OFF_4 178
#define RESP_SUCCESS_LEAD_OFF_5 179
#define RESP_SUCCESS_LEAD_OFF_6 180
#define RESP_SUCCESS_LEAD_OFF_7 181
#define RESP_SUCCESS_LEAD_OFF_8 182
#define RESP_SUCCESS_LEAD_OFF_9 183
#define RESP_SUCCESS_LEAD_OFF_10 184
#define RESP_SUCCESS_LEAD_OFF_11 185
#define RESP_SUCCESS_LEAD_OFF_12 186
#define RESP_SUCCESS_LEAD_OFF_13 187
#define RESP_SUCCESS_LEAD_OFF_14 188
#define RESP_SUCCESS_LEAD_OFF_15 189
#define RESP_SUCCESS_LEAD_OFF_16 190
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_P_1 191
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_P_2 192
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_P_3 193
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_P_4 194
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_P_5 195
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_P_6 196
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_P_7 197
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_P_8 198
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_P_9 199
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_P_10 200
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_P_11 201
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_P_12 202
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_P_13 203
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_P_14 204
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_P_15 205
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_P_16 206
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_N_1 207
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_N_2 208
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_N_3 209
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_N_4 210
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_N_5 211
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_N_6 212
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_N_7 213
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_N_8 214
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_N_9 215
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_N_10 216
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_N_11 217
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_N_12 218
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_N_13 219
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_N_14 220
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_N_15 221
#define RESP_FAILURE_CHANNEL_ON_REMOVE_BIAS_N_16 222
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_P_1 223
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_P_2 224
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_P_3 225
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_P_4 226
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_P_5 227
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_P_6 228
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_P_7 229
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_P_8 230
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_P_9 231
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_P_10 232
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_P_11 233
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_P_12 234
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_P_13 235
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_P_14 236
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_P_15 237
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_P_16 238
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_N_1 239
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_N_2 240
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_N_3 241
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_N_4 242
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_N_5 243
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_N_6 244
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_N_7 245
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_N_8 246
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_N_9 247
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_N_10 248
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_N_11 249
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_N_12 250
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_N_13 251
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_N_14 252
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_N_15 253
#define RESP_FAILURE_CHANNEL_ON_ADD_BIAS_N_16 254
#define RESP_FAILURE_CHANNEL_ON_SRB1_1 255
#define RESP_FAILURE_CHANNEL_ON_SRB1_2 256
#define RESP_FAILURE_CHANNEL_ON_SRB1_3 257
#define RESP_FAILURE_CHANNEL_ON_SRB1_4 258
#define RESP_FAILURE_CHANNEL_ON_SRB1_5 259
#define RESP_FAILURE_CHANNEL_ON_SRB1_6 260
#define RESP_FAILURE_CHANNEL_ON_SRB1_7 261
#define RESP_FAILURE_CHANNEL_ON_SRB1_8 262
#define RESP_FAILURE_CHANNEL_ON_SRB1_9 263
#define RESP_FAILURE_CHANNEL_ON_SRB1_10 264
#define RESP_FAILURE_CHANNEL_ON_SRB1_11 265
#define RESP_FAILURE_CHANNEL_ON_SRB1_12 266
#define RESP_FAILURE_CHANNEL_ON_SRB1_13 267
#define RESP_FAILURE_CHANNEL_ON_SRB1_14 268
#define RESP_FAILURE_CHANNEL_ON_SRB1_15 269
#define RESP_FAILURE_CHANNEL_ON_SRB1_16 270
#define RESP_FAILURE_CHANNEL_SET_1 271
#define RESP_FAILURE_CHANNEL_SET_2 272
#define RESP_FAILURE_CHANNEL_SET_3 273
#define RESP_FAILURE_CHANNEL_SET_4 274
#define RESP_FAILURE_CHANNEL_SET_5 275
#define RESP_FAILURE_CHANNEL_SET_6 276
#define RESP_FAILURE_CHANNEL_SET_7 277
#define RESP_FAILURE_CHANNEL_SET_8 278
#define RESP_FAILURE_CHANNEL_SET_9 279
#define RESP_FAILURE_CHANNEL_SET_10 280
#define RESP_FAILURE_CHANNEL_SET_11 281
#define RESP_FAILURE_CHANNEL_SET_12 282
#define RESP_FAILURE_CHANNEL_SET_13 283
#define RESP_FAILURE_CHANNEL_SET_14 284
#define RESP_FAILURE_CHANNEL_SET_15 285
#define RESP_FAILURE_CHANNEL_SET_16 286
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_P_1 287
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_P_2 288
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_P_3 289
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_P_4 290
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_P_5 291
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_P_6 292
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_P_7 293
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_P_8 294
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_P_9 295
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_P_10 296
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_P_11 297
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_P_12 298
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_P_13 299
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_P_14 300
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_P_15 301
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_P_16 302
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_N_1 303
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_N_2 304
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_N_3 305
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_N_4 306
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_N_5 307
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_N_6 308
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_N_7 309
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_N_8 310
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_N_9 311
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_N_10 312
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_N_11 313
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_N_12 314
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_N_13 315
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_N_14 316
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_N_15 317
#define RESP_FAILURE_CHANNEL_SET_REMOVE_BIAS_N_16 318
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_P_1 319
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_P_2 320
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_P_3 321
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_P_4 322
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_P_5 323
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_P_6 324
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_P_7 325
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_P_8 326
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_P_9 327
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_P_10 328
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_P_11 329
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_P_12 330
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_P_13 331
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_P_14 332
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_P_15 333
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_P_16 334
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_N_1 335
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_N_2 336
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_N_3 337
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_N_4 338
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_N_5 339
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_N_6 340
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_N_7 341
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_N_8 342
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_N_9 343
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_N_10 344
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_N_11 345
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_N_12 346
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_N_13 347
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_N_14 348
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_N_15 349
#define RESP_FAILURE_CHANNEL_SET_ADD_BIAS_N_16 350
#define RESP_FAILURE_CHANNEL_SET_SRB1_1 351
#define RESP_FAILURE_CHANNEL_SET_SRB1_2 352
#define RESP_FAILURE_CHANNEL_SET_SRB1_3 353
#define RESP_FAILURE_CHANNEL_SET_SRB1_4 354
#define RESP_FAILURE_CHANNEL_SET_SRB1_5 355
#define RESP_FAILURE_CHANNEL_SET_SRB1_6 356
#define RESP_FAILURE_CHANNEL_SET_SRB1_7 357
#define RESP_FAILURE_CHANNEL_SET_SRB1_8 358
#define RESP_FAILURE_CHANNEL_SET_SRB1_9 359
#define RESP_FAILURE_CHANNEL_SET_SRB1_10 360
#define RESP_FAILURE_CHANNEL_SET_SRB1_11 361
#define RESP_FAILURE_CHANNEL_SET_SRB1_12 362
#define RESP_FAILURE_CHANNEL_SET_SRB1_13 363
#define RESP_FAILURE_CHANNEL_SET_SRB1_14 364
#define RESP_FAILURE_CHANNEL_SET_SRB1_15 365
#define RESP_FAILURE_CHANNEL_SET_SRB1_16 366
#define RESP_SUCCESS_CHANNEL_SET_1 367
#define RESP_SUCCESS_CHANNEL_SET_2 368
#define RESP_SUCCESS_CHANNEL_SET_3 369
#define RESP_SUCCESS_CHANNEL_SET_4 370
#define RESP_SUCCESS_CHANNEL_SET_5 371
#define RESP_SUCCESS_CHANNEL_SET_6 372
#define RESP_SUCCESS_CHANNEL_SET_7 373
#define RESP_SUCCESS_CHANNEL_SET_8 374
#define RESP_SUCCESS_CHANNEL_SET_9 375
#define RESP_SUCCESS_CHANNEL_SET_10 376
#define RESP_SUCCESS_CHANNEL_SET_11 377
#define RESP_SUCCESS_CHANNEL_SET_12 378
#define RESP_SUCCESS_CHANNEL_SET_13 379
#define RESP_SUCCESS_CHANNEL_SET_14 380
#define RESP_SUCCESS_CHANNEL_SET_15 381
#define RESP_SUCCESS_CHANNEL_SET_16 382
#define RESP_FAILURE_NO_DAISY_PRESENT 383
#define RESP_FAILURE_OPEN_SRB1_SWITCH_ON_BOARD 384
#define RESP_FAILURE_OPEN_SRB1_SWITCH_DAISY 385
#define RESP_FAILURE_CHANGE_CHANNEL_LEAD_OFF_SENSE_P_ON_BOARD 386
#define RESP_FAILURE_CHANGE_CHANNEL_LEAD_OFF_SENSE_P_DAISY 387
#define RESP_FAILURE_CHANGE_CHANNEL_LEAD_OFF_SENSE_N_ON_BOARD 388
#define RESP_FAILURE_CHANGE_CHANNEL_LEAD_OFF_SENSE_N_DAISY 389
#define RESP_SUCCESS_CHANGE_CHANNEL_LEAD_OFF 400
#define RESP_SET_CHANNELS_TO_DEFAULT 401
#define RESP_CONFIGURE_INTERNAL_TEST_SIGNAL_FAILURE 402
#define RESP_CONFIGURE_INTERNAL_TEST_SIGNAL_SUCCESS 403
#define RESP_CHANGE_INPUT_TYPE_FAILURE 404
#define RESP_CHANGE_INPUT_TYPE_SUCCESS 405
#define RESP_CODE_END 406
#endif
