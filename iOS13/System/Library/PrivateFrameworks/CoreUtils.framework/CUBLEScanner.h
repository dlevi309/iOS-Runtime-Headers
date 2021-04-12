/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class CBCentralManager, NSMutableDictionary, NSDictionary, CUSystemMonitor, NSObject, NSString;

@interface CUBLEScanner : NSObject <CBCentralManagerDelegate> {

	BOOL _activateCalled;
	CBCentralManager* _centralManager;
	BOOL _changesPending;
	NSMutableDictionary* _devices;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	int _rssiThreshold;
	NSDictionary* _scanParametersCurrent;
	BOOL _scannerStartCalled;
	CUSystemMonitor* _systemMonitor;
	LogCategory* _ucat;
	int _bluetoothState;
	unsigned _changeFlags;
	unsigned _scanFlags;
	int _scanRate;
	/*^block*/id _bluetoothStateChangedHandler;
	/*^block*/id _deviceFoundHandler;
	/*^block*/id _deviceLostHandler;
	/*^block*/id _deviceChangedHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;

}

@property (assign,nonatomic) int bluetoothState;                                      //@synthesize bluetoothState=_bluetoothState - In the implementation block
@property (nonatomic,copy) id bluetoothStateChangedHandler;                           //@synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler - In the implementation block
@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (nonatomic,copy) id deviceFoundHandler;                                     //@synthesize deviceFoundHandler=_deviceFoundHandler - In the implementation block
@property (nonatomic,copy) id deviceLostHandler;                                      //@synthesize deviceLostHandler=_deviceLostHandler - In the implementation block
@property (nonatomic,copy) id deviceChangedHandler;                                   //@synthesize deviceChangedHandler=_deviceChangedHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (assign) int rssiThreshold; 
@property (assign,nonatomic) unsigned scanFlags;                                      //@synthesize scanFlags=_scanFlags - In the implementation block
@property (assign,nonatomic) int scanRate;                                            //@synthesize scanRate=_scanRate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_update;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(void)setDeviceChangedHandler:(id)arg1 ;
-(void)setDeviceLostHandler:(id)arg1 ;
-(void)_invalidated;
-(void)activate;
-(unsigned)scanFlags;
-(void)setScanFlags:(unsigned)arg1 ;
-(int)scanRate;
-(void)setScanRate:(int)arg1 ;
-(void)setChangeFlags:(unsigned)arg1 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(int)rssiThreshold;
-(void)setRssiThreshold:(int)arg1 ;
-(void)_updateIfNeededWithBlock:(/*^block*/id)arg1 ;
-(id)_scanParameters;
-(id)_scanParametersSummary:(id)arg1 ;
-(BOOL)_shouldScan;
-(void)_stopScanIfNeededWithReason:(const char*)arg1 ;
-(void)_updateScanRules:(id*)arg1 payloadType:(unsigned char)arg2 rssiThreshold:(int)arg3 ;
-(int)bluetoothState;
-(void)setBluetoothState:(int)arg1 ;
-(id)bluetoothStateChangedHandler;
-(void)setBluetoothStateChangedHandler:(id)arg1 ;
-(unsigned)changeFlags;
-(id)deviceFoundHandler;
-(id)deviceLostHandler;
-(id)deviceChangedHandler;
@end

