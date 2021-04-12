/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isPending,nonatomic,readonly) BOOL pending; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AXThreadTimerTask *)task;
-(void)_runAfterDelay:(id)arg1 ;
-(id)initWithThread:(id)arg1 ;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 cancelBlock:(/*^block*/id)arg3 ;
-(BOOL)isPending;
-(BOOL)isActive;
-(void)setTask:(AXThreadTimerTask *)arg1 ;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 ;
-(BOOL)automaticallyCancelPendingBlockUponSchedulingNewBlock;
-(void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(BOOL)arg1 ;
-(void)cancel;
-(BOOL)isCancelled;
@end

