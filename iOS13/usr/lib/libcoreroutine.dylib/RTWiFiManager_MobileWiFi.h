/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTWiFiManager.h>

@class NSArray, NSMutableDictionary;

@interface RTWiFiManager_MobileWiFi : RTWiFiManager {

	WiFiManagerClientRef _wifiManager;
	NSArray* _devices;
	NSMutableDictionary* _accessPointForInterface;

}

@property (assign,nonatomic) WiFiManagerClientRef wifiManager;                           //@synthesize wifiManager=_wifiManager - In the implementation block
@property (nonatomic,retain) NSArray * devices;                                          //@synthesize devices=_devices - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessPointForInterface;              //@synthesize accessPointForInterface=_accessPointForInterface - In the implementation block
+(id)defaultScanRequest;
+(id)scanRequestWithType:(long long)arg1 dwellTime:(long long)arg2 channels:(id)arg3 lowPriority:(BOOL)arg4 ;
-(NSArray *)devices;
-(WiFiManagerClientRef)wifiManager;
-(void)setWifiManager:(WiFiManagerClientRef)arg1 ;
-(void)_setup;
-(void)setDevices:(NSArray *)arg1 ;
-(void)_shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)_scheduleScan;
-(void)_cancelScan;
-(void)setAccessPointForInterface:(NSMutableDictionary *)arg1 ;
-(void)_establishConnectionToWiFiManager;
-(void)_destroyConnectionToWiFiManager;
-(void)_setRegisteredForScanUpdateCallbacks:(BOOL)arg1 ;
-(void)_setRegisteredForExtendedLinkCallbacks:(BOOL)arg1 ;
-(void)_setRegisteredForPowerCallbacks:(BOOL)arg1 ;
-(void)_pollAccessPoints;
-(void)_pollManagerPowerStatus;
-(void)_handleWiFiDeviceClientPowerCallback:(WiFiDeviceClientRef)arg1 ;
-(void)_handleWiFiDeviceClientExtendedLinkCallback:(WiFiDeviceClientRef)arg1 eventData:(id)arg2 ;
-(NSMutableDictionary *)accessPointForInterface;
-(void)_handleScanResultsCallback:(id)arg1 error:(int)arg2 ;
-(void)handleWiFiDeviceClientPowerCallback:(WiFiDeviceClientRef)arg1 ;
-(void)handleWiFiDeviceClientExtendedLinkCallback:(WiFiDeviceClientRef)arg1 eventData:(id)arg2 ;
-(void)handleWiFiDeviceClientScanUpdateCallback:(WiFiDeviceClientRef)arg1 scanRequest:(id)arg2 scanResults:(id)arg3 error:(int)arg4 ;
-(void)handleWiFiDeviceClientScanCallback:(WiFiDeviceClientRef)arg1 scanResults:(id)arg2 error:(int)arg3 ;
@end

