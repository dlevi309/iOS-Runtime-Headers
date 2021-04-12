/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FriendKit.framework/FriendKit
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface FKDelayedOperation : NSObject {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;
	int _blockEnqueued;
	double _lastExecution;
	NSObject*<OS_dispatch_source> _timerSource;
	double _delay;

}
-(void)invalidate;
-(void)execute;
-(id)initWithQueue:(id)arg1 delay:(double)arg2 block:(/*^block*/id)arg3 ;
-(void)_queue_executeBlock;
-(void)_queue_updateLastExecution;
@end

