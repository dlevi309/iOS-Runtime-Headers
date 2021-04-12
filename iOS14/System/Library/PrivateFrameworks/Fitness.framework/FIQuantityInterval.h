/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HKQuantity *)threshold;
-(NSDate *)startDate;
-(FIIntervalDefinition *)definition;
-(id)initWithIntervalDefinition:(id)arg1 activityType:(unsigned long long)arg2 startDate:(id)arg3 ;
-(HKQuantityType *)trackedQuantityType;
@end

