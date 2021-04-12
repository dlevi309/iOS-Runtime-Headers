/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class CLLocation, ATXLocationManagerState, NSDate, ATXLocationManagerKnownLOIs;

@interface ATXLocationManagerGuardedData : NSObject {

	CLLocation* currentLocation;
	ATXLocationManagerState* state;
	NSDate* lastLOIUpdateTimestamp;
	NSDate* lastPredictedLOIsUpdateTimestamp;
	NSDate* lastPredictedExitTimesUpdateTimestamp;
	ATXLocationManagerKnownLOIs* locationsOfInterest;

}
-(id)init;
-(void)clear;
@end

