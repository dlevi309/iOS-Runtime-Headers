/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/CBPeripheralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSData, CBCentralManager, CBPeripheralManager, NSMutableDictionary, NSMutableArray, NSObject, NSString;

@interface CUBluetoothClient : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate> {

	NSData* _btAdvertisingAddress;
	CBCentralManager* _btCentralManager;
	BOOL _btCentralManagerNeeded;
	CBPeripheralManager* _btPeripheralManager;
	BOOL _btPeripheralManagerNeeded;
	SCD_Struct_CU4* _btAccessoryCallbacks;
	BOOL _btAccessoryEventsNeeded;
	BOOL _btAccessoryEventsRegistered;
	BTAccessoryManagerImplRef _btAccessoryManager;
	BOOL _btConnectionDevicesInitialized;
	BOOL _btConnectionEventsNeeded;
	BTSessionImplRef _btSession;
	BOOL _btSessionAddedServiceCallback;
	BOOL _btSessionAttaching;
	BOOL _btSessionNeeded;
	BOOL _btSessionStarted;
	BTLocalDeviceImplRef _btLocalDevice;
	NSData* _btLocalDeviceAddr;
	BOOL _btLocalDeviceAddrNeeded;
	SCD_Struct_CU8* _btLocalDeviceCallbacks;
	BOOL _btLocalDeviceCallbacksNeeded;
	BOOL _btLocalDeviceCallbacksRegistered;
	BTPairingAgentImplRef _btPairingAgent;
	BOOL _btPairingAgentNeeded;
	BOOL _btPairingAgentStarted;
	NSMutableDictionary* _btConnectedDevices;
	NSMutableDictionary* _btPairedDevices;
	BOOL _btPairedDevicesInitialized;
	NSMutableArray* _findDeviceRequests;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	int _bluetoothState;
	unsigned _flags;
	unsigned _statusFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _label;
	/*^block*/id _bluetoothAddressChangedHandler;
	/*^block*/id _bluetoothStateChangedHandler;
	/*^block*/id _deviceConnectedHandler;
	/*^block*/id _deviceDisconnectedHandler;
	/*^block*/id _devicePairedHandler;
	/*^block*/id _deviceUnpairedHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (assign,nonatomic) int bluetoothState;                                      //@synthesize bluetoothState=_bluetoothState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned flags;                                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned statusFlags;                                    //@synthesize statusFlags=_statusFlags - In the implementation block
@property (nonatomic,copy) id bluetoothAddressChangedHandler;                         //@synthesize bluetoothAddressChangedHandler=_bluetoothAddressChangedHandler - In the implementation block
@property (nonatomic,copy) id bluetoothStateChangedHandler;                           //@synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler - In the implementation block
@property (nonatomic,copy) id deviceConnectedHandler;                                 //@synthesize deviceConnectedHandler=_deviceConnectedHandler - In the implementation block
@property (nonatomic,copy) id deviceDisconnectedHandler;                              //@synthesize deviceDisconnectedHandler=_deviceDisconnectedHandler - In the implementation block
@property (nonatomic,copy) id devicePairedHandler;                                    //@synthesize devicePairedHandler=_devicePairedHandler - In the implementation block
@property (nonatomic,copy) id deviceUnpairedHandler;                                  //@synthesize deviceUnpairedHandler=_deviceUnpairedHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(unsigned)flags;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)statusFlags;
-(void)setFlags:(unsigned)arg1 ;
-(void)_invalidated;
-(void)_interrupted;
-(void)activate;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(int)bluetoothState;
-(void)setBluetoothState:(int)arg1 ;
-(id)bluetoothStateChangedHandler;
-(void)setBluetoothStateChangedHandler:(id)arg1 ;
-(void)findDeviceByAddress:(SCD_Struct_CU3)arg1 completion:(/*^block*/id)arg2 ;
-(void)_findDeviceByAddress:(SCD_Struct_CU3)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processFindDeviceRequests;
-(void)_btEnsureStarted;
-(void)_btEnsureStopped;
-(void)_btAccessoryPlacementChanged:(BTAccessoryManagerImplRef)arg1 device:(BTDeviceImplRef)arg2 ;
-(id)_createCUBluetoothDeviceWithBTDevice:(BTDeviceImplRef)arg1 ;
-(void)_handleBluetoothAddressChanged;
-(void)_handleConnectedDevicesInit;
-(void)_handleDeviceConnected:(BTDeviceImplRef)arg1 ;
-(void)_handleDeviceDisconnected:(BTDeviceImplRef)arg1 ;
-(void)_handlePairingStatusChanged;
-(void)updateDevice:(id)arg1 btDevice:(BTDeviceImplRef)arg2 ;
-(void)updateStatusFlags;
-(void)setStatusFlags:(unsigned)arg1 ;
-(id)bluetoothAddressChangedHandler;
-(void)setBluetoothAddressChangedHandler:(id)arg1 ;
-(id)deviceConnectedHandler;
-(void)setDeviceConnectedHandler:(id)arg1 ;
-(id)deviceDisconnectedHandler;
-(void)setDeviceDisconnectedHandler:(id)arg1 ;
-(id)devicePairedHandler;
-(void)setDevicePairedHandler:(id)arg1 ;
-(id)deviceUnpairedHandler;
-(void)setDeviceUnpairedHandler:(id)arg1 ;
@end

