/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRAVRoutingDiscoverySession.h>

@protocol OS_dispatch_queue;
@class NSObject, AVOutputDeviceDiscoverySession, NSString, NSArray;

@interface MRAVConcreteRoutingDiscoverySession : MRAVRoutingDiscoverySession {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _reloadQueue;
	AVOutputDeviceDiscoverySession* _avDiscoverySession;
	unsigned _endpointFeatures;
	unsigned _discoveryMode;
	unsigned _targetAudioSessionID;
	NSString* _routingContextUID;
	NSArray* _availableOutputDevices;
	NSArray* _virtualOutputDevices;
	BOOL _scheduledAvailableOutputDevicesReload;
	int _airplayActiveNotificationToken;
	BOOL _isLocalDeviceBeingAirplayedTo;

}

@property (nonatomic,retain) NSArray * availableEndpoints; 
@property (nonatomic,retain) NSArray * availableOutputDevices; 
@property (nonatomic,readonly) NSArray * virtualOutputDevices;              //@synthesize virtualOutputDevices=_virtualOutputDevices - In the implementation block
+(id)daemonVirtualDevices;
+(void)setDaemonVirtualDevices:(id)arg1 ;
-(BOOL)devicePresenceDetected;
-(void)setRoutingContextUID:(id)arg1 ;
-(id)routingContextUID;
-(BOOL)_shouldCreateClusterOutputDevices;
-(unsigned)discoveryMode;
-(void)_scheduleAvailableOutputDevicesReload;
-(void)_onQueue_reload;
-(void)_scheduleReload;
-(NSArray *)virtualOutputDevices;
-(void)_availableOutputDevicesDidChangeNotification:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)description;
-(void)_onQueue_reloadAvailableOutputDevices;
-(void)setTargetAudioSessionID:(unsigned)arg1 ;
-(unsigned)targetAudioSessionID;
-(NSArray *)availableEndpoints;
-(unsigned)endpointFeatures;
-(NSArray *)availableOutputDevices;
-(void)setAvailableOutputDevices:(NSArray *)arg1 ;
-(void)setDiscoveryMode:(unsigned)arg1 ;
-(void)dealloc;
@end

