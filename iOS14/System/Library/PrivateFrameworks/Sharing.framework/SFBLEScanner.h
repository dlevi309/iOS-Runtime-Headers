/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/WPAWDLDelegate.h>
#import <libobjc.A.dylib/WPNearbyDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class CBCentralManager, NSMutableDictionary, NSObject, CURetrier, NSSet, NSData, NSArray, WPAWDL, WPNearby, WPPairing, SFBLERecorder, NSString;

@interface SFBLEScanner : NSObject <CBCentralManagerDelegate, WPAWDLDelegate, WPNearbyDelegate> {

	BOOL _activateCalled;
	BOOL _activated;
	BOOL _activeScan;
	BTSessionImplRef _btSession;
	BOOL _btStarted;
	CBCentralManager* _centralManager;
	NSMutableDictionary* _devices;
	BOOL _invalidateCalled;
	NSObject*<OS_dispatch_source> _lostTimer;
	BOOL _needDups;
	long long _payloadType;
	BOOL _poweredOffSleep;
	int _rescanSecondsActual;
	NSObject*<OS_dispatch_source> _rescanTimer;
	_sFILE* _rssiEventLogFile;
	BOOL _scanStarted;
	CURetrier* _startRetrier;
	BOOL _timeoutFired;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSSet* _trackedPeersApplied;
	LogCategory* _ucat;
	BOOL _updating;
	BOOL _scanParamActive;
	BOOL _scanParamCache;
	BOOL _scanParamDups;
	NSData* _scanParamFilterData;
	NSData* _scanParamFilterMask;
	long long _scanParamInterval;
	long long _scanParamWindow;
	long long _scanParamMode;
	NSArray* _scanParamPeers;
	long long _scanParamRSSI;
	WPAWDL* _wpAirDrop;
	WPNearby* _wpNearby;
	long long _wpNearbyType;
	WPPairing* _wpPairing;
	BOOL _rssiLog;
	BOOL _rssiLogStdOut;
	BOOL _scanCache;
	unsigned _changeFlags;
	/*^block*/id _bluetoothStateChangedHandler;
	NSArray* _deviceFilter;
	/*^block*/id _deviceFoundHandler;
	/*^block*/id _deviceLostHandler;
	/*^block*/id _deviceChangedHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSData* _payloadFilterData;
	NSData* _payloadFilterMask;
	double _rescanInterval;
	SFBLERecorder* _recorder;
	long long _rssiThreshold;
	long long _scanInterval;
	long long _scanRate;
	long long _scanState;
	/*^block*/id _scanStateChangedHandler;
	long long _scanWindow;
	double _timeout;
	/*^block*/id _timeoutHandler;
	NSSet* _trackedPeers;

}

@property (nonatomic,copy) id bluetoothStateChangedHandler;                           //@synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler - In the implementation block
@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (nonatomic,copy) NSArray * deviceFilter;                                    //@synthesize deviceFilter=_deviceFilter - In the implementation block
@property (nonatomic,copy) id deviceFoundHandler;                                     //@synthesize deviceFoundHandler=_deviceFoundHandler - In the implementation block
@property (nonatomic,copy) id deviceLostHandler;                                      //@synthesize deviceLostHandler=_deviceLostHandler - In the implementation block
@property (nonatomic,copy) id deviceChangedHandler;                                   //@synthesize deviceChangedHandler=_deviceChangedHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy,readonly) NSData * payloadFilterData;                       //@synthesize payloadFilterData=_payloadFilterData - In the implementation block
@property (nonatomic,copy,readonly) NSData * payloadFilterMask;                       //@synthesize payloadFilterMask=_payloadFilterMask - In the implementation block
@property (assign,nonatomic) double rescanInterval;                                   //@synthesize rescanInterval=_rescanInterval - In the implementation block
@property (assign,nonatomic) BOOL rssiLog;                                            //@synthesize rssiLog=_rssiLog - In the implementation block
@property (assign,nonatomic) BOOL rssiLogStdOut;                                      //@synthesize rssiLogStdOut=_rssiLogStdOut - In the implementation block
@property (nonatomic,retain) SFBLERecorder * recorder;                                //@synthesize recorder=_recorder - In the implementation block
@property (assign,nonatomic) long long rssiThreshold;                                 //@synthesize rssiThreshold=_rssiThreshold - In the implementation block
@property (assign,nonatomic) BOOL scanCache;                                          //@synthesize scanCache=_scanCache - In the implementation block
@property (assign,nonatomic) long long scanInterval;                                  //@synthesize scanInterval=_scanInterval - In the implementation block
@property (assign,nonatomic) long long scanRate;                                      //@synthesize scanRate=_scanRate - In the implementation block
@property (nonatomic,readonly) long long scanState;                                   //@synthesize scanState=_scanState - In the implementation block
@property (nonatomic,copy) id scanStateChangedHandler;                                //@synthesize scanStateChangedHandler=_scanStateChangedHandler - In the implementation block
@property (assign,nonatomic) long long scanWindow;                                    //@synthesize scanWindow=_scanWindow - In the implementation block
@property (assign,nonatomic) double timeout;                                          //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) id timeoutHandler;                                         //@synthesize timeoutHandler=_timeoutHandler - In the implementation block
@property (nonatomic,copy) NSSet * trackedPeers;                                      //@synthesize trackedPeers=_trackedPeers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setChangeFlags:(unsigned)arg1 ;
-(void)setScanRate:(long long)arg1 ;
-(void)setDeviceChangedHandler:(id)arg1 ;
-(BOOL)scanCache;
-(long long)scanInterval;
-(id)modelWithProductID:(unsigned short)arg1 ;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(void)performUpdate:(/*^block*/id)arg1 ;
-(id)deviceChangedHandler;
-(long long)rssiThreshold;
-(id)bluetoothStateChangedHandler;
-(id)deviceFoundHandler;
-(void)setDeviceLostHandler:(id)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(id)deviceLostHandler;
-(long long)scanState;
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(unsigned)statusToHeadsetStatus:(unsigned char)arg1 forProductID:(unsigned short)arg2 ;
-(void)setRssiThreshold:(long long)arg1 ;
-(unsigned)changeFlags;
-(void)nearbyDidUpdateState:(id)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)foundNearbyDevice:(id)arg1 data:(id)arg2 peerInfo:(id)arg3 ;
-(void)setBluetoothStateChangedHandler:(id)arg1 ;
-(void)_invokeBlockActivateSafe:(/*^block*/id)arg1 ;
-(void)_rssiLogClose;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_nearbyParseNearbyInfoPtr:(const char*)arg1 end:(const char*)arg2 fields:(id)arg3 ;
-(void)_btSessionEnsureStopped;
-(void)nearby:(id)arg1 didStartScanningForType:(long long)arg2 ;
-(BOOL)_needDups;
-(void)_recordDevice:(id)arg1 data:(id)arg2 rssi:(id)arg3 info:(id)arg4 ;
-(void)_nearbyParseManufacturerData:(id)arg1 fields:(id)arg2 ;
-(void)nearby:(id)arg1 didFailToStartScanningForType:(long long)arg2 WithError:(id)arg3 ;
-(void)pairingStartedScanning:(id)arg1 ;
-(void)foundPeripheralDevice:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3 ;
-(void)foundPairingDevice:(id)arg1 payload:(id)arg2 rssi:(id)arg3 peerInfo:(id)arg4 ;
-(void)setRssiLogStdOut:(BOOL)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(double)rescanInterval;
-(void)awdl:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
-(void)parseStatus3:(unsigned char)arg1 productID:(unsigned)arg2 caseLEDColor:(char*)arg3 caseLEDStatus:(char*)arg4 ;
-(void)_poweredOn;
-(void)_poweredOff;
-(void)_timeoutTimerFired;
-(BOOL)_btSessionUsable;
-(void)setRecorder:(SFBLERecorder *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(void)foundAWDLDevice:(id)arg1 rssi:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setTimeoutHandler:(id)arg1 ;
-(NSData *)payloadFilterData;
-(double)timeout;
-(void)setScanInterval:(long long)arg1 ;
-(void)nearby:(id)arg1 didLosePeer:(id)arg2 type:(long long)arg3 ;
-(void)_removeAllDevicesWithReason:(id)arg1 ;
-(void)setScanWindow:(long long)arg1 ;
-(void)_rescanLostFired;
-(BOOL)pairingUpdatePairedInfoMB:(id)arg1 fields:(id)arg2 bleDevice:(id)arg3 ;
-(NSData *)payloadFilterMask;
-(void)setScanCache:(BOOL)arg1 ;
-(void)_restartIfNeeded:(BOOL)arg1 ;
-(void)_startTimeoutIfNeeded;
-(void)_updateTrackedPeers;
-(NSString *)description;
-(id)pairingParsePayload:(id)arg1 identifier:(id)arg2 bleDevice:(id)arg3 ;
-(void)pairing:(id)arg1 foundDevice:(id)arg2 payload:(id)arg3 rssi:(id)arg4 peerInfo:(id)arg5 ;
-(void)setPayloadFilterData:(id)arg1 mask:(id)arg2 ;
-(void)awdlDidUpdateState:(id)arg1 ;
-(BOOL)_updateCounterpart:(id)arg1 ;
-(void)setDeviceFilter:(NSArray *)arg1 ;
-(BOOL)pairingUpdatePairedInfo:(id)arg1 fields:(id)arg2 bleDevice:(id)arg3 ;
-(void)_watchSetupParseName:(id)arg1 fields:(id)arg2 ;
-(void)_restartIfNeeded;
-(BOOL)_needActiveScan;
-(long long)scanWindow;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(long long)scanRate;
-(int)_btSessionEnsureStarted;
-(SFBLERecorder *)recorder;
-(void)pairingDidUpdateState:(id)arg1 ;
-(void)setRescanInterval:(double)arg1 ;
-(void)invalidate;
-(void)setScanStateChangedHandler:(id)arg1 ;
-(void)_rescanTimerFired;
-(id)scanStateChangedHandler;
-(NSSet *)trackedPeers;
-(void)awdl:(id)arg1 foundDevice:(id)arg2 rssi:(id)arg3 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)pairing:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
-(BOOL)rssiLog;
-(void)_rssiLogOpen;
-(id)invalidationHandler;
-(void)nearby:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4 peerInfo:(id)arg5 ;
-(BOOL)rssiLogStdOut;
-(void)_foundDevice:(id)arg1 advertisementData:(id)arg2 rssi:(long long)arg3 fields:(id)arg4 ;
-(id)timeoutHandler;
-(NSArray *)deviceFilter;
-(void)awdlStartedScanning:(id)arg1 ;
-(void)setRssiLog:(BOOL)arg1 ;
-(void)_nearbyParseNearbyActionPtr:(const char*)arg1 end:(const char*)arg2 fields:(id)arg3 ;
-(void)dealloc;
-(void)_updateRescanTimer;
-(void)setTrackedPeers:(NSSet *)arg1 ;
@end

