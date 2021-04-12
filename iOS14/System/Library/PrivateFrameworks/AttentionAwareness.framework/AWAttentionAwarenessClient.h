/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(AWAttentionEvent *)lastEvent;
-(BOOL)pollForAttentionWithTimeout:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 error:(id*)arg4 ;
-(id)init;
-(id)connect:(BOOL)arg1 ;
-(BOOL)invokeRequiringClient:(BOOL)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(void)serviceInterrupted;
-(BOOL)_invokeRequiringClient:(BOOL)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)cancelPollForAttentionWithError:(id*)arg1 ;
-(AWAttentionAwarenessConfiguration *)configuration;
-(BOOL)invalidateWithError:(id*)arg1 ;
-(void)setConfiguration:(id)arg1 shouldReset:(BOOL)arg2 ;
-(void)notifyEvent:(id)arg1 ;
-(BOOL)invalidateRemoteClientWithError:(id*)arg1 ;
-(BOOL)pollForAttentionWithTimeout:(double)arg1 event:(id*)arg2 error:(id*)arg3 ;
-(void)setUnitTestMode:(BOOL)arg1 ;
-(BOOL)resetAttentionLostTimeoutWithError:(id*)arg1 ;
-(id)unitTestSampler;
-(BOOL)suspendWithError:(id*)arg1 ;
-(void)setNotificationHandlerWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)resumeWithError:(id*)arg1 ;
-(void)notifyPollEventType:(unsigned long long)arg1 event:(id)arg2 ;
-(void)setConfiguration:(AWAttentionAwarenessConfiguration *)arg1 ;
-(void)notify:(unsigned long long)arg1 ;
-(BOOL)setConfiguration:(id)arg1 shouldReset:(BOOL)arg2 error:(id*)arg3 ;
-(void)setEventHandlerWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
@end

