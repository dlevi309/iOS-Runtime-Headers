/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNScheduler.h>

@protocol CNScheduler;
@class CNStack, NSString;

@interface CNCoalescingSchedulerDecorator : NSObject <CNScheduler> {

	id<CNScheduler> _scheduler;
	double _coalescingWindow;
	unsigned long long _state;
	CNStack* _delayedBlocks;

}

@property (nonatomic,readonly) id<CNScheduler> scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) double coalescingWindow;                //@synthesize coalescingWindow=_coalescingWindow - In the implementation block
@property (assign,nonatomic) unsigned long long state;                 //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) CNStack * delayedBlocks;                    //@synthesize delayedBlocks=_delayedBlocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double timestamp; 
-(unsigned long long)state;
-(void)performBlock:(/*^block*/id)arg1 ;
-(double)timestamp;
-(void)setState:(unsigned long long)arg1 ;
-(id<CNScheduler>)scheduler;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(CNStack *)delayedBlocks;
-(double)coalescingWindow;
-(void)flushDelayedBlock;
-(unsigned long long)getAndIncrementState;
-(void)removeDelayedBlock:(/*^block*/id)arg1 ;
-(id)initWithScheduler:(id)arg1 coalescingWindow:(double)arg2 ;
-(void)setDelayedBlocks:(CNStack *)arg1 ;
@end

