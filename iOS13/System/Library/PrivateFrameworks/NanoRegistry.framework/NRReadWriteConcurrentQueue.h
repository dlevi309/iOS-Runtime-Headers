/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


@protocol OS_dispatch_queue;
#import <NanoRegistry/NanoRegistry-Structs.h>
@class NSMutableArray, NSObject;

@interface NRReadWriteConcurrentQueue : NSObject {

	NSMutableArray* _readerQueues;
	NSObject*<OS_dispatch_queue> _writerQueue;
	long long _nextReader;
	BOOL _suspended;
	NSMutableArray* _suspendedReadRequests;
	NSMutableArray* _suspendedWriteRequests;
	os_unfair_lock_s _lock;

}
-(void)invalidate;
-(void)resume;
-(void)suspend;
-(void)enqueueReadWithBlock:(/*^block*/id)arg1 bypassSuspend:(BOOL)arg2 async:(BOOL)arg3 ;
-(void)_suspendReadersAndWaitForDrain;
-(void)_resumeReaders;
-(id)initWithNumberOfReaders:(unsigned long long)arg1 ;
-(void)enqueueReadWithBlock:(/*^block*/id)arg1 bypassSuspend:(BOOL)arg2 ;
-(void)enqueueReadWithBlockAsync:(/*^block*/id)arg1 bypassSuspend:(BOOL)arg2 ;
-(void)enqueueWriteWithBlockAsync:(/*^block*/id)arg1 bypassSuspend:(BOOL)arg2 ;
@end

