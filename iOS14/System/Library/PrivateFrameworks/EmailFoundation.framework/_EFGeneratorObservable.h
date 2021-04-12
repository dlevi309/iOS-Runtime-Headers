/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EFObservable.h>

@protocol EFScheduler;
@class EFCancelationToken;

@interface _EFGeneratorObservable : EFObservable {

	id<EFScheduler> _scheduler;
	EFCancelationToken* _cancelable;
	id _state;
	/*^block*/id _condition;
	/*^block*/id _nextStateForState;
	/*^block*/id _resultFromState;
	/*^block*/id _delayForState;

}
-(BOOL)_isFinished;
-(id)subscribe:(id)arg1 ;
-(void)_updateState;
-(void)_scheduleNextResultForObserver:(id)arg1 ;
-(id)initWithInitialState:(id)arg1 condition:(/*^block*/id)arg2 nextState:(/*^block*/id)arg3 resultSelector:(/*^block*/id)arg4 delay:(/*^block*/id)arg5 scheduler:(id)arg6 ;
@end

