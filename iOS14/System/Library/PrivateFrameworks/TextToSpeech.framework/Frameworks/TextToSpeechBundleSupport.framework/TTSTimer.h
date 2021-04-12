/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)_createTimer;
-(void)clearQueue;
-(void)_startTimer:(id)arg1 ;
-(void)dealloc;
-(void)pauseQueue;
-(void)_handleTimerFired;
-(void)enqueueBlock:(/*^block*/id)arg1 withDelay:(double)arg2 withId:(long long)arg3 ;
-(void)continueQueue;
@end

