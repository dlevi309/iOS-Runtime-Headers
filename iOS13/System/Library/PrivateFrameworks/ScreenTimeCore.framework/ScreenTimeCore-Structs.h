/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned changeInUsage : 1;
	unsigned daysSinceCreationDate : 1;
	unsigned noCreationDate : 1;
} SCD_Struct_RM1;

typedef struct {
	unsigned timestamp : 1;
} SCD_Struct_RM2;

typedef struct {
	unsigned daysBeforeDisable : 1;
	unsigned timestamp : 1;
} SCD_Struct_RM3;

typedef struct {
	unsigned timestamp : 1;
	unsigned hasPasscode : 1;
	unsigned isManaged : 1;
	unsigned isManaging : 1;
} SCD_Struct_RM4;

typedef struct {
	unsigned long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_RM5;

typedef struct {
	unsigned alwaysAllowedAppsCount : 1;
	unsigned daysWithScreenTimeEnabled : 1;
	unsigned numberOfLimits : 1;
	unsigned timestamp : 1;
	unsigned contentPrivacyRestrictionsEnabled : 1;
	unsigned customDowntimeEnabled : 1;
	unsigned downtimeEnabled : 1;
	unsigned hasPasscode : 1;
	unsigned isManaged : 1;
	unsigned isManaging : 1;
	unsigned screenTimeEnabled : 1;
} SCD_Struct_RM6;

typedef struct {
	unsigned daysSinceLastView : 1;
	unsigned timestamp : 1;
	unsigned hasPasscode : 1;
	unsigned isManaged : 1;
	unsigned remoteUser : 1;
} SCD_Struct_RM7;

