/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
*/


@class FIIntervalDefinition, NSDate, HKQuantityType, HKQuantity;

@interface FIQuantityInterval : NSObject {

	FIIntervalDefinition* _definition;
	NSDate* _startDate;
	HKQuantityType* _trackedQuantityType;
	HKQuantity* _threshold;

}

@property (nonatomic,readonly) FIIntervalDefinition * definition;                 //@synthesize definition=_definition - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) HKQuantityType * trackedQuantityType;              //@synthesize trackedQuantityType=_trackedQuantityType - In the implementation block
@property (nonatomic,readonly) HKQuantity * threshold;                            //@synthesize threshold=_threshold - In the implementation block
-(NSDate *)startDate;
-(FIIntervalDefinition *)definition;
-(HKQuantity *)threshold;
-(id)initWithIntervalDefinition:(id)arg1 activityType:(unsigned long long)arg2 startDate:(id)arg3 ;
-(HKQuantityType *)trackedQuantityType;
@end

