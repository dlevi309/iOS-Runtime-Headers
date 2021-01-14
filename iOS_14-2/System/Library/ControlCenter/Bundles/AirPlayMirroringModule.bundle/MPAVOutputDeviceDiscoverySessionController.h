/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/AirPlayMirroringModule.bundle/AirPlayMirroringModule
*/


@class AVOutputDeviceDiscoverySession, AVOutputDeviceDiscoverySessionAvailableOutputDevices, NSArray;

@interface MPAVOutputDeviceDiscoverySessionController : NSObject {

	AVOutputDeviceDiscoverySession* _outputDeviceDiscoverySession;
	AVOutputDeviceDiscoverySessionAvailableOutputDevices* _cachedAvailableOutputDevices;
	BOOL _cachedExternalOutputDeviceAvailable;
	long long _startDetailedDiscoveryCount;
	BOOL _needsUpdate;
	NSArray* _filteredDevices;

}

@property (retain) NSArray * filteredDevices;                                                                //@synthesize filteredDevices=_filteredDevices - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                                                               //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (getter=isExternalOutputDeviceAvailable,readonly) BOOL externalOutputDeviceAvailable; 
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(void)_updateOutputDevicesIfNeeded;
-(BOOL)needsUpdate;
-(id)init;
-(void)setFilteredDevices:(NSArray *)arg1 ;
-(void)startDetailedDiscovery;
-(void)_updateOutputDevicesForAvailableOutputDevices:(id)arg1 ;
-(id)_filterAndSortOutputDevices:(id)arg1 ;
-(void)_updateOutputDevicesImmediately;
-(id)availableOutputDevices;
-(id)initWithDeviceFeatures:(unsigned long long)arg1 ;
-(void)stopDetailedDiscovery;
-(void)_availableOutputDevicesChangedNotification:(id)arg1 ;
-(NSArray *)filteredDevices;
-(void)dealloc;
-(BOOL)isExternalOutputDeviceAvailable;
@end

