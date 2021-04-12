/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) double timestamp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(double)timestamp;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(CNStack *)delayedBlocks;
-(double)coalescingWindow;
-(void)flushDelayedBlock;
-(unsigned long long)getAndIncrementState;
-(void)removeDelayedBlock:(/*^block*/id)arg1 ;
-(void)setDelayedBlocks:(CNStack *)arg1 ;
-(id)initWithScheduler:(id)arg1 coalescingWindow:(double)arg2 ;
-(unsigned long long)state;
-(id<CNScheduler>)scheduler;
@end

