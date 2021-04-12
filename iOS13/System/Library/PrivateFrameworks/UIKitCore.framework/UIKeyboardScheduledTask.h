/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIKeyboardTaskQueue, NSTimer, _UIActionWhenIdle;

@interface UIKeyboardScheduledTask : NSObject {

	/*^block*/id _task;
	double _timeInterval;
	UIKeyboardTaskQueue* _taskQueue;
	NSTimer* _timer;
	_UIActionWhenIdle* _deferredAction;
	/*^block*/id _enqueuedTask;

}

@property (nonatomic,readonly) UIKeyboardTaskQueue * taskQueue;               //@synthesize taskQueue=_taskQueue - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                 //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) _UIActionWhenIdle * deferredAction;              //@synthesize deferredAction=_deferredAction - In the implementation block
@property (nonatomic,copy) id enqueuedTask;                                   //@synthesize enqueuedTask=_enqueuedTask - In the implementation block
@property (nonatomic,readonly) id task;                                       //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) double timeInterval;                           //@synthesize timeInterval=_timeInterval - In the implementation block
@property (nonatomic,readonly) BOOL repeats; 
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(double)timeInterval;
-(BOOL)repeats;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(id)task;
-(UIKeyboardTaskQueue *)taskQueue;
-(void)resetTimer;
-(id)initWithTaskQueue:(id)arg1 timeInterval:(double)arg2 repeats:(BOOL)arg3 task:(/*^block*/id)arg4 ;
-(void)timerFired:(id)arg1 ;
-(_UIActionWhenIdle *)deferredAction;
-(id)enqueuedTask;
-(void)handleDeferredTimerFiredEvent;
-(void)setDeferredAction:(_UIActionWhenIdle *)arg1 ;
-(void)setEnqueuedTask:(id)arg1 ;
@end

