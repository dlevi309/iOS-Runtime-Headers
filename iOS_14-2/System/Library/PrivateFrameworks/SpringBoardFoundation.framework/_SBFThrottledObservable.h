/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBFObservable.h>

@protocol SBFCancelable, SBFObservable, SBFScheduler;
@interface _SBFThrottledObservable : SBFObservable {

	double _interval;
	id<SBFCancelable> _delayToken;
	id<SBFObservable> _observable;
	id<SBFScheduler> _scheduler;
	id _result;
	BOOL _hasResult;
	unsigned long long _resultCounter;

}
-(void)_sendResultToObserver:(id)arg1 withIdentifier:(unsigned long long)arg2 ;
-(void)_sendCompletionToObsever:(id)arg1 ;
-(id)initWithInterval:(double)arg1 observable:(id)arg2 scheduler:(id)arg3 ;
-(id)subscribe:(id)arg1 ;
-(void)_cancel;
-(void)_clearResult;
-(void)_setDelayToken:(id)arg1 ;
-(unsigned long long)_setResult:(id)arg1 ;
-(void)dealloc;
@end

