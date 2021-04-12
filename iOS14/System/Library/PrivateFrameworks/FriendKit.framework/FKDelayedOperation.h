/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)execute;
-(void)invalidate;
-(id)initWithQueue:(id)arg1 delay:(double)arg2 block:(/*^block*/id)arg3 ;
-(void)_queue_executeBlock;
-(void)_queue_updateLastExecution;
@end

