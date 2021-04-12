/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/AirPlayMirroringModule.bundle/AirPlayMirroringModule
*/


@class AVOutputDeviceDiscoverySession, AVOutputDeviceDiscoverySessionAvailableOutputDevices;

@interface MPAVOutputDeviceDiscoverySessionController : NSObject {

	AVOutputDeviceDiscoverySession* _outputDeviceDiscoverySession;
	AVOutputDeviceDiscoverySessionAvailableOutputDevices* _cachedAvailableOutputDevices;
	BOOL _cachedExternalOutputDeviceAvailable;
	long long _startDetailedDiscoveryCount;

}

@property (getter=isExternalOutputDeviceAvailable,readonly) BOOL externalOutputDeviceAvailable; 
@property (readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices * availableOutputDevices; 
-(id)init;
-(void)dealloc;
-(id)initWithDeviceFeatures:(unsigned long long)arg1 ;
-(AVOutputDeviceDiscoverySessionAvailableOutputDevices *)availableOutputDevices;
-(void)_updateCachedAvailableOutputDevices;
-(void)startDetailedDiscovery;
-(void)stopDetailedDiscovery;
-(void)_availableOutputDevicesChangedNotification:(id)arg1 ;
-(BOOL)isExternalOutputDeviceAvailable;
@end

