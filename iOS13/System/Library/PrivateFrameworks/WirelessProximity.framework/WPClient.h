/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/WPXPCClientProtocol.h>
#import <libobjc.A.dylib/WPXPCDaemonProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSString, NSXPCConnection, NSXPCListener;

@interface WPClient : NSObject <NSXPCListenerDelegate, WPXPCClientProtocol, WPXPCDaemonProtocol> {

	unsigned char _type;
	BOOL _isTestClient;
	BOOL _isBubbleTestClient;
	BOOL _peerTrackingSlotsAvailable;
	BOOL _needsToRegister;
	BOOL _registering;
	BOOL _servicesAdded;
	long long _state;
	long long _advertiserState;
	long long _scannerState;
	long long _pipeState;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _daemonDeliveryQueue;
	NSObject*<OS_dispatch_semaphore> _daemonRegisteredSemaphore;
	NSString* _machName;
	NSXPCConnection* _xpcConnection;
	NSXPCListener* _xpcListener;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> daemonDeliveryQueue;                        //@synthesize daemonDeliveryQueue=_daemonDeliveryQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> daemonRegisteredSemaphore;              //@synthesize daemonRegisteredSemaphore=_daemonRegisteredSemaphore - In the implementation block
@property (nonatomic,retain) NSString * machName;                                                     //@synthesize machName=_machName - In the implementation block
@property (assign) long long state;                                                                   //@synthesize state=_state - In the implementation block
@property (assign) long long advertiserState;                                                         //@synthesize advertiserState=_advertiserState - In the implementation block
@property (assign) long long scannerState;                                                            //@synthesize scannerState=_scannerState - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign) unsigned char type;                                                                //@synthesize type=_type - In the implementation block
@property (assign) BOOL peerTrackingSlotsAvailable;                                                   //@synthesize peerTrackingSlotsAvailable=_peerTrackingSlotsAvailable - In the implementation block
@property (assign) BOOL needsToRegister;                                                              //@synthesize needsToRegister=_needsToRegister - In the implementation block
@property (assign) BOOL registering;                                                                  //@synthesize registering=_registering - In the implementation block
@property (assign) BOOL servicesAdded;                                                                //@synthesize servicesAdded=_servicesAdded - In the implementation block
@property (retain) NSXPCListener * xpcListener;                                                       //@synthesize xpcListener=_xpcListener - In the implementation block
@property (assign) BOOL isTestClient;                                                                 //@synthesize isTestClient=_isTestClient - In the implementation block
@property (assign) BOOL isBubbleTestClient;                                                           //@synthesize isBubbleTestClient=_isBubbleTestClient - In the implementation block
@property (readonly) long long pipeState;                                                             //@synthesize pipeState=_pipeState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)isHomePod;
+(id)stateAsString:(long long)arg1 ;
+(BOOL)isAppleTV;
+(BOOL)isHomePodOrIOS;
+(BOOL)holdVoucherForConnections;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)invalidate;
-(unsigned char)type;
-(void)setType:(unsigned char)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(long long)state;
-(id)connection;
-(NSXPCConnection *)xpcConnection;
-(void)establishConnection;
-(void)setState:(long long)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(NSXPCListener *)xpcListener;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSString *)machName;
-(void)startAdvertising:(id)arg1 ;
-(void)unregisterEndpoint:(id)arg1 ;
-(void)connectToPeer:(id)arg1 ;
-(void)disconnectFromPeer:(id)arg1 ;
-(void)sendTestRequest:(id)arg1 ;
-(void)connectToPeer:(id)arg1 withOptions:(id)arg2 ;
-(id)initWithQueue:(id)arg1 machName:(id)arg2 ;
-(void)disableScanning;
-(void)setMachName:(NSString *)arg1 ;
-(void)stateDidChange:(long long)arg1 ;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)enableTestMode;
-(BOOL)servicesAdded;
-(void)setServicesAdded:(BOOL)arg1 ;
-(void)startScanning:(id)arg1 ;
-(void)stopScanning:(id)arg1 ;
-(void)checkAllowDuplicates:(/*^block*/id)arg1 ;
-(id)clientAsString;
-(void)stopAdvertising:(id)arg1 ;
-(void)enableRanging:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)isRangingEnabledReply:(/*^block*/id)arg1 ;
-(BOOL)isBubbleTestClient;
-(void)startTrackingPeerWithRequest:(id)arg1 ;
-(void)stopTrackingPeerWithRequest:(id)arg1 ;
-(void)peerTrackingFull;
-(void)peerTrackingAvailable;
-(void)sendDataToCharacteristic:(id)arg1 inService:(id)arg2 forPeer:(id)arg3 ;
-(void)registerEndpoint:(id)arg1 requireAck:(BOOL)arg2 requireEncryption:(BOOL)arg3 ;
-(void)listenToBandwidthNotifications;
-(void)discoverCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2 ;
-(void)shouldSubscribe:(BOOL)arg1 toPeer:(id)arg2 withCharacteristic:(id)arg3 inService:(id)arg4 ;
-(void)populateClientGATT:(/*^block*/id)arg1 ;
-(void)updateScanningRequest:(id)arg1 withUpdate:(/*^block*/id)arg2 ;
-(void)registerForAnyScanResults:(BOOL)arg1 ;
-(BOOL)isTestClient;
-(void)receivedTestResponse:(id)arg1 ;
-(void)setupMachXPCService;
-(void)destroyConnection;
-(NSObject*<OS_dispatch_semaphore>)daemonRegisteredSemaphore;
-(void)setDaemonRegisteredSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_queue>)daemonDeliveryQueue;
-(void)setRegistering:(BOOL)arg1 ;
-(void)whitelistConnectionMethods:(id)arg1 ;
-(void)setNeedsToRegister:(BOOL)arg1 ;
-(BOOL)needsToRegister;
-(BOOL)registering;
-(void)registeredWithDaemonAndContinuingSession:(BOOL)arg1 ;
-(void)startTrackingZone:(id)arg1 ;
-(void)stopTrackingZones:(id)arg1 ;
-(void)stopTrackingAllZones;
-(void)getAllTrackedZones;
-(void)getPowerLogStats:(/*^block*/id)arg1 ;
-(void)dumpDaemonState;
-(void)enableBubbleTestMode;
-(void)sendDatatoLePipe:(id)arg1 forPeer:(id)arg2 ;
-(void)setPeerTrackingSlotsAvailable:(BOOL)arg1 ;
-(long long)advertiserState;
-(void)setAdvertiserState:(long long)arg1 ;
-(void)addServices;
-(void)setScannerState:(long long)arg1 ;
-(void)setIsTestClient:(BOOL)arg1 ;
-(void)setIsBubbleTestClient:(BOOL)arg1 ;
-(void)startScanning:(id)arg1 andAdvertising:(id)arg2 ;
-(long long)scannerState;
-(long long)pipeState;
-(void)setDaemonDeliveryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)peerTrackingSlotsAvailable;
@end

