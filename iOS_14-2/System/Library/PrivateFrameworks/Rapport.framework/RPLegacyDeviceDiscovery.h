/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setChangeFlags:(unsigned)arg1 ;
-(void)setScanRate:(unsigned)arg1 ;
-(void)setDeviceChangedHandler:(id)arg1 ;
-(BOOL)scanCache;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(id)deviceChangedHandler;
-(int)rssiThreshold;
-(id)deviceFoundHandler;
-(void)setDeviceLostHandler:(id)arg1 ;
-(id)deviceLostHandler;
-(void)_lostAllDevices;
-(unsigned)scanState;
-(unsigned char)deviceActionType;
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setRssiThreshold:(int)arg1 ;
-(unsigned)changeFlags;
-(void)_cleanup;
-(void)_bonjourHandleRemoveDevice:(id)arg1 ;
-(BOOL)targetUserSession;
-(void)setTargetUserSession:(BOOL)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setTimeoutHandler:(id)arg1 ;
-(double)timeout;
-(void)setDeviceActionType:(unsigned char)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setScanCache:(BOOL)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)description;
-(void)_bonjourHandleEventType:(unsigned)arg1 info:(id)arg2 ;
-(void)setDeviceFilter:(NSSet *)arg1 ;
-(void)_interrupted;
-(int)_bonjourStart;
-(unsigned)scanRate;
-(void)_invalidated;
-(void)invalidate;
-(void)setScanStateChangedHandler:(id)arg1 ;
-(id)scanStateChangedHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSString *)serviceType;
-(void)setWifiSSID:(NSString *)arg1 ;
-(id)invalidationHandler;
-(int)_mdStart;
-(id)timeoutHandler;
-(NSSet *)deviceFilter;
-(id)interruptionHandler;
-(void)_bonjourHandleAddOrUpdateDevice:(id)arg1 ;
-(void)dealloc;
-(NSString *)wifiSSID;
-(int)_bleStart;
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

