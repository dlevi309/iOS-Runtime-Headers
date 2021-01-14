/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface IMRemoteObjectBroadcaster : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(id)defaultBroadcaster;
-(void)blockUntilSendQueueIsEmpty;
-(id)init;
-(id)_queue;
-(void)flushProxy:(id)arg1 ;
-(id)broadcastProxyForTargets:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 ;
-(id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 priority:(int)arg4 completion:(/*^block*/id)arg5 ;
-(id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 priority:(int)arg4 ;
-(id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 ;
-(void)dealloc;
@end

