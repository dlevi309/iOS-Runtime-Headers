/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _btConnectionEventsNeeded;
	BOOL _btConnectionDevicesInitialized;
	SCD_Struct_CU7* _btAccessoryCallbacks;
	BOOL _btAccessoryEventsNeeded;
	BOOL _btAccessoryEventsRegistered;
	BTAccessoryManagerImplRef _btAccessoryManager;
	BTSessionImplRef _btSession;
	BOOL _btSessionAddedServiceCallback;
	BOOL _btSessionAttaching;
	BOOL _btSessionNeeded;
	BOOL _btSessionStarted;
	BTLocalDeviceImplRef _btLocalDevice;
	NSData* _btLocalDeviceAddr;
	BOOL _btLocalDeviceAddrNeeded;
	SCD_Struct_CU10* _btLocalDeviceCallbacks;
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
	NSMutableArray* _relayMessages;
	NSMutableArray* _updateDevicesRequests;
	LogCategory* _ucat;
	int _bluetoothState;
	unsigned _flags;
	unsigned _requiredServices;
	unsigned _statusFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _label;
	/*^block*/id _bluetoothAddressChangedHandler;
	/*^block*/id _bluetoothStateChangedHandler;
	/*^block*/id _deviceConnectedHandler;
	/*^block*/id _deviceDisconnectedHandler;
	/*^block*/id _deviceEventHandler;
	/*^block*/id _devicePairedHandler;
	/*^block*/id _deviceUnpairedHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _relayMessageReceivedHandler;
	/*^block*/id _updateTipiHandler;

}

@property (assign,nonatomic) int bluetoothState;                                      //@synthesize bluetoothState=_bluetoothState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned flags;                                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned requiredServices;                               //@synthesize requiredServices=_requiredServices - In the implementation block
@property (assign,nonatomic) unsigned statusFlags;                                    //@synthesize statusFlags=_statusFlags - In the implementation block
@property (nonatomic,copy) id bluetoothAddressChangedHandler;                         //@synthesize bluetoothAddressChangedHandler=_bluetoothAddressChangedHandler - In the implementation block
@property (nonatomic,copy) id bluetoothStateChangedHandler;                           //@synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler - In the implementation block
@property (nonatomic,copy) id deviceConnectedHandler;                                 //@synthesize deviceConnectedHandler=_deviceConnectedHandler - In the implementation block
@property (nonatomic,copy) id deviceDisconnectedHandler;                              //@synthesize deviceDisconnectedHandler=_deviceDisconnectedHandler - In the implementation block
@property (nonatomic,copy) id deviceEventHandler;                                     //@synthesize deviceEventHandler=_deviceEventHandler - In the implementation block
@property (nonatomic,copy) id devicePairedHandler;                                    //@synthesize devicePairedHandler=_devicePairedHandler - In the implementation block
@property (nonatomic,copy) id deviceUnpairedHandler;                                  //@synthesize deviceUnpairedHandler=_deviceUnpairedHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id relayMessageReceivedHandler;                            //@synthesize relayMessageReceivedHandler=_relayMessageReceivedHandler - In the implementation block
@property (nonatomic,copy) id updateTipiHandler;                                      //@synthesize updateTipiHandler=_updateTipiHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(int)bluetoothState;
-(id)bluetoothStateChangedHandler;
-(id)bluetoothAddressChangedHandler;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)setBluetoothStateChangedHandler:(id)arg1 ;
-(void)_btAccessoryStreamStateChanged:(int)arg1 device:(BTDeviceImplRef)arg2 ;
-(void)_handleDeviceConnected:(BTDeviceImplRef)arg1 ;
-(void)setHighPriority:(BOOL)arg1 deviceID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setStatusFlags:(unsigned)arg1 ;
-(void)updateAccessoryID:(id)arg1 connectionDeviceAddresses:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_processRequestSetDeviceState:(id)arg1 ;
-(id)init;
-(id)_internalDispatchQueue;
-(void)_processFindDeviceRequests;
-(void)_setDeviceFlags:(unsigned)arg1 mask:(unsigned)arg2 deviceID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setDeviceFlags:(unsigned)arg1 mask:(unsigned)arg2 deviceID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_processRequestSetHijackState:(id)arg1 ;
-(void)setBluetoothState:(int)arg1 ;
-(void)_handleConnectedDevicesInit;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)updateTipiHandler;
-(void)_btAccessoryPlacementChanged:(BTAccessoryManagerImplRef)arg1 device:(BTDeviceImplRef)arg2 ;
-(unsigned)flags;
-(unsigned)requiredServices;
-(void)setHijackState:(BOOL)arg1 deviceID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setHijackState:(BOOL)arg1 deviceID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BTDeviceImplRef)_btDeviceWithID:(id)arg1 error:(id*)arg2 ;
-(id)_createCUBluetoothDeviceWithBTDevice:(BTDeviceImplRef)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_setHighPriority:(BOOL)arg1 deviceID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)deviceConnectedHandler;
-(void)_btEnsureStarted;
-(void)setDevicePairedHandler:(id)arg1 ;
-(void)_handlePairingStatusChanged;
-(void)_btAccessoryNameChanged:(BTDeviceImplRef)arg1 ;
-(void)findDeviceByAddress:(SCD_Struct_CU6)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned)statusFlags;
-(void)_updateAccessoryID:(id)arg1 connectionDeviceAddresses:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_processUpdateAccessoryDevicesRequest:(id)arg1 ;
-(void)activate;
-(void)setUpdateTipiHandler:(id)arg1 ;
-(id)deviceUnpairedHandler;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(NSString *)description;
-(void)_btEnsureStopped;
-(void)_handleDeviceEvent:(unsigned)arg1 device:(BTDeviceImplRef)arg2 ;
-(id)deviceEventHandler;
-(void)setDeviceConnectedHandler:(id)arg1 ;
-(void)updateDevice:(id)arg1 btDevice:(BTDeviceImplRef)arg2 ;
-(void)setRelayMessageReceivedHandler:(id)arg1 ;
-(void)sendRelayMessage:(id)arg1 ;
-(void)_processRequestSetHighPriorityState:(id)arg1 ;
-(void)_sendRelayMessage:(id)arg1 ;
-(void)setDeviceState:(unsigned)arg1 deviceID:(id)arg2 peerAddress:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_completeUpdateAccessoryDevicesRequest:(id)arg1 error:(id)arg2 ;
-(void)setRequiredServices:(unsigned)arg1 ;
-(void)_handleDeviceDisconnected:(BTDeviceImplRef)arg1 reason:(int)arg2 ;
-(void)setDeviceEventHandler:(id)arg1 ;
-(void)setBluetoothAddressChangedHandler:(id)arg1 ;
-(void)_setDeviceState:(unsigned)arg1 deviceID:(id)arg2 peerAddress:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_processRelayMessage:(id)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)_invalidated;
-(void)_processUpdateAccessoryDevicesRequests;
-(void)_externalInvokeBlock:(/*^block*/id)arg1 ;
-(void)invalidate;
-(void)_processRelayMessages;
-(id)devicePairedHandler;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_findDeviceByAddress:(SCD_Struct_CU6)arg1 completion:(/*^block*/id)arg2 ;
-(id)deviceDisconnectedHandler;
-(id)invalidationHandler;
-(void)setDeviceDisconnectedHandler:(id)arg1 ;
-(NSString *)label;
-(void)_handleBluetoothAddressChanged;
-(id)relayMessageReceivedHandler;
-(id)interruptionHandler;
-(void)dealloc;
-(void)_completeRelayMessage:(id)arg1 error:(id)arg2 ;
-(void)setDeviceUnpairedHandler:(id)arg1 ;
-(void)updateStatusFlags;
@end

