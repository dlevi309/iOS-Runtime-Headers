/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
*/


@class FIQuantityTimeSlice, HKQuantity, NSDate, HKQuantityType;

@interface FIIntervalQuantityTrigger : NSObject {

	FIQuantityTimeSlice* _slice;
	HKQuantity* _threshold;
	BOOL _finalized;
	/*^block*/id _completion;
	NSDate* _triggeredDate;

}

@property (nonatomic,readonly) HKQuantityType * quantityType; 
@property (nonatomic,readonly) BOOL triggered; 
@property (nonatomic,readonly) NSDate * triggeredDate;                     //@synthesize triggeredDate=_triggeredDate - In the implementation block
-(id)description;
-(HKQuantityType *)quantityType;
-(BOOL)triggered;
-(id)addingSample:(id)arg1 error:(id*)arg2 ;
-(id)initWithQuantityType:(id)arg1 startDate:(id)arg2 threshold:(id)arg3 ;
-(NSDate *)triggeredDate;
-(id)initWithQuantityTimeslice:(id)arg1 threshold:(id)arg2 triggeredDate:(id)arg3 ;
-(id)settingTimeSlice:(id)arg1 ;
-(id)_finalizedTriggerByAddingSample:(id)arg1 toSlice:(id)arg2 withPreviousTotal:(id)arg3 threshold:(id)arg4 ;
@end

