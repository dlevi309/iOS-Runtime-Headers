/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _PASQueueLock : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id _guardedData;

}
-(void)runWithLockAcquired:(/*^block*/id)arg1 ;
-(id)guardedDataAssertingLockContext;
-(id)unsafeGuardedData;
-(id)initWithGuardedData:(id)arg1 serialQueue:(id)arg2 ;
-(void)runAsyncWithLockAcquired:(/*^block*/id)arg1 ;
@end

