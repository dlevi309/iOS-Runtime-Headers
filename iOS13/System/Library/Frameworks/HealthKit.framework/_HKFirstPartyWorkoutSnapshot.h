/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSDate;

@interface _HKFirstPartyWorkoutSnapshot : NSObject {

	double _elapsedTime;
	NSDate* _snapshotDate;
	long long _state;
	unsigned long long _activityType;

}

@property (nonatomic,readonly) long long state;                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned long long activityType;              //@synthesize activityType=_activityType - In the implementation block
+(id)firstPartyWorkoutSnapshotWithCurrentWorkoutSnapshot:(id)arg1 ;
-(id)description;
-(long long)state;
-(unsigned long long)activityType;
-(id)_initWithState:(long long)arg1 activityType:(unsigned long long)arg2 elapsedTime:(double)arg3 snapshotDate:(id)arg4 ;
-(double)durationForDate:(id)arg1 ;
@end

