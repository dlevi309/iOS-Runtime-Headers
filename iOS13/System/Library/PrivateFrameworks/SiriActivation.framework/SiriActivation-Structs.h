/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/


@class MTTimerManager, MTAlarmManager, NSMutableSet, NSMutableDictionary;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	MTTimerManager* timerManager;
	MTAlarmManager* alarmManager;
	NSMutableSet* lastFiringTimerIDs;
	NSMutableSet* lastFiringAlarmIDs;
	NSMutableDictionary* lastTimerFiringDates;
	NSMutableDictionary* lastAlarmFiringDates;
	BOOL isTimerFiring;
	BOOL isAlarmFiring;
} SCD_Struct_SA2;

