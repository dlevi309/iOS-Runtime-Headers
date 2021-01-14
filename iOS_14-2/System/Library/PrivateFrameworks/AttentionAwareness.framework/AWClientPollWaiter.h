/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class AWAttentionAwarenessClient, NSObject;

@interface AWClientPollWaiter : NSObject {

	AWAttentionAwarenessClient* _client;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	/*^block*/id _clientBlock;
	NSObject*<OS_dispatch_source> _timer;
	int _pollState;

}
-(void)invalidate;
-(void)notifyPollEventType:(unsigned long long)arg1 event:(id)arg2 ;
-(void)cancel;
-(id)initWithClient:(id)arg1 timeout:(unsigned long long)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)invokeClientBlock:(unsigned long long)arg1 event:(id)arg2 ;
@end

