/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/MediaCapture/H10ISP.mediacapture
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned timestamp : 1;
	unsigned capacitance : 1;
	unsigned transition : 1;
} SCD_Struct_AW1;

typedef struct {
	unsigned timestamp : 1;
	unsigned numAttemptsTotal : 1;
	unsigned numBuffersInUseHighWatermark : 1;
	unsigned numBuffersTotal : 1;
} SCD_Struct_AW2;

typedef struct {
	unsigned timestamp : 1;
	unsigned errorCode : 1;
	unsigned inputMode : 1;
	unsigned miConfidence : 1;
	unsigned miSelectedMode : 1;
	unsigned rotationAngleX : 1;
	unsigned rotationAngleY : 1;
	unsigned rotationAngleZ : 1;
	unsigned stereoGMCerrorCode : 1;
} SCD_Struct_AW3;

typedef struct {
	unsigned timestamp : 1;
	unsigned numMbFaults : 1;
	unsigned numRglFaults : 1;
	unsigned numRglUVLOFaults : 1;
	unsigned numYgFaults : 1;
} SCD_Struct_AW4;

typedef struct {
	unsigned timestamp : 1;
	unsigned thresholdPassed : 1;
} SCD_Struct_AW5;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_Ba7;

typedef struct {
	unsigned duration : 1;
	unsigned timestamp : 1;
	unsigned eflScale : 1;
	unsigned errorCode : 1;
	unsigned rotationAngleX : 1;
	unsigned rotationAngleY : 1;
	unsigned rotationAngleZ : 1;
	unsigned spatialCoverage : 1;
} SCD_Struct_AW8;

