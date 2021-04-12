/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSObject, CADisplayLink, NSMutableArray;

@interface PXPreloadScheduler : NSObject {

	NSObject*<OS_dispatch_queue> _utilityQueue;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	NSObject*<OS_dispatch_group> _pendingUtilityTasks;
	CADisplayLink* _displayLink;
	NSMutableArray* _pendingBlocks;
	CFRunLoopObserverRef _runloopObserver;
	BOOL __isActive;

}

@property (assign,setter=_setActive:,nonatomic) BOOL _isActive;              //@synthesize _isActive=__isActive - In the implementation block
+(id)sharedScheduler;
-(BOOL)_isActive;
-(id)init;
-(void)scheduleDeferredTaskWithQoS:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)scheduleTaskAfterCATransactionCommits:(/*^block*/id)arg1 ;
-(void)_didExecuteTaskWithQoS:(unsigned long long)arg1 ;
-(void)_willScheduleTaskWithQoS:(unsigned long long)arg1 ;
-(void)scheduleMainQueueTaskAndWait:(/*^block*/id)arg1 ;
-(BOOL)_shouldExecutePendingBlock;
-(void)scheduleMainQueueTask:(/*^block*/id)arg1 ;
-(void)scheduleTaskWithQoS:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)_setActive:(BOOL)arg1 ;
-(void)_displayLinkTick:(id)arg1 ;
-(void)_runLoopWillStartWaiting;
-(void)dealloc;
-(void)_updateIsActive;
@end

