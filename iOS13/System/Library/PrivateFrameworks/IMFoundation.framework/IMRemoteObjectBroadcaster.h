/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface IMRemoteObjectBroadcaster : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(id)defaultBroadcaster;
-(id)init;
-(void)dealloc;
-(id)_queue;
-(id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 priority:(int)arg4 ;
-(id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 priority:(int)arg4 completion:(/*^block*/id)arg5 ;
-(id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 ;
-(id)broadcastProxyForTargets:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 ;
-(void)blockUntilSendQueueIsEmpty;
-(void)flushProxy:(id)arg1 ;
@end

