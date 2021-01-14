/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol OS_dispatch_queue;
@class BSAction, NSObject;

@interface BSBlockSentinel : NSObject {

	BSAction* _sentinelAction;
	/*^block*/id _handler;
	unsigned long long _count;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _explicitQueue;

}
+(id)sentinelWithExceptionReason:(id)arg1 ;
+(id)sentinelWithQueue:(id)arg1 signalCount:(unsigned long long)arg2 signalHandler:(/*^block*/id)arg3 ;
+(id)sentinelWithQueue:(id)arg1 signalCount:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
+(id)sentinelWithSignalCount:(unsigned long long)arg1 exceptionReason:(id)arg2 ;
+(id)sentinelWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)sentinelWithQueue:(id)arg1 signalHandler:(/*^block*/id)arg2 ;
-(BOOL)signalWithContext:(id)arg1 ;
-(BOOL)signal;
@end

