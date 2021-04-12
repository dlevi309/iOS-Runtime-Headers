/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/_HKDeepBreathingSessionClient.h>

@protocol OS_dispatch_queue, _HKDeepBreathingSessionDelegate;
@class NSObject, HKTaskServerProxyProvider, _HKDeepBreathingSessionConfiguration, NSString;

@interface _HKDeepBreathingSession : NSObject <_HKXPCExportable, _HKDeepBreathingSessionClient> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	long long _serverState;
	HKTaskServerProxyProvider* _proxyProvider;
	id<_HKDeepBreathingSessionDelegate> _delegate;

}

@property (__weak) id<_HKDeepBreathingSessionDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) long long serverState; 
@property (copy,readonly) _HKDeepBreathingSessionConfiguration * sessionConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(void)fetchProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)connectionInvalidated;
-(id<_HKDeepBreathingSessionDelegate>)delegate;
-(id)exportedInterface;
-(id)remoteInterface;
-(long long)serverState;
-(void)setDelegate:(id<_HKDeepBreathingSessionDelegate>)arg1 ;
-(_HKDeepBreathingSessionConfiguration *)sessionConfiguration;
-(NSString *)description;
-(id)initWithHealthStore:(id)arg1 configuration:(id)arg2 ;
-(void)_queue_deactivate;
-(void)_queue_transitionToServerState:(long long)arg1 ;
-(BOOL)_isServerAttached;
-(void)_queue_alertDelegateDidEncounterError:(id)arg1 ;
-(BOOL)_queue_isServerAttached;
-(void)endSessionWithEndReason:(long long)arg1 ;
-(void)_queue_alertDelegateDidReceiveHeartRate:(double)arg1 ;
-(void)startGuiding;
-(void)clientRemote_sessionDidReceiveError:(id)arg1 ;
-(void)clientRemote_sessionDidReceiveHeartRate:(double)arg1 ;
-(void)startSessionWithStartDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_connectionDidEncounterError:(id)arg1 ;
@end

