/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
*/


@class NSArray, NSDate, HKQuantityType, HKQuantity;

@interface FITrailingQuantityTimeSlice : NSObject {

	NSArray* _uncommittedSamples;
	NSArray* _committedSamples;
	NSDate* _lastCommitDate;
	BOOL _finalized;
	HKQuantityType* _quantityType;
	NSDate* _startDate;
	NSDate* _endDate;
	HKQuantity* _committedTotal;

}

@property (nonatomic,readonly) HKQuantityType * quantityType;                    //@synthesize quantityType=_quantityType - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                 //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSArray * committedSamples;                       //@synthesize committedSamples=_committedSamples - In the implementation block
@property (nonatomic,readonly) BOOL finalized;                                   //@synthesize finalized=_finalized - In the implementation block
@property (nonatomic,readonly) HKQuantity * committedTotal;                      //@synthesize committedTotal=_committedTotal - In the implementation block
@property (nonatomic,readonly) double committedDuration; 
@property (nonatomic,readonly) HKQuantity * committedAndAddedTotal; 
-(NSDate *)endDate;
-(NSDate *)startDate;
-(HKQuantityType *)quantityType;
-(id)description;
-(BOOL)finalized;
-(id)initWithQuantityType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)initWithQuantityType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 committedSamples:(id)arg4 uncommittedSamples:(id)arg5 lastCommitDate:(id)arg6 committedTotal:(id)arg7 finalized:(BOOL)arg8 ;
-(id)autoCommitDateForSamples:(id)arg1 ;
-(id)_commitingSamples:(id)arg1 toPreviousCommittedTotal:(id)arg2 toPreviousCommittedSamples:(id)arg3 untilDate:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 ;
-(id)committingUntilDate:(id)arg1 ;
-(id)settingStartDate:(id)arg1 ;
-(id)initWithQuantityType:(id)arg1 startDate:(id)arg2 ;
-(HKQuantity *)committedAndAddedTotal;
-(double)committedDuration;
-(double)activeDurationUntilDate:(id)arg1 ;
-(id)addingSample:(id)arg1 error:(id*)arg2 ;
-(id)addingSamples:(id)arg1 error:(id*)arg2 ;
-(id)settingEndDate:(id)arg1 ;
-(id)settingTotalQuantityLimit:(id)arg1 ;
-(NSArray *)committedSamples;
-(HKQuantity *)committedTotal;
-(id)_totalByCommittingSample:(id)arg1 toPreviousTotal:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
@end

