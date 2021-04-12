/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARRemoteSensorClient.h>
#import <ARKitCore/ARServerConnectionDelegate.h>
#import <ARKitCore/ARSensor.h>

@protocol ARRemoteSensorService, ARSensorDelegate;
@class ARServerConnection, NSString;

@interface ARRemoteSensor : NSObject <ARRemoteSensorClient, ARServerConnectionDelegate, ARSensor> {

	ARServerConnection* _serverConnection;
	id<ARRemoteSensorService> _serviceProxy;
	BOOL _running;
	id<ARSensorDelegate> _delegate;

}

@property (getter=isRunning) BOOL running;                                         //@synthesize running=_running - In the implementation block
@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ARServerConnection * serverConnection;              //@synthesize serverConnection=_serverConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long powerUsage; 
-(void)setRunning:(BOOL)arg1 ;
-(id)initWithListenerEndpoint:(id)arg1 ;
-(ARServerConnection *)serverConnection;
-(id<ARSensorDelegate>)delegate;
-(void)start;
-(id)initWithServiceName:(id)arg1 ;
-(void)stop;
-(void)setDelegate:(id<ARSensorDelegate>)arg1 ;
-(BOOL)isRunning;
-(void)dealloc;
-(unsigned long long)providedDataTypes;
-(id)initWithServerConnection:(id)arg1 ;
-(void)sensorDidFailWithError:(id)arg1 ;
-(void)sensorDidOutputSensorData:(id)arg1 ;
-(void)sensorDidPause;
-(void)sensorDidRestart;
-(void)sensorDidStart;
@end

