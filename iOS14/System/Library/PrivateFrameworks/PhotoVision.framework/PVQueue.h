/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/


@protocol OS_dispatch_queue;
@class NSObject, PVCanceler;

@interface PVQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	Ai _currentlyExecutingTasksCount;
	PVCanceler* _canceler;
	BOOL _terminating;
	BOOL _isConcurrent;

}
-(void)waitForCurrentTasksToFinish;
-(void)resume;
-(id)initQueueWithName:(id)arg1 isSerial:(BOOL)arg2 qos_class:(unsigned)arg3 ;
-(void)execute_async:(/*^block*/id)arg1 ;
-(void)execute_after:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)execute_sync:(/*^block*/id)arg1 ;
-(void)dispatch_barrier_async:(/*^block*/id)arg1 ;
-(void)dispatch_barrier_sync:(/*^block*/id)arg1 ;
-(void)suspend_sync;
-(void)suspend_async;
-(void)terminate_sync;
@end

