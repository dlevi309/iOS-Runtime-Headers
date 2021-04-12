/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned schemaVersion : 1;
} SCD_Struct_PP1;

typedef struct {
	unsigned algorithm : 1;
	unsigned source : 1;
} SCD_Struct_PP2;

typedef struct {
	unsigned domain : 1;
	unsigned type : 1;
	unsigned fromPortrait : 1;
} SCD_Struct_PP3;

typedef struct {
	unsigned resultSizeLog10 : 1;
	unsigned error : 1;
	unsigned exclusionSpec : 1;
	unsigned limitHit : 1;
	unsigned timeLimited : 1;
	unsigned timeSpec : 1;
} SCD_Struct_PP4;

typedef struct type {
	unsigned char __lx[24];
} type;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_PP7;

typedef struct __DDScanner* DDScannerRef;

typedef struct {
	unsigned quantizedScore : 1;
	unsigned secondsFromUnixEpoch : 1;
	unsigned algorithm : 1;
	unsigned mediaType : 1;
	unsigned type : 1;
} SCD_Struct_PP9;

typedef struct header_s {
	unsigned qidCount;
	unsigned topicCount;
	unsigned nonzeroCount;
	unsigned payloadLen;
} header_s;

typedef const struct PPCompactStringArray* PPCompactStringArrayRef;

typedef struct atomic_flag {
	AB _Value;
} atomic_flag;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_PP13;

