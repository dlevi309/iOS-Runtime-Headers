/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNScheduler.h>

@protocol CNScheduler;
@class CNQueue, NSConditionLock, NSString;

@interface CNSuspendableSchedulerDecorator : NSObject <CNScheduler> {

	id<CNScheduler> _scheduler;
	CNQueue* _queue;
	NSConditionLock* _lock;

}

@property (nonatomic,readonly) id<CNScheduler> scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) CNQueue * queue;                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSConditionLock * lock;                 //@synthesize lock=_lock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double timestamp; 
+(id)suspendedSchedulerWithScheduler:(id)arg1 ;
+(id)resumedSchedulerWithScheduler:(id)arg1 ;
-(CNQueue *)queue;
-(NSConditionLock *)lock;
-(void)resume;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)suspend;
-(double)timestamp;
-(id<CNScheduler>)scheduler;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(id)initWithScheduler:(id)arg1 ;
-(void)_performFirstQueuedTask;
-(id)_nts_enqueueCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
@end

