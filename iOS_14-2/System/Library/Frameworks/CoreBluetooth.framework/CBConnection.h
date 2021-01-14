/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/CBPeripheralDelegate.h>
#import <libobjc.A.dylib/CBActivatable.h>
#import <libobjc.A.dylib/CBLabelable.h>
#import <libobjc.A.dylib/CBReadWriteRequestable.h>
#import <libobjc.A.dylib/CBStateReporting.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class CBCentralManager, NSUUID, CBPeripheral, NSObject, CBReadRequest, NSMutableArray, CBWriteRequest, NSString, CBDevice, CBL2CAPChannel;

@interface CBConnection : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate, CBActivatable, CBLabelable, CBReadWriteRequestable, CBStateReporting> {

	/*^block*/id _activateCompletion;
	CBCentralManager* _centralManager;
	unsigned short _destinationPSM;
	NSUUID* _destinationUUID;
	BOOL _guardConnected;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	CBPeripheral* _peripheral;
	NSObject*<OS_dispatch_source> _readSource;
	unsigned char _readSuspended;
	CBReadRequest* _readRequestCurrent;
	NSMutableArray* _readRequests;
	int _socketFD;
	int _state;
	NSObject*<OS_dispatch_source> _writeSource;
	unsigned char _writeSuspended;
	CBWriteRequest* _writeRequestCurrent;
	NSMutableArray* _writeRequests;
	LogCategory* _ucat;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	long long _bluetoothState;
	/*^block*/id _bluetoothStateChangedHandler;
	NSString* _clientBundleID;
	long long _clientUseCase;
	long long _connectionLatency;
	CBDevice* _destinationDevice;
	/*^block*/id _errorHandler;
	NSString* _serviceType;
	CBL2CAPChannel* _l2capChannel;
	/*^block*/id _serverInvalidationHandler;

}

@property (nonatomic,retain) CBL2CAPChannel * l2capChannel;                           //@synthesize l2capChannel=_l2capChannel - In the implementation block
@property (nonatomic,copy) id serverInvalidationHandler;                              //@synthesize serverInvalidationHandler=_serverInvalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * clientBundleID;                                 //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (assign,nonatomic) long long clientUseCase;                                 //@synthesize clientUseCase=_clientUseCase - In the implementation block
@property (assign,nonatomic) long long connectionLatency;                             //@synthesize connectionLatency=_connectionLatency - In the implementation block
@property (nonatomic,retain) CBDevice * destinationDevice;                            //@synthesize destinationDevice=_destinationDevice - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) long long bluetoothState;                              //@synthesize bluetoothState=_bluetoothState - In the implementation block
@property (nonatomic,copy) id bluetoothStateChangedHandler;                           //@synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler - In the implementation block
-(NSString *)clientBundleID;
-(void)_run;
-(long long)bluetoothState;
-(id)bluetoothStateChangedHandler;
-(id)errorHandler;
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)readWithRequest:(id)arg1 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)setBluetoothStateChangedHandler:(id)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)_abortReadsWithError:(id)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_processWrites;
-(void)_reportError:(id)arg1 ;
-(void)writeWithRequest:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_abortWritesWithError:(id)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(CBDevice *)destinationDevice;
-(void)_completeWriteRequest:(id)arg1 error:(id)arg2 ;
-(BOOL)_prepareWriteRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)_runSetupChannel;
-(void)setClientBundleID:(NSString *)arg1 ;
-(BOOL)_runConnectStart;
-(void)_processReads:(BOOL)arg1 ;
-(BOOL)_setupIOAndReturnError:(id*)arg1 ;
-(BOOL)_processReadStatus;
-(void)setDestinationDevice:(CBDevice *)arg1 ;
-(long long)clientUseCase;
-(void)peripheral:(id)arg1 didOpenL2CAPChannel:(id)arg2 error:(id)arg3 ;
-(BOOL)activateDirectAndReturnError:(id*)arg1 ;
-(BOOL)_startConnectingAndReturnError:(id*)arg1 ;
-(void)writeEndOfDataWithCompletion:(/*^block*/id)arg1 ;
-(void)setClientUseCase:(long long)arg1 ;
-(long long)connectionLatency;
-(void)setConnectionLatency:(long long)arg1 ;
-(CBL2CAPChannel *)l2capChannel;
-(void)setL2capChannel:(CBL2CAPChannel *)arg1 ;
-(id)serverInvalidationHandler;
-(void)setServerInvalidationHandler:(id)arg1 ;
-(void)_invalidated;
-(void)invalidate;
-(void)_completeReadRequest:(id)arg1 error:(id)arg2 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSString *)serviceType;
-(void)_prepareReadRequest:(id)arg1 ;
-(id)invalidationHandler;
-(NSString *)label;
-(void)dealloc;
@end

