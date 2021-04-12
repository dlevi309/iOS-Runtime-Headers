/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
*/


@class NSArray, HKQuantityType, HKQuantity;

@interface FITrailingIntervalController : NSObject {

	NSArray* _slices;
	HKQuantityType* _quantityType;
	NSArray* _uncommittedSamples;
	BOOL _thresholdReached;
	HKQuantity* _threshold;
	NSArray* _pauseResumeEvents;

}

@property (nonatomic,retain) HKQuantity * threshold;                     //@synthesize threshold=_threshold - In the implementation block
@property (nonatomic,readonly) BOOL thresholdReached;                    //@synthesize thresholdReached=_thresholdReached - In the implementation block
@property (nonatomic,readonly) double committedDuration; 
@property (nonatomic,readonly) HKQuantity * quantity; 
@property (nonatomic,readonly) NSArray * pauseResumeEvents;              //@synthesize pauseResumeEvents=_pauseResumeEvents - In the implementation block
-(HKQuantity *)threshold;
-(void)setThreshold:(HKQuantity *)arg1 ;
-(void)addSample:(id)arg1 ;
-(HKQuantity *)quantity;
-(void)addSamples:(id)arg1 ;
-(double)committedDuration;
-(double)activeDurationUntilDate:(id)arg1 ;
-(void)_updateSlicesWithSamples:(id)arg1 ;
-(void)_determineAndProcessThresholdReached;
-(void)_addPauseEvent:(id)arg1 ;
-(void)_addResumeEvent:(id)arg1 ;
-(void)_processUncommittedSamples;
-(id)initWithQuantityType:(id)arg1 threshold:(id)arg2 startDate:(id)arg3 ;
-(BOOL)addEvent:(id)arg1 withError:(id*)arg2 ;
-(double)idleDurationUntilDate:(id)arg1 ;
-(BOOL)thresholdReached;
-(NSArray *)pauseResumeEvents;
@end

