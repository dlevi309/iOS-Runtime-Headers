/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol OS_dispatch_source;
#import <SpringBoard/SpringBoard-Structs.h>
@class NSRecursiveLock, NSString, NWSystemPathMonitor, NSObject;

@interface SBWiFiManager : NSObject {

	NSRecursiveLock* _lock;
	CFRunLoopRef _callbackRunLoop;
	WiFiManagerClientRef _manager;
	WiFiDeviceClientRef _device;
	NSString* _deviceInterfaceName;
	BOOL _mainThread_devicePresent;
	WiFiNetworkRef _currentNetwork;
	WiFiNetworkRef _previousNetwork;
	BOOL _currentNetworkHasBeenSet;
	BOOL _currentNetworkIsIOSHotspot;
	BOOL _currentNetworkIsIOSHotspotHasBeenSet;
	BOOL _powered;
	BOOL _poweredHasBeenSet;
	int _mainThread_signalStrengthBars;
	int _mainThread_signalStrengthRSSI;
	BOOL _mainThread_signalStrengthHasBeenSet;
	NWSystemPathMonitor* _systemPathMonitor;
	NSObject*<OS_dispatch_source> _primaryInterfaceUpdateTimeoutSource;
	WiFiNetworkRef _primaryInterface;
	BOOL _primaryInterfaceHasBeenSet;
	BOOL _isPrimaryInterface;
	BOOL _isPrimaryInterfaceChanging;

}
+(id)sharedInstance;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPowered:(BOOL)arg1 ;
-(void)_primaryInterfaceChanged:(BOOL)arg1 ;
-(void)_linkDidChange;
-(id)init;
-(void)_updateSignalStrength;
-(id)_wifiInterface;
-(BOOL)wiFiEnabled;
-(int)signalStrengthBars;
-(void)_runManagerCallbackThread;
-(BOOL)isAssociatedToIOSHotspot;
-(void)_updateDevicePresence;
-(BOOL)isAssociated;
-(void)_updateSignalStrengthFromRawRSSI:(int)arg1 andScaledRSSI:(float)arg2 ;
-(id)currentNetworkName;
-(void)_updateWiFiState;
-(CFRunLoopRef)wifiRunLoopRef;
-(void)_lock_spawnManagerCallbackThread;
-(void)_powerStateDidChange;
-(BOOL)_cachedIsAssociated;
-(BOOL)isPowered;
-(int)signalStrengthRSSI;
-(BOOL)isPrimaryInterface;
-(void)_updateWiFiDevice;
-(WiFiManagerClientRef)_lock_manager;
-(void)_lock_setWiFiDevice:(WiFiDeviceClientRef)arg1 ;
-(void)_updateCurrentNetwork;
-(void)setWiFiEnabled:(BOOL)arg1 ;
@end

