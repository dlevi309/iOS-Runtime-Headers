/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol NSObject, OS_os_log;
@class SGDPowerBudgetThrottlingState, NSDate, _DASScheduler, NSObject;

@interface SGDPowerBudget : NSObject {

	SGDPowerBudgetThrottlingState* _throttlingState;
	NSDate* _lastPlugInTime;
	id<NSObject> _batteryObserver;
	_DASScheduler* _scheduler;
	AB _discretionaryWorkInProgress;
	NSObject*<OS_os_log> _log;

}
+(id)defaultBudget;
-(id)init;
-(BOOL)canDoExtraDiscretionaryWork;
-(BOOL)_canDoDiscretionaryWork:(id*)arg1 ;
-(void)_endDuetBudgetedWork;
-(void)didConsumeAnExtraBudgetedOperation;
-(BOOL)canDoDiscretionaryWork;
-(void)_endWork;
-(void)_startThrottleBudgetedWork;
-(BOOL)_hasExtraThrottleBudgetRemaining;
-(BOOL)_hasThrottleBudgetRemaining;
-(void)doDiscretionaryWork:(/*^block*/id)arg1 orElse:(/*^block*/id)arg2 ;
-(void)_endThrottleBudgetedWork;
-(BOOL)_startWork;
-(id)throttlingState;
-(void)_didConsumeAnExtraBudgetedOperation;
-(void)_startDuetBudgetedWork;
-(BOOL)_hasDuetBudgetRemaining;
-(void)dealloc;
@end

