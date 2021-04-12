/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRAVRoutingDiscoverySession.h>

@protocol OS_dispatch_queue;
@class NSObject, AVOutputDeviceDiscoverySession, NSString, NSArray;

@interface MRAVConcreteRoutingDiscoverySession : MRAVRoutingDiscoverySession {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	AVOutputDeviceDiscoverySession* _avDiscoverySession;
	unsigned _endpointFeatures;
	unsigned _discoveryMode;
	unsigned _targetAudioSessionID;
	NSString* _routingContextUID;
	NSArray* _availableOutputDevices;
	BOOL _scheduledAvailableEndpointsAndOutputDevicesReload;
	int _airplayActiveNotificationToken;
	BOOL _isLocalDeviceBeingAirplayedTo;

}

@property (nonatomic,readonly) NSArray * availableEndpoints; 
@property (nonatomic,readonly) NSArray * availableOutputDevices; 
-(void)dealloc;
-(void)setDiscoveryMode:(unsigned)arg1 ;
-(id)routingContextUID;
-(unsigned)discoveryMode;
-(BOOL)devicePresenceDetected;
-(NSArray *)availableOutputDevices;
-(void)setRoutingContextUID:(id)arg1 ;
-(void)_availableOutputDevicesDidChangeNotification:(id)arg1 ;
-(unsigned)endpointFeatures;
-(NSArray *)availableEndpoints;
-(id)initWithEndpointFeatures:(unsigned)arg1 ;
-(unsigned)targetAudioSessionID;
-(void)setTargetAudioSessionID:(unsigned)arg1 ;
-(void)_scheduleAvailableEndpointsAndOutputDevicesReload;
-(void)_onQueue_reloadAvailableOutputDevices;
@end

