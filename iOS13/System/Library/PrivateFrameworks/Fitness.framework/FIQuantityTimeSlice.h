/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
*/


@class NSArray, NSDate, HKQuantityType, HKQuantity;

@interface FIQuantityTimeSlice : NSObject {

	NSArray* _uncommittedSamples;
	NSDate* _lastCommitDate;
	BOOL _finalized;
	HKQuantityType* _quantityType;
	NSDate* _startDate;
	NSDate* _endDate;
	HKQuantity* _committedTotal;

}

@property (nonatomic,readonly) BOOL finalized;                                   //@synthesize finalized=_finalized - In the implementation block
@property (nonatomic,readonly) HKQuantityType * quantityType;                    //@synthesize quantityType=_quantityType - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                 //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) HKQuantity * committedTotal;                      //@synthesize committedTotal=_committedTotal - In the implementation block
@property (nonatomic,readonly) HKQuantity * committedAndAddedTotal; 
-(id)description;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(HKQuantityType *)quantityType;
-(BOOL)finalized;
-(id)initWithQuantityType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)committingUntilDate:(id)arg1 ;
-(id)initWithQuantityType:(id)arg1 startDate:(id)arg2 ;
-(HKQuantity *)committedAndAddedTotal;
-(id)addingSample:(id)arg1 error:(id*)arg2 ;
-(id)addingSamples:(id)arg1 error:(id*)arg2 ;
-(id)settingEndDate:(id)arg1 ;
-(HKQuantity *)committedTotal;
-(id)_totalByCommittingSample:(id)arg1 toPreviousTotal:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(id)initWithQuantityType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 uncommitedSamples:(id)arg4 lastCommitDate:(id)arg5 committedTotal:(id)arg6 finalized:(BOOL)arg7 ;
-(id)_commitingSamples:(id)arg1 toPreviousCommittedTotal:(id)arg2 untilDate:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
@end

