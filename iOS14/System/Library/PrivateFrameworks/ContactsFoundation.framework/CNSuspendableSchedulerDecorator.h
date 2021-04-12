/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) double timestamp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resumedSchedulerWithScheduler:(id)arg1 ;
+(id)suspendedSchedulerWithScheduler:(id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(void)suspend;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(double)timestamp;
-(void)performBlock:(/*^block*/id)arg1 ;
-(id)initWithScheduler:(id)arg1 ;
-(void)_performFirstQueuedTask;
-(NSConditionLock *)lock;
-(NSString *)description;
-(CNQueue *)queue;
-(id)_nts_enqueueCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(void)resume;
-(id<CNScheduler>)scheduler;
@end

