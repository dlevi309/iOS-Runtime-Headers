/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <libobjc.A.dylib/CUXPCCodable.h>
#import <libobjc.A.dylib/CBActivatable.h>
#import <libobjc.A.dylib/CBDeviceReporting.h>
#import <libobjc.A.dylib/CBLabelable.h>
#import <libobjc.A.dylib/CBStateReporting.h>
#import <libobjc.A.dylib/CBSystemOverridable.h>

@protocol OS_dispatch_source, OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString, NSData, NSArray;

@interface CBSpatialInteractionSession : NSObject <CUXPCCodable, CBActivatable, CBDeviceReporting, CBLabelable, CBStateReporting, CBSystemOverridable> {

	BOOL _activateCalled;
	/*^block*/id _activateCompletion;
	NSObject*<OS_dispatch_source> _advertiseRateTimer;
	BOOL _changesPending;
	NSMutableDictionary* _deviceMap;
	BOOL _direct;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSMutableDictionary* _peerMap;
	LogCategory* _ucat;
	NSObject*<OS_xpc_object> _xpcCnx;
	unsigned _systemOverrideFlags;
	int _advertiseRate;
	unsigned _controlFlags;
	int _scanRate;
	int _scanRateOverride;
	unsigned _uwbTokenFlags;
	unsigned _clientID;
	unsigned _internalFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	/*^block*/id _deviceFoundHandler;
	/*^block*/id _deviceLostHandler;
	NSString* _label;
	long long _bluetoothState;
	/*^block*/id _bluetoothStateChangedHandler;
	/*^block*/id _systemOverrideHandler;
	/*^block*/id _advertisingAddressChangedHandler;
	NSData* _advertisingAddressData;
	/*^block*/id _aopDataHandler;
	/*^block*/id _errorHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _measurementHandler;
	/*^block*/id _tokenChangedHandler;
	NSData* _tokenData;
	NSData* _uwbConfigData;
	NSData* _identifierData;
	NSData* _irkData;
	NSObject*<OS_xpc_object> _testListenerEndpoint;

}

@property (assign,nonatomic) unsigned clientID;                                          //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy) NSData * identifierData;                                      //@synthesize identifierData=_identifierData - In the implementation block
@property (assign,nonatomic) unsigned internalFlags;                                     //@synthesize internalFlags=_internalFlags - In the implementation block
@property (nonatomic,copy) NSData * irkData;                                             //@synthesize irkData=_irkData - In the implementation block
@property (assign,nonatomic) int scanRateOverride;                                       //@synthesize scanRateOverride=_scanRateOverride - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> testListenerEndpoint;              //@synthesize testListenerEndpoint=_testListenerEndpoint - In the implementation block
@property (nonatomic,copy) NSData * tokenData;                                           //@synthesize tokenData=_tokenData - In the implementation block
@property (assign,nonatomic) int advertiseRate;                                          //@synthesize advertiseRate=_advertiseRate - In the implementation block
@property (nonatomic,copy) id advertisingAddressChangedHandler;                          //@synthesize advertisingAddressChangedHandler=_advertisingAddressChangedHandler - In the implementation block
@property (nonatomic,copy,readonly) NSData * advertisingAddressData;                     //@synthesize advertisingAddressData=_advertisingAddressData - In the implementation block
@property (nonatomic,copy) id aopDataHandler;                                            //@synthesize aopDataHandler=_aopDataHandler - In the implementation block
@property (assign,nonatomic) unsigned controlFlags;                                      //@synthesize controlFlags=_controlFlags - In the implementation block
@property (nonatomic,copy) id errorHandler;                                              //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                       //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id measurementHandler;                                        //@synthesize measurementHandler=_measurementHandler - In the implementation block
@property (assign,nonatomic) int scanRate;                                               //@synthesize scanRate=_scanRate - In the implementation block
@property (nonatomic,copy) id tokenChangedHandler;                                       //@synthesize tokenChangedHandler=_tokenChangedHandler - In the implementation block
@property (nonatomic,copy) NSData * uwbConfigData;                                       //@synthesize uwbConfigData=_uwbConfigData - In the implementation block
@property (assign,nonatomic) unsigned uwbTokenFlags;                                     //@synthesize uwbTokenFlags=_uwbTokenFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                 //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                       //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id deviceFoundHandler;                                        //@synthesize deviceFoundHandler=_deviceFoundHandler - In the implementation block
@property (nonatomic,copy) id deviceLostHandler;                                         //@synthesize deviceLostHandler=_deviceLostHandler - In the implementation block
@property (copy,readonly) NSArray * discoveredDevices; 
@property (nonatomic,copy) NSString * label;                                             //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) long long bluetoothState;                                 //@synthesize bluetoothState=_bluetoothState - In the implementation block
@property (nonatomic,copy) id bluetoothStateChangedHandler;                              //@synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler - In the implementation block
@property (nonatomic,readonly) unsigned systemOverrideFlags;                             //@synthesize systemOverrideFlags=_systemOverrideFlags - In the implementation block
@property (nonatomic,copy) id systemOverrideHandler;                                     //@synthesize systemOverrideHandler=_systemOverrideHandler - In the implementation block
-(void)setScanRate:(int)arg1 ;
-(long long)bluetoothState;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(id)bluetoothStateChangedHandler;
-(unsigned)controlFlags;
-(unsigned)clientID;
-(void)_updateIfNeededWithBlock:(/*^block*/id)arg1 ;
-(id)deviceFoundHandler;
-(void)setDeviceLostHandler:(id)arg1 ;
-(void)_xpcReceivedMessage:(id)arg1 ;
-(void)setTestListenerEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(id)errorHandler;
-(void)setClientID:(unsigned)arg1 ;
-(id)deviceLostHandler;
-(void)_lostAllDevices;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setBluetoothStateChangedHandler:(id)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(NSArray *)discoveredDevices;
-(void)setInternalFlags:(unsigned)arg1 ;
-(void)encodeWithXPCObject:(id)arg1 ;
-(id)init;
-(NSData *)tokenData;
-(unsigned)internalFlags;
-(id)systemOverrideHandler;
-(void)setScanRateOverride:(int)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSystemOverrideHandler:(id)arg1 ;
-(void)_activateXPCStart:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSData *)identifierData;
-(void)setIdentifierData:(NSData *)arg1 ;
-(void)setIrkData:(NSData *)arg1 ;
-(int)advertiseRate;
-(int)scanRateOverride;
-(void)_invalidateDirect;
-(id)_ensureXPCStarted;
-(id)measurementHandler;
-(NSData *)irkData;
-(void)setAdvertiseRate:(int)arg1 ;
-(void)_activate;
-(unsigned)systemOverrideFlags;
-(id)descriptionWithLevel:(int)arg1 ;
-(NSObject*<OS_xpc_object>)testListenerEndpoint;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)description;
-(void)_xpcReceivedDeviceFound:(id)arg1 ;
-(void)setMeasurementHandler:(id)arg1 ;
-(void)_xpcReceivedDeviceLost:(id)arg1 ;
-(void)_interrupted;
-(void)_xpcReceivedEvent:(id)arg1 ;
-(int)scanRate;
-(void)_invalidated;
-(void)_update;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)invalidate;
-(void)_activateDirectStart;
-(unsigned)uwbTokenFlags;
-(void)setUwbTokenFlags:(unsigned)arg1 ;
-(NSData *)uwbConfigData;
-(void)_activateXPCCompleted:(id)arg1 reactivate:(BOOL)arg2 ;
-(void)_reAddTokens;
-(void)_addPeerToken:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_xpcReceivedAdvertisingAddressChanged:(id)arg1 ;
-(void)_xpcReceivedAOPData:(id)arg1 ;
-(BOOL)matchesWithDevice:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_xpcReceivedSystemOverrideChanged:(id)arg1 ;
-(BOOL)updateWithSession:(id)arg1 ;
-(void)setAdvertiseRate:(int)arg1 timeout:(double)arg2 ;
-(void)addPeerToken:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addPeerToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removePeerToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)advertisingAddressChangedHandler;
-(void)setAdvertisingAddressChangedHandler:(id)arg1 ;
-(NSData *)advertisingAddressData;
-(id)aopDataHandler;
-(void)setAopDataHandler:(id)arg1 ;
-(id)tokenChangedHandler;
-(void)setTokenChangedHandler:(id)arg1 ;
-(void)setUwbConfigData:(NSData *)arg1 ;
-(void)setControlFlags:(unsigned)arg1 ;
-(id)invalidationHandler;
-(NSString *)label;
-(void)_xpcReceivedPowerStateChanged:(id)arg1 ;
-(id)interruptionHandler;
-(void)dealloc;
-(void)setTokenData:(NSData *)arg1 ;
@end

