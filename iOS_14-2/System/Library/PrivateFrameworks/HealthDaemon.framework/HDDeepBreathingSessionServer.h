/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/_HKDeepBreathingSessionServer.h>

@protocol OS_dispatch_queue;
@class NSObject, HDDaemonTransaction, _HKDeepBreathingSessionConfiguration, NSString;

@interface HDDeepBreathingSessionServer : HDStandardTaskServer <_HKDeepBreathingSessionServer> {

	NSObject*<OS_dispatch_queue> _queue;
	HDDaemonTransaction* _daemonTransaction;
	_HKDeepBreathingSessionConfiguration* _sessionConfiguration;
	long long _serverState;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) HDDaemonTransaction * daemonTransaction;                                         //@synthesize daemonTransaction=_daemonTransaction - In the implementation block
@property (nonatomic,copy,readonly) _HKDeepBreathingSessionConfiguration * sessionConfiguration;              //@synthesize sessionConfiguration=_sessionConfiguration - In the implementation block
@property (assign,nonatomic) long long serverState;                                                           //@synthesize serverState=_serverState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
+(id)taskIdentifier;
+(Class)configurationClass;
+(id)requiredEntitlements;
-(void)connectionInvalidated;
-(void)setServerState:(long long)arg1 ;
-(id)exportedInterface;
-(id)remoteInterface;
-(long long)serverState;
-(_HKDeepBreathingSessionConfiguration *)sessionConfiguration;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_queue_deactivate;
-(void)remote_startGuiding;
-(void)remote_startSessionWithStartDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_endSessionWithEndReason:(long long)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)_queue_beginSessionTransaction;
-(void)_queue_endSessionWithReason:(long long)arg1 ;
-(BOOL)_shouldUseHealthLiteSession;
-(void)_queue_alertClientSessionDidReceiveHeartRate:(double)arg1 ;
-(void)_queue_endSessionTransaction;
-(id)clientWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_queue_alertClientSessionDidReceiveError:(id)arg1 ;
-(HDDaemonTransaction *)daemonTransaction;
-(void)setDaemonTransaction:(HDDaemonTransaction *)arg1 ;
@end

