/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSTimer *)timer;
-(UIKeyboardTaskQueue *)taskQueue;
-(id)initWithTaskQueue:(id)arg1 timeInterval:(double)arg2 repeats:(BOOL)arg3 task:(/*^block*/id)arg4 ;
-(id)task;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)resetTimer;
-(double)timeInterval;
-(BOOL)repeats;
-(void)setEnqueuedTask:(id)arg1 ;
-(void)setDeferredAction:(_UIActionWhenIdle *)arg1 ;
-(void)timerFired:(id)arg1 ;
-(BOOL)isValid;
-(_UIActionWhenIdle *)deferredAction;
-(void)handleDeferredTimerFiredEvent;
-(void)invalidate;
-(id)enqueuedTask;
-(void)dealloc;
@end

