/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol _HKDeepBreathingSessionLifecycleDelegate, OS_dispatch_queue, NSXPCProxyCreating, _HKDeepBreathingSessionDelegate;
@class _HKDeepBreathingSessionConfiguration, NSObject;

@interface _HKDeepBreathingSession : NSObject {

	_HKDeepBreathingSessionConfiguration* _sessionConfiguration;
	id<_HKDeepBreathingSessionLifecycleDelegate> _lifecycleDelegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	long long _serverState;
	id<NSXPCProxyCreating> _server;
	id<_HKDeepBreathingSessionDelegate> _delegate;

}

@property (__weak) id<_HKDeepBreathingSessionDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) long long serverState; 
@property (readonly) _HKDeepBreathingSessionConfiguration * sessionConfiguration;              //@synthesize sessionConfiguration=_sessionConfiguration - In the implementation block
+(id)_clientInterface;
+(id)sessionWithConfiguration:(id)arg1 lifecycleDelegate:(id)arg2 ;
+(id)_serverInterface;
-(id)description;
-(id<_HKDeepBreathingSessionDelegate>)delegate;
-(void)setDelegate:(id<_HKDeepBreathingSessionDelegate>)arg1 ;
-(id)_sessionConfiguration;
-(id)_serverProxy;
-(_HKDeepBreathingSessionConfiguration *)sessionConfiguration;
-(void)_attachServerWithClientQueue:(id)arg1 healthStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_connectionDidEncounterError:(id)arg1 ;
-(id)_initWithSessionConfiguration:(id)arg1 lifecycleDelegate:(id)arg2 ;
-(void)sessionDidReceiveError:(id)arg1 ;
-(void)sessionDidReceiveHeartRate:(double)arg1 ;
-(void)startSessionWithStartDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startGuiding;
-(void)endSessionWithEndReason:(long long)arg1 ;
-(id)_serverWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_queue_transitionToServerState:(long long)arg1 ;
-(BOOL)_isServerAttached;
-(long long)serverState;
-(void)_queue_deactivate;
-(void)_queue_alertDelegateDidEncounterError:(id)arg1 ;
-(BOOL)_queue_isServerAttached;
-(void)_queue_alertDelegateDidReceiveHeartRate:(double)arg1 ;
-(id)_lifecycleDelegate;
@end

