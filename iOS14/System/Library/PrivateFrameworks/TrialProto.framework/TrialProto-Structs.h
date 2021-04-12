/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/


@class NSData, NSString, TRIPBMessage, TRIPBEnumDescriptor, NSOutputStream;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned processEventIndex : 1;
	unsigned projectId : 1;
} SCD_Struct_TR1;

typedef struct {
	unsigned list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_TR2;

typedef struct {
	unsigned deploymentId : 1;
} SCD_Struct_TR3;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	unsigned secondsSince1970 : 1;
	unsigned minutesDstOffset : 1;
	unsigned secondsFromUtc : 1;
} SCD_Struct_TR5;

typedef union {
	BOOL valueBool;
	int valueInt32;
	long long valueInt64;
	unsigned valueUInt32;
	unsigned long long valueUInt64;
	float valueFloat;
	double valueDouble;
	NSData* valueData;
	NSString* valueString;
	TRIPBMessage* valueMessage;
	int valueEnum;
} SCD_Union_TR6;

typedef union {
	TRIPBEnumDescriptor* enumDescriptor_;
	/*function pointer*/void* enumVerifier_;
} SCD_Union_TR7;

typedef struct TRIPBCodedInputStreamState {
	char* bytes;
	unsigned long long bufferSize;
	unsigned long long bufferPos;
	unsigned long long currentLimit;
	int lastTag;
	unsigned long long recursionDepth;
} TRIPBCodedInputStreamState;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_TR9;

typedef struct TRIPBOutputBufferState {
	char* bytes;
	unsigned long long size;
	unsigned long long position;
	NSOutputStream* output;
} TRIPBOutputBufferState;

