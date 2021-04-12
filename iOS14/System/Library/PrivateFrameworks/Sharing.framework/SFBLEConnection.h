/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/WPNearbyDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, CURetrier, SFBLEData, NSMutableArray, WPNearby, NSObject, SFBLEDevice, NSString;

@interface SFBLEConnection : NSObject <WPNearbyDelegate> {

	BOOL _acceptor;
	BOOL _activateCalled;
	NSMutableSet* _clients;
	BOOL _connected;
	BOOL _connecting;
	double _connectStartTime;
	CURetrier* _connectRetrier;
	SFBLEData* _currentData;
	NSMutableArray* _dataSendQueue;
	BOOL _invalidateCalled;
	WPNearby* _wpNearby;
	LogCategory* _ucat;
	BOOL _bleEncrypted;
	BOOL _latencyCritical;
	BOOL _lePipeCapable;
	unsigned _sessionFlags;
	/*^block*/id _bluetoothBandwidthChangedHandler;
	/*^block*/id _bluetoothStateChangedHandler;
	/*^block*/id _connectionStateChangedHandler;
	/*^block*/id _dataHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	SFBLEDevice* _peerDevice;

}

@property (assign,nonatomic) BOOL bleEncrypted;                                       //@synthesize bleEncrypted=_bleEncrypted - In the implementation block
@property (assign,nonatomic) BOOL latencyCritical;                                    //@synthesize latencyCritical=_latencyCritical - In the implementation block
@property (assign,nonatomic) BOOL lePipeCapable;                                      //@synthesize lePipeCapable=_lePipeCapable - In the implementation block
@property (nonatomic,retain) SFBLEDevice * peerDevice;                                //@synthesize peerDevice=_peerDevice - In the implementation block
@property (assign,nonatomic) BOOL acceptor;                                           //@synthesize acceptor=_acceptor - In the implementation block
@property (nonatomic,copy) id bluetoothBandwidthChangedHandler;                       //@synthesize bluetoothBandwidthChangedHandler=_bluetoothBandwidthChangedHandler - In the implementation block
@property (nonatomic,copy) id bluetoothStateChangedHandler;                           //@synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler - In the implementation block
@property (nonatomic,readonly) long long connectionState; 
@property (nonatomic,copy) id connectionStateChangedHandler;                          //@synthesize connectionStateChangedHandler=_connectionStateChangedHandler - In the implementation block
@property (nonatomic,copy) id dataHandler;                                            //@synthesize dataHandler=_dataHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) unsigned sessionFlags;                                   //@synthesize sessionFlags=_sessionFlags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addClient:(id)arg1 ;
-(id)bluetoothStateChangedHandler;
-(void)_invalidate;
-(void)nearby:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3 ;
-(void)nearbyDidUpdateState:(id)arg1 ;
-(void)setBluetoothStateChangedHandler:(id)arg1 ;
-(long long)connectionState;
-(void)setConnectionStateChangedHandler:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(SFBLEDevice *)peerDevice;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(BOOL)removeClient:(id)arg1 ;
-(id)dataHandler;
-(void)setDataHandler:(id)arg1 ;
-(void)setAcceptor:(BOOL)arg1 ;
-(void)_processQueuedData;
-(void)_cleanupQueuedData:(int)arg1 ;
-(void)sendDataDirect:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDevice:(id)arg1 acceptor:(BOOL)arg2 ;
-(void)activateDirect;
-(void)sendData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)bluetoothBandwidthChangedHandler;
-(void)setBluetoothBandwidthChangedHandler:(id)arg1 ;
-(BOOL)bleEncrypted;
-(void)setBleEncrypted:(BOOL)arg1 ;
-(BOOL)latencyCritical;
-(void)setLatencyCritical:(BOOL)arg1 ;
-(BOOL)lePipeCapable;
-(void)setLePipeCapable:(BOOL)arg1 ;
-(void)activate;
-(void)_activate;
-(NSString *)description;
-(void)nearby:(id)arg1 didConnectToPeer:(id)arg2 transport:(long long)arg3 error:(id)arg4 ;
-(void)setPeerDevice:(SFBLEDevice *)arg1 ;
-(id)connectionStateChangedHandler;
-(void)nearbyDidChangeBluetoothBandwidthState:(id)arg1 ;
-(void)nearby:(id)arg1 didSendData:(id)arg2 toPeer:(id)arg3 error:(id)arg4 ;
-(BOOL)acceptor;
-(void)invalidate;
-(unsigned)sessionFlags;
-(void)_connectIfNeeded;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)nearby:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 ;
-(void)setSessionFlags:(unsigned)arg1 ;
-(void)dealloc;
@end

