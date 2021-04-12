/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned timestamp : 1;
	unsigned originIdentifier : 1;
} SCD_Struct_NM1;

typedef struct {
	unsigned timestamp : 1;
	unsigned originIdentifier : 1;
	unsigned state : 1;
} SCD_Struct_NM2;

typedef struct {
	double list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_NM3;

typedef struct {
	float list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_NM4;

typedef struct {
	unsigned command : 1;
	unsigned maximumRating : 1;
	unsigned minimumRating : 1;
	unsigned preferredPlaybackRate : 1;
	unsigned presentationStyle : 1;
	unsigned repeatMode : 1;
	unsigned shuffleMode : 1;
	unsigned active : 1;
	unsigned enabled : 1;
} SCD_Struct_NM5;

typedef struct __CFError* CFErrorRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	unsigned duration : 1;
} SCD_Struct_NM8;

typedef struct {
	unsigned height : 1;
	unsigned timestamp : 1;
	unsigned width : 1;
	unsigned originIdentifier : 1;
} SCD_Struct_NM9;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	unsigned playbackPosition : 1;
	unsigned radioStationID : 1;
	unsigned trackID : 1;
	unsigned playbackQueueInsertionPosition : 1;
	unsigned playbackRate : 1;
	unsigned rating : 1;
	unsigned repeatMode : 1;
	unsigned sendOptions : 1;
	unsigned shuffleMode : 1;
	unsigned skipInterval : 1;
	unsigned externalPlayerCommand : 1;
	unsigned negative : 1;
	unsigned requestDefermentToPlaybackQueuePosition : 1;
	unsigned shouldBeginRadioPlayback : 1;
	unsigned shouldOverrideManuallyCuratedQueue : 1;
} SCD_Struct_NM11;

typedef struct {
	long long location;
	long long length;
} SCD_Struct_NM12;

typedef struct {
	unsigned list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_NM13;

