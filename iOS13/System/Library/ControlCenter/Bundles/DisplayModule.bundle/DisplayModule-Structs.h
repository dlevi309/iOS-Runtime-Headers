/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/DisplayModule.bundle/DisplayModule
*/

typedef struct {
	int hour;
	int minute;
} SCD_Struct_CC0;

typedef struct {
	SCD_Struct_CC0 fromTime;
	SCD_Struct_CC0 toTime;
} SCD_Struct_CC1;

typedef struct {
	BOOL active;
	BOOL enabled;
	BOOL sunSchedulePermitted;
	int mode;
	SCD_Struct_CC1 schedule;
	unsigned long long disableFlags;
	BOOL available;
} SCD_Struct_CC2;

typedef struct {
	BOOL field1;
	BOOL field2;
	BOOL field3;
	int field4;
	SCD_Struct_CC1 field5;
	unsigned long long field6;
	BOOL field7;
} SCD_Struct_CC3;

typedef struct BKSDisplayBrightnessTransaction* BKSDisplayBrightnessTransactionRef;

