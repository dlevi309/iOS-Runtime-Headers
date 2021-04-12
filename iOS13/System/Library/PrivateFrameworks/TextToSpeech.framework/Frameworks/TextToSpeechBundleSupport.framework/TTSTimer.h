/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSMutableArray, NSObject, NSLock;

@interface TTSTimer : NSObject {

	NSMutableArray* _queue;
	NSObject*<OS_dispatch_source> _timer;
	NSLock* _timerLock;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _paused;

}
-(void)dealloc;
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)_startTimer:(id)arg1 ;
-(void)clearQueue;
-(void)_createTimer;
-(void)pauseQueue;
-(void)_handleTimerFired;
-(void)enqueueBlock:(/*^block*/id)arg1 withDelay:(double)arg2 withId:(long long)arg3 ;
-(void)continueQueue;
@end

