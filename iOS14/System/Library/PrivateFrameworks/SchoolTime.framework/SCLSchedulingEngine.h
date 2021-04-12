/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/


@protocol SCLSchedulingEngineDelegate;
@class NSDate, SCLState, SCLSchedulingParameters;

@interface SCLSchedulingEngine : NSObject {

	NSDate* _lastEvaluationDate;
	NSDate* _nextEvaluationDate;
	id<SCLSchedulingEngineDelegate> _delegate;
	SCLState* _state;
	SCLSchedulingParameters* _schedulingParameters;

}

@property (nonatomic,retain) SCLSchedulingParameters * schedulingParameters;               //@synthesize schedulingParameters=_schedulingParameters - In the implementation block
@property (assign,nonatomic,__weak) id<SCLSchedulingEngineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SCLState * state;                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSDate * lastEvaluationDate; 
@property (nonatomic,readonly) NSDate * nextEvaluationDate; 
-(id<SCLSchedulingEngineDelegate>)delegate;
-(void)setDelegate:(id<SCLSchedulingEngineDelegate>)arg1 ;
-(SCLState *)state;
-(BOOL)_evaluateChangeFromParameters:(id)arg1 toParameters:(id)arg2 ;
-(SCLSchedulingParameters *)schedulingParameters;
-(void)updateParametersWithBlock:(/*^block*/id)arg1 ;
-(id)initWithParametersBlock:(/*^block*/id)arg1 shouldStartManuallyActive:(BOOL)arg2 ;
-(void)reevaluateStateAtDate:(id)arg1 ;
-(NSDate *)lastEvaluationDate;
-(NSDate *)nextEvaluationDate;
-(void)setSchedulingParameters:(SCLSchedulingParameters *)arg1 ;
@end

