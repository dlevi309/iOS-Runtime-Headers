/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARDaemonService.h>
#import <ARKitCore/ARRemoteSensorService.h>
#import <ARKitCore/ARSensorDelegate.h>

@protocol ARRemoteSensorClient, ARSensor;
@class NSString;

@interface ARSensorService : ARDaemonService <ARRemoteSensorService, ARSensorDelegate> {

	id<ARRemoteSensorClient> _clientProxy;
	id<ARSensor> _sensor;

}

@property (nonatomic,retain) id<ARRemoteSensorClient> clientProxy;              //@synthesize clientProxy=_clientProxy - In the implementation block
@property (nonatomic,retain) id<ARSensor> sensor;                               //@synthesize sensor=_sensor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnection:(id)arg1 ;
-(void)start;
-(id<ARSensor>)sensor;
-(void)stop;
-(id<ARRemoteSensorClient>)clientProxy;
-(void)setClientProxy:(id<ARRemoteSensorClient>)arg1 ;
-(void)sensor:(id)arg1 didOutputSensorData:(id)arg2 ;
-(void)setSensor:(id<ARSensor>)arg1 ;
-(void)providedDataTypesWithReply:(/*^block*/id)arg1 ;
-(void)sensor:(id)arg1 didFailWithError:(id)arg2 ;
-(void)sensorDidStart:(id)arg1 ;
-(void)sensorDidPause:(id)arg1 ;
-(void)sensorDidRestart:(id)arg1 ;
@end

