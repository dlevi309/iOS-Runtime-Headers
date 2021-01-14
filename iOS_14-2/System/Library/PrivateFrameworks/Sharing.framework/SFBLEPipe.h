/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/CBScalablePipeManagerDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class CBCentralManager, NSMutableData, NSObject, NSData, SFBLEData, NSMutableArray, CBScalablePipe, CBScalablePipeManager, NSMutableDictionary, NSDate, NSString;

@interface SFBLEPipe : NSObject <CBCentralManagerDelegate, CBScalablePipeManagerDelegate> {

	BOOL _activateCalled;
	CBCentralManager* _btCentral;
	channelRef _btChannel;
	BOOL _btConnected;
	BOOL _btConnecting;
	BOOL _btEndpointRegistering;
	BOOL _btEndpointRegistered;
	int _btFD;
	unsigned char _btReadHeader[4];
	NSMutableData* _btReadPayload;
	unsigned long long _btReadLen;
	unsigned long long _btReadOffset;
	channel_ring_descRef _btReadRing;
	NSObject*<OS_dispatch_source> _btReadSource;
	NSData* _btWriteData;
	SFBLEData* _btWriteItem;
	unsigned long long _btWriteLen;
	unsigned long long _btWriteOffset;
	const char* _btWritePtr;
	NSMutableArray* _btWriteQueue;
	channel_ring_descRef _btWriteRing;
	NSObject*<OS_dispatch_source> _btWriteSource;
	BOOL _btWriteSuspended;
	CBScalablePipe* _btPipe;
	CBScalablePipeManager* _btPipeManager;
	NSMutableDictionary* _frameHandlers;
	BOOL _invalidateCalled;
	NSDate* _lastDisconnectDate;
	LogCategory* _ucat;
	BOOL _manualConnect;
	/*^block*/id _bluetoothStateChangedHandler;
	/*^block*/id _connectionStateChangedHandler;
	/*^block*/id _frameHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _identifier;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,copy) id bluetoothStateChangedHandler;                           //@synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler - In the implementation block
@property (nonatomic,readonly) long long connectionState; 
@property (nonatomic,copy) id connectionStateChangedHandler;                          //@synthesize connectionStateChangedHandler=_connectionStateChangedHandler - In the implementation block
@property (nonatomic,copy) id frameHandler;                                           //@synthesize frameHandler=_frameHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) BOOL manualConnect;                                      //@synthesize manualConnect=_manualConnect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
-(id)bluetoothStateChangedHandler;
-(void)_readHandler;
-(void)_invalidate;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)setBluetoothStateChangedHandler:(id)arg1 ;
-(void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(long long)connectionState;
-(void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3 ;
-(void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2 ;
-(id)init;
-(void)setConnectionStateChangedHandler:(id)arg1 ;
-(void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_setupIfNeeded;
-(void)addFrameHandlerForType:(unsigned char)arg1 handler:(/*^block*/id)arg2 ;
-(void)sendFrameType:(unsigned char)arg1 payload:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)scalablePipeManagerDidUpdateState:(id)arg1 ;
-(void)_frameHandler:(unsigned char)arg1 data:(id)arg2 ;
-(void)activate;
-(BOOL)manualConnect;
-(void)_activate;
-(NSString *)description;
-(id)_defaultPairedDeviceBluetoothIdentifier;
-(void)setManualConnect:(BOOL)arg1 ;
-(id)connectionStateChangedHandler;
-(void)setFrameHandler:(id)arg1 ;
-(void)_sendFrameType:(unsigned char)arg1 payload:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidate;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSString *)identifier;
-(void)_setupPipe:(id)arg1 ;
-(void)_tearDownPipe;
-(void)_writeHandler;
-(id)invalidationHandler;
-(void)removeFrameHandlerForType:(unsigned char)arg1 ;
-(void)dealloc;
-(id)frameHandler;
@end

