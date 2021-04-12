/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface CFNetworkTimer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	double _interval;
	double _lastResumeTime;
	double _lastPauseTime;
	double _runTime;
	int _state;

}

@property (assign) int state;              //@synthesize state=_state - In the implementation block
-(void)dealloc;
-(int)state;
-(void)setTimer:(double)arg1 ;
-(void)setState:(int)arg1 ;
-(void)cancelTimer;
-(id)initWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)pauseTimer;
-(void)resumeTimer;
-(void)suspendCallbacksForTimer;
-(void)resumeCallbacksForTimer;
-(void)setCancelCallbacks:(/*^block*/id)arg1 ;
@end

