/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/


@class CLLocation, ATXLocationManagerState, NSDate;

@interface ATXLocationManagerGuardedData : NSObject {

	CLLocation* currentLocation;
	unsigned long long currentRoutineMode;
	ATXLocationManagerState* state;
	NSDate* lastLOIUpdateTimestamp;
	NSDate* lastRoutineModeTimestamp;
	NSDate* lastPredictedLOIsUpdateTimestamp;
	NSDate* lastPredictedExitTimesUpdateTimestamp;

}
-(void)clear;
-(id)init;
@end

