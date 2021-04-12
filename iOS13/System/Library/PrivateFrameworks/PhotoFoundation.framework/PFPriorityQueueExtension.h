/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PFDispatchQueueExtension.h>
#import <libobjc.A.dylib/PFPriorityEnqueuing.h>

@class PFDispatchQueue, NSArray, NSMutableArray, PFSerialQueue;

@interface PFPriorityQueueExtension : PFDispatchQueueExtension <PFPriorityEnqueuing> {

	PFDispatchQueue* _executionQueue;
	PFDispatchQueue* _serializer;
	unsigned long long _lastScheduledPriority;
	NSArray* _priorityLevels;
	NSMutableArray* _emptyNotifications;
	unsigned long long* _scheduledCount;
	PFSerialQueue* _schedulingQueue;
	unsigned long long _qosBlockCount[6];
	BOOL _queueSuspended;
	unsigned long long _schedulingSuspendCount;
	BOOL _performsConcurrentScheduling;

}
-(id)init;
-(void)dealloc;
-(void)installOnQueue:(id)arg1 ;
-(id)queue:(id)arg1 receivedDispatchAsync:(/*^block*/id)arg2 ;
-(void)queue:(id)arg1 didExecute:(id)arg2 ;
-(void)queue:(id)arg1 skippedExecuting:(id)arg2 ;
-(void)queueDidSuspend:(id)arg1 ;
-(void)queueWillResume:(id)arg1 ;
-(void)enqueueWithPriority:(unsigned long long)arg1 qos:(unsigned)arg2 block:(/*^block*/id)arg3 ;
-(void)enqueueWithPriority:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)enqueueEmptyNotification:(/*^block*/id)arg1 ;
-(unsigned long long)schedulingLimitForPriorityLevel:(unsigned long long)arg1 ;
-(void)suspendScheduling;
-(void)resumeScheduling;
-(id)initWithPriorityLevels:(unsigned long long)arg1 concurrentScheduling:(BOOL)arg2 ;
-(void)_scheduleBlock:(id)arg1 ;
-(void)_scheduleNextBlock;
@end

