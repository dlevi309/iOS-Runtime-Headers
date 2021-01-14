/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTTaskScheduler.h>

@protocol OS_dispatch_queue, AVTTaskScheduler;
@class NSMutableArray, NSObject, NSString;

@interface AVTCoalescingInvertingTaskScheduler : NSObject <AVTTaskScheduler> {

	NSMutableArray* _tasks;
	NSObject*<OS_dispatch_queue> _coalescingQueue;
	NSObject*<OS_dispatch_queue> _stateLock;
	id<AVTTaskScheduler> _backingScheduler;
	double _coalesingDelay;

}

@property (nonatomic,readonly) NSMutableArray * tasks;                                    //@synthesize tasks=_tasks - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> coalescingQueue;              //@synthesize coalescingQueue=_coalescingQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateLock;                    //@synthesize stateLock=_stateLock - In the implementation block
@property (nonatomic,readonly) id<AVTTaskScheduler> backingScheduler;                     //@synthesize backingScheduler=_backingScheduler - In the implementation block
@property (nonatomic,readonly) double coalesingDelay;                                     //@synthesize coalesingDelay=_coalesingDelay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)tasks;
-(void)performStateWork:(/*^block*/id)arg1 ;
-(double)coalesingDelay;
-(void)startTasksFrom:(/*^block*/id)arg1 ;
-(id<AVTTaskScheduler>)backingScheduler;
-(id)initWithBackingScheduler:(id)arg1 coalescingQueue:(id)arg2 delay:(double)arg3 environment:(id)arg4 ;
-(void)scheduleTask:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)coalescingQueue;
-(NSObject*<OS_dispatch_queue>)stateLock;
-(void)cancelAllTasks;
-(void)cancelTask:(/*^block*/id)arg1 ;
-(void)lowerTaskPriority:(/*^block*/id)arg1 ;
@end

