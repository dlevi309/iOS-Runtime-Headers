/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@protocol OS_dispatch_queue;
#import <Rapport/Rapport-Structs.h>
@class NSData, NSMutableDictionary, SFDeviceDiscovery, CUMobileDeviceDiscovery, CUWiFiScanner, NSSet, NSObject, NSString;

@interface RPLegacyDeviceDiscovery : NSObject {

	BOOL _activateCalled;
	BOOL _activateInProgress;
	BOOL _activateCompleted;
	NSData* _blePayloadFilterData;
	NSData* _blePayloadFilterMask;
	NSMutableDictionary* _devices;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	BOOL _verifyDevices;
	SFDeviceDiscovery* _bleDiscovery;
	BonjourBrowserRef _bonjourBrowser;
	CUMobileDeviceDiscovery* _mdDiscovery;
	BOOL _wifiAirPlayWAC;
	CUWiFiScanner* _wifiScanner;
	unsigned char _deviceActionType;
	BOOL _scanCache;
	BOOL _targetUserSession;
	unsigned _changeFlags;
	int _rssiThreshold;
	unsigned _scanRate;
	unsigned _scanState;
	unsigned _wifiScanFlags;
	NSSet* _deviceFilter;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _serviceType;
	double _timeout;
	NSString* _wifiSSID;
	/*^block*/id _deviceFoundHandler;
	/*^block*/id _deviceLostHandler;
	/*^block*/id _deviceChangedHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _scanStateChangedHandler;
	/*^block*/id _timeoutHandler;

}

@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (assign,nonatomic) unsigned char deviceActionType;                          //@synthesize deviceActionType=_deviceActionType - In the implementation block
@property (nonatomic,copy) NSSet * deviceFilter;                                      //@synthesize deviceFilter=_deviceFilter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) int rssiThreshold;                                       //@synthesize rssiThreshold=_rssiThreshold - In the implementation block
@property (assign,nonatomic) BOOL scanCache;                                          //@synthesize scanCache=_scanCache - In the implementation block
@property (assign,nonatomic) unsigned scanRate;                                       //@synthesize scanRate=_scanRate - In the implementation block
@property (nonatomic,readonly) unsigned scanState;                                    //@synthesize scanState=_scanState - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) BOOL targetUserSession;                                  //@synthesize targetUserSession=_targetUserSession - In the implementation block
@property (assign,nonatomic) double timeout;                                          //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) unsigned wifiScanFlags;                                  //@synthesize wifiScanFlags=_wifiScanFlags - In the implementation block
@property (nonatomic,copy) NSString * wifiSSID;                                       //@synthesize wifiSSID=_wifiSSID - In the implementation block
@property (nonatomic,copy) id deviceFoundHandler;                                     //@synthesize deviceFoundHandler=_deviceFoundHandler - In the implementation block
@property (nonatomic,copy) id deviceLostHandler;                                      //@synthesize deviceLostHandler=_deviceLostHandler - In the implementation block
@property (nonatomic,copy) id deviceChangedHandler;                                   //@synthesize deviceChangedHandler=_deviceChangedHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id scanStateChangedHandler;                                //@synthesize scanStateChangedHandler=_scanStateChangedHandler - In the implementation block
@property (nonatomic,copy) id timeoutHandler;                                         //@synthesize timeoutHandler=_timeoutHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)_invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(NSString *)serviceType;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(void)setDeviceChangedHandler:(id)arg1 ;
-(void)setDeviceLostHandler:(id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_cleanup;
-(void)_invalidated;
-(void)_interrupted;
-(void)setServiceType:(NSString *)arg1 ;
-(unsigned)scanRate;
-(void)setScanRate:(unsigned)arg1 ;
-(void)setChangeFlags:(unsigned)arg1 ;
-(int)rssiThreshold;
-(void)setRssiThreshold:(int)arg1 ;
-(unsigned)changeFlags;
-(id)deviceFoundHandler;
-(id)deviceLostHandler;
-(id)deviceChangedHandler;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_lostAllDevices;
-(int)_bonjourStart;
-(void)_bonjourHandleEventType:(unsigned)arg1 info:(id)arg2 ;
-(void)_bonjourHandleAddOrUpdateDevice:(id)arg1 ;
-(void)_bonjourHandleRemoveDevice:(id)arg1 ;
-(void)setDeviceFilter:(NSSet *)arg1 ;
-(void)setDeviceActionType:(unsigned char)arg1 ;
-(BOOL)targetUserSession;
-(void)setTargetUserSession:(BOOL)arg1 ;
-(unsigned char)deviceActionType;
-(void)setScanCache:(BOOL)arg1 ;
-(NSSet *)deviceFilter;
-(BOOL)scanCache;
-(unsigned)scanState;
-(id)scanStateChangedHandler;
-(void)setScanStateChangedHandler:(id)arg1 ;
-(id)timeoutHandler;
-(void)setTimeoutHandler:(id)arg1 ;
-(NSString *)wifiSSID;
-(void)setWifiSSID:(NSString *)arg1 ;
-(int)_bleStart;
-(int)_mdStart;
-(int)_wifiStart;
-(void)_bleHandleDeviceFound:(id)arg1 ;
-(void)_bleHandleDeviceLost:(id)arg1 ;
-(void)_bleHandleDeviceChanged:(id)arg1 changes:(unsigned)arg2 ;
-(void)_foundDevice:(id)arg1 ;
-(void)_lostDeviceByIdentifier:(id)arg1 ;
-(void)_mdHandleDeviceFound:(id)arg1 ;
-(void)_mdHandleDeviceLost:(id)arg1 ;
-(void)_mdHandleDeviceChanged:(id)arg1 changes:(unsigned)arg2 ;
-(void)_wifiHandleDeviceFound:(id)arg1 ;
-(void)_wifiHandleDeviceLost:(id)arg1 ;
-(void)_wifiHandleDeviceChanged:(id)arg1 changes:(unsigned)arg2 ;
-(void)setBLEPayloadFilterData:(id)arg1 mask:(id)arg2 ;
-(unsigned)wifiScanFlags;
-(void)setWifiScanFlags:(unsigned)arg1 ;
@end

