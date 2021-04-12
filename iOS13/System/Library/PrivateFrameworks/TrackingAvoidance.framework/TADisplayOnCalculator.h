/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@class NSDate;

@interface TADisplayOnCalculator : NSObject {

	BOOL _useBudget;
	double _budgetRemaining;
	NSDate* _startTime;
	NSDate* _evaluatedUntil;

}

@property (nonatomic,readonly) NSDate * evaluatedUntil;              //@synthesize evaluatedUntil=_evaluatedUntil - In the implementation block
-(NSDate *)evaluatedUntil;
-(void)completeDisplayOnWithEndDate:(id)arg1 ;
-(id)initWithStartTime:(id)arg1 ;
-(double)calculateDisplayOnWithEvents:(id)arg1 advertisements:(id)arg2 endDate:(id)arg3 ;
-(id)initWithStartTime:(id)arg1 budget:(double)arg2 ;
@end

