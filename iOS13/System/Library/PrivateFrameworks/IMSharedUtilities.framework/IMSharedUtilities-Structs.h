/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

typedef struct _NSZone* NSZoneRef;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct CGImageDestination* CGImageDestinationRef;

typedef struct CGImage* CGImageRef;

typedef struct {
	unsigned associatedMessageType : 1;
	unsigned expireState : 1;
	unsigned timeDelivered : 1;
	unsigned timeExpressiveSentPlayed : 1;
	unsigned timePlayed : 1;
	unsigned timeRead : 1;
	unsigned associatedMessageRangeLength : 1;
	unsigned associatedMessageRangeLocation : 1;
	unsigned version : 1;
} SCD_Struct_IM4;

typedef struct {
	unsigned shareDirection : 1;
	unsigned shareStatus : 1;
	unsigned version : 1;
} SCD_Struct_IM5;

typedef struct {
	unsigned messageActionType : 1;
	unsigned version : 1;
} SCD_Struct_IM6;

typedef struct {
	unsigned version : 1;
} SCD_Struct_IM7;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;
