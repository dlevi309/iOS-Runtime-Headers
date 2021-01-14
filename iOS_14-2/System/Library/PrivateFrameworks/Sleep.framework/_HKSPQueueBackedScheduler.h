/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <libobjc.A.dylib/HKSPQueueBackedScheduler.h>

@protocol OS_dispatch_queue, NAScheduler;
@class NSObject, NSString;

@interface _HKSPQueueBackedScheduler : NSObject <HKSPQueueBackedScheduler> {

	NSObject*<OS_dispatch_queue> _queue;
	id<NAScheduler> _scheduler;

}

@property (nonatomic,readonly) id<NAScheduler> scheduler;                       //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithScheduler:(id)arg1 queue:(id)arg2 ;
-(id<NAScheduler>)scheduler;
@end

