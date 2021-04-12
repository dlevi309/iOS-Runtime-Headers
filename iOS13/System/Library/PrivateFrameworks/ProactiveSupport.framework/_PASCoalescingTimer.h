/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@protocol OS_dispatch_queue;
@class NSObject, _PASLock;

@interface _PASCoalescingTimer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	double _leewaySeconds;
	/*^block*/id _coalesceData;
	/*^block*/id _operation;
	_PASLock* _lock;

}
-(id)initWithQueue:(id)arg1 leewaySeconds:(double)arg2 coalesceData:(/*^block*/id)arg3 operation:(/*^block*/id)arg4 ;
-(id)initWithQueue:(id)arg1 coalesceData:(/*^block*/id)arg2 operation:(/*^block*/id)arg3 ;
-(void)processData:(id)arg1 afterDelaySeconds:(double)arg2 coalescingBehavior:(unsigned char)arg3 ;
-(void)immediatelyProcessData:(id)arg1 ;
-(void)processData:(id)arg1 afterStrictDelaySeconds:(double)arg2 ;
-(void)_replaceCoalescingTimerUsingLockWitness:(id)arg1 ;
-(void)cancelPendingOperations;
@end

