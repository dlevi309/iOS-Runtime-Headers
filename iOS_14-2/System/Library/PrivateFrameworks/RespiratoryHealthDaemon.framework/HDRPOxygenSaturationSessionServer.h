/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealthDaemon.framework/RespiratoryHealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKRPOxygenSaturationSessionServerInterface.h>
#import <libobjc.A.dylib/HLOxygenSaturationSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, HLOxygenSaturationSession, NSString;

@interface HDRPOxygenSaturationSessionServer : HDStandardTaskServer <HKRPOxygenSaturationSessionServerInterface, HLOxygenSaturationSessionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	long long _sessionState;
	HLOxygenSaturationSession* _sensorSession;
	double _startTime;
	double _expectedDuration;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) long long sessionState;                                 //@synthesize sessionState=_sessionState - In the implementation block
@property (nonatomic,retain) HLOxygenSaturationSession * sensorSession;              //@synthesize sensorSession=_sensorSession - In the implementation block
@property (assign,nonatomic) double startTime;                                       //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double expectedDuration;                                //@synthesize expectedDuration=_expectedDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(void)connectionInvalidated;
-(long long)sessionState;
-(void)setSessionState:(long long)arg1 ;
-(id)exportedInterface;
-(void)setStartTime:(double)arg1 ;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(double)expectedDuration;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)remote_startWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_abortWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(double)startTime;
-(void)_queue_abortSensorSession;
-(void)_queue_startWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_abortWithCompletion:(/*^block*/id)arg1 ;
-(void)setExpectedDuration:(double)arg1 ;
-(void)oxygenSaturationSession:(id)arg1 didBeginWithStartTime:(double)arg2 expectedDuration:(double)arg3 ;
-(void)oxygenSaturationSession:(id)arg1 didEndForReason:(unsigned long long)arg2 measurement:(id)arg3 ;
-(void)oxygenSaturationSession:(id)arg1 feedbackDidChange:(unsigned long long)arg2 ;
-(void)_queue_notifyClientDidStartWithStartTime:(double)arg1 expectedDuration:(double)arg2 ;
-(void)_queue_notifyClientDidSendFeedback:(unsigned long long)arg1 ;
-(void)_queue_notifyClientDidEndWithReason:(long long)arg1 saturation:(id)arg2 barometricPressure:(id)arg3 averageHeartRate:(id)arg4 averageHeartRateUUID:(id)arg5 error:(id)arg6 ;
-(HLOxygenSaturationSession *)sensorSession;
-(void)setSensorSession:(HLOxygenSaturationSession *)arg1 ;
@end

