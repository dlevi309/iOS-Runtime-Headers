/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	unsigned flicker50 : 1;
	unsigned flicker60 : 1;
	unsigned flickerDC : 1;
	unsigned flickerInvalid : 1;
	unsigned flickerOver500 : 1;
	unsigned flickerUnder100 : 1;
	unsigned flickerUnder300 : 1;
	unsigned flickerUnder500 : 1;
} SCD_Struct_AW3;

typedef struct {
	unsigned timestamp : 1;
	unsigned numMbFaults : 1;
	unsigned numRglFaults : 1;
	unsigned numRglUVLOFaults : 1;
	unsigned numYgFaults : 1;
} SCD_Struct_AW4;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_Ba6;

