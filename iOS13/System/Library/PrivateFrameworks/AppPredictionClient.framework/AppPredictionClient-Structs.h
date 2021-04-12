/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned now : 1;
	unsigned doNotDisturb : 1;
	unsigned telephonyCapability : 1;
	unsigned airDropCapability : 1;
	unsigned airplaneMode : 1;
	unsigned coreRoutineCapability : 1;
	unsigned greenTeaDeviceCapability : 1;
	unsigned internalBuild : 1;
	unsigned lockScreen : 1;
} SCD_Struct_AT1;

typedef struct {
	unsigned long long lastEventTimestamp;
} SCD_Struct_AT2;

typedef struct {
	SCD_Struct_AT2 resultsDidBecomeVisible;
	SCD_Struct_AT2 didStartSearch;
	SCD_Struct_AT2 searchViewDidAppear;
	SCD_Struct_AT2 searchViewDidDisappear;
	SCD_Struct_AT2 didEngageResult;
	SCD_Struct_AT2 didEngageCardSection;
} SCD_Struct_AT3;

