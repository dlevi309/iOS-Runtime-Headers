/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
*/

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct {
	double field1;
	unsigned long long field2;
	unsigned long long field3;
	unsigned long long field4;
	unsigned long long field5;
	unsigned long long field6;
	unsigned long long field7;
	unsigned long long field8;
	BOOL field9;
	BOOL field10;
	BOOL field11;
} SCD_Struct_AW1;

typedef struct {
	SCD_Struct_AW1 field1;
	unsigned long long field2;
	int field3;
	int field4;
} SCD_Struct_AW2;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
	unsigned long long field4;
	SCD_Struct_AW2 field5[0];
} SCD_Struct_AW3;

typedef struct {
	unsigned long long sampleCount;
	unsigned long long pollCount;
	unsigned long long singleShotCount;
} SCD_Struct_AW4;

typedef struct AWNotification_s* AWNotification_sRef;

typedef struct _NSZone* NSZoneRef;

