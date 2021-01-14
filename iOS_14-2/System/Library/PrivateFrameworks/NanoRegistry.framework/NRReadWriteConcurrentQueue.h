/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)enqueueReadWithBlock:(/*^block*/id)arg1 bypassSuspend:(BOOL)arg2 async:(BOOL)arg3 ;
-(void)suspend;
-(id)initWithNumberOfReaders:(unsigned long long)arg1 ;
-(void)enqueueReadWithBlock:(/*^block*/id)arg1 bypassSuspend:(BOOL)arg2 ;
-(void)invalidate;
-(void)enqueueReadWithBlockAsync:(/*^block*/id)arg1 bypassSuspend:(BOOL)arg2 ;
-(void)resume;
-(void)enqueueWriteWithBlockAsync:(/*^block*/id)arg1 bypassSuspend:(BOOL)arg2 ;
@end

