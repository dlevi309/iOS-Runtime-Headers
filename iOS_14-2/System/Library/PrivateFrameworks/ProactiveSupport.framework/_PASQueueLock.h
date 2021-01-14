/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _PASQueueLock : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id _guardedData;

}
-(void)runWithLockAcquired:(/*^block*/id)arg1 ;
-(id)unsafeGuardedData;
-(id)initWithGuardedData:(id)arg1 serialQueue:(id)arg2 ;
-(id)guardedDataAssertingLockContext;
-(void)runAsyncWithLockAcquired:(/*^block*/id)arg1 ;
@end

