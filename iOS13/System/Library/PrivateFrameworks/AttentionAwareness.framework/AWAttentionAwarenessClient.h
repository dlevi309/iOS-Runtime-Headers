/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
*/

#import <libobjc.A.dylib/AWServiceObserver.h>
#import <libobjc.A.dylib/AWFrameworkClient.h>

@protocol OS_dispatch_queue, NSXPCProxyCreating;
@class NSObject, AWClientPollWaiter, AWAttentionAwarenessConfiguration, AWAttentionEvent, NSString;

@interface AWAttentionAwarenessClient : NSObject <AWServiceObserver, AWFrameworkClient> {

	NSObject*<OS_dispatch_queue> _queue;
	AWClientPollWaiter* _pollWaiter;
	id<NSXPCProxyCreating> _remoteClientProxy;
	unsigned long long _suspensionCount;
	BOOL _invalidated;
	NSObject*<OS_dispatch_queue> _clientNotifQueue;
	/*^block*/id _clientNotifBlock;
	NSObject*<OS_dispatch_queue> _clientEventQueue;
	/*^block*/id _clientEventBlock;
	AWAttentionAwarenessConfiguration* _configuration;
	BOOL _unitTestMode;
	int _clientIndex;
	BOOL _lastAttentionState;

}

@property (nonatomic,copy) AWAttentionAwarenessConfiguration * configuration; 
@property (nonatomic,retain,readonly) AWAttentionEvent * lastEvent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)setConfiguration:(AWAttentionAwarenessConfiguration *)arg1 ;
-(AWAttentionAwarenessConfiguration *)configuration;
-(BOOL)invalidateWithError:(id*)arg1 ;
-(void)notify:(unsigned long long)arg1 ;
-(id)connect:(BOOL)arg1 ;
-(BOOL)suspendWithError:(id*)arg1 ;
-(BOOL)resumeWithError:(id*)arg1 ;
-(BOOL)pollForAttentionWithTimeout:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 error:(id*)arg4 ;
-(BOOL)cancelPollForAttentionWithError:(id*)arg1 ;
-(void)notifyEvent:(id)arg1 ;
-(void)notifyPollEventType:(unsigned long long)arg1 event:(id)arg2 ;
-(id)unitTestSampler;
-(void)serviceInterrupted;
-(BOOL)setConfiguration:(id)arg1 shouldReset:(BOOL)arg2 error:(id*)arg3 ;
-(void)setConfiguration:(id)arg1 shouldReset:(BOOL)arg2 ;
-(BOOL)_invokeRequiringClient:(BOOL)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)invokeRequiringClient:(BOOL)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(AWAttentionEvent *)lastEvent;
-(BOOL)resetAttentionLostTimeoutWithError:(id*)arg1 ;
-(void)setNotificationHandlerWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)setEventHandlerWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)pollForAttentionWithTimeout:(double)arg1 event:(id*)arg2 error:(id*)arg3 ;
-(BOOL)invalidateRemoteClientWithError:(id*)arg1 ;
-(void)setUnitTestMode:(BOOL)arg1 ;
@end

