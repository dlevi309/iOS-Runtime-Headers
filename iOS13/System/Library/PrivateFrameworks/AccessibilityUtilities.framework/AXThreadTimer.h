/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <libobjc.A.dylib/AXAccessQueueTimer.h>

@class NSThread, AXThreadTimerTask, NSString;

@interface AXThreadTimer : NSObject <AXAccessQueueTimer> {

	NSThread* _thread;
	/*^block*/id _cancelBlock;
	BOOL _automaticallyCancelPendingBlockUponSchedulingNewBlock;
	AXThreadTimerTask* _task;

}

@property (nonatomic,retain) AXThreadTimerTask * task;                                                //@synthesize task=_task - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (assign,nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock;              //@synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isPending,nonatomic,readonly) BOOL pending; 
-(BOOL)isActive;
-(void)cancel;
-(BOOL)isCancelled;
-(BOOL)isPending;
-(AXThreadTimerTask *)task;
-(void)setTask:(AXThreadTimerTask *)arg1 ;
-(BOOL)automaticallyCancelPendingBlockUponSchedulingNewBlock;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 ;
-(void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(BOOL)arg1 ;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 cancelBlock:(/*^block*/id)arg3 ;
-(void)_runAfterDelay:(id)arg1 ;
-(id)initWithThread:(id)arg1 ;
@end

