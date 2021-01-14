/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/

#import <WPDaemon/WPXPCDaemonProtocol.h>
#import <WPDaemon/WPDClientProtocol.h>

@protocol WPDClientDelegate, OS_dispatch_queue, OS_voucher;
@class NSUUID, NSString, NSMutableSet, NSXPCConnection, NSObject, WPDaemonServer, WPDScanManager, WPDAdvertisingManager, WPDZoneManager, WPDPipeManager, WPDObjectDiscoveryManager, NSMutableDictionary;

@interface WPDClient : NSObject <WPXPCDaemonProtocol, WPDClientProtocol> {

	BOOL _isTestModeClient;
	BOOL _canDisableScans;
	BOOL _registered;
	BOOL _portTickled;
	BOOL _entitledForZones;
	BOOL _entitledForObjectDiscovery;
	BOOL _entitledForRanging;
	BOOL _pendingSent;
	BOOL _scanBlacklisted;
	BOOL _scansOff;
	BOOL _isObjectDiscovery;
	BOOL _supportsObjectDiscovery;
	BOOL _supportsRanging;
	int _processID;
	id<WPDClientDelegate> _delegate;
	NSUUID* _clientUUID;
	NSString* _clientTypeString;
	NSString* _processName;
	NSMutableSet* _endpointsSet;
	NSXPCConnection* _conn;
	NSObject*<OS_dispatch_queue> _messageQueue;
	WPDaemonServer* _server;
	NSObject*<OS_dispatch_queue> _serverQueue;
	NSString* _machName;
	long long _holdVouchers;
	NSString* _bundleID;
	WPDScanManager* _scanManager;
	WPDAdvertisingManager* _advertisingManager;
	WPDZoneManager* _zoneManager;
	WPDPipeManager* _pipeManager;
	WPDObjectDiscoveryManager* _objectDiscoveryManager;
	NSMutableDictionary* _connections;
	NSUUID* _identifier;
	NSMutableDictionary* _advertTimers;
	NSMutableDictionary* _advertTimerState;
	NSMutableDictionary* _scanTimers;
	NSMutableDictionary* _connectionTimer;
	NSMutableSet* _lePipePeersSet;
	NSObject*<OS_voucher> _scanVoucher;
	NSObject*<OS_voucher> _advertVoucher;

}

@property (assign) BOOL portTickled;                                                //@synthesize portTickled=_portTickled - In the implementation block
@property (assign) long long holdVouchers;                                          //@synthesize holdVouchers=_holdVouchers - In the implementation block
@property (assign) int processID;                                                   //@synthesize processID=_processID - In the implementation block
@property (retain) NSString * processName;                                          //@synthesize processName=_processName - In the implementation block
@property (retain) NSString * clientTypeString;                                     //@synthesize clientTypeString=_clientTypeString - In the implementation block
@property (retain) NSString * machName;                                             //@synthesize machName=_machName - In the implementation block
@property (retain) NSUUID * clientUUID;                                             //@synthesize clientUUID=_clientUUID - In the implementation block
@property (retain) NSString * bundleID;                                             //@synthesize bundleID=_bundleID - In the implementation block
@property (__weak) WPDScanManager * scanManager;                                    //@synthesize scanManager=_scanManager - In the implementation block
@property (__weak) WPDAdvertisingManager * advertisingManager;                      //@synthesize advertisingManager=_advertisingManager - In the implementation block
@property (__weak) WPDZoneManager * zoneManager;                                    //@synthesize zoneManager=_zoneManager - In the implementation block
@property (__weak) WPDPipeManager * pipeManager;                                    //@synthesize pipeManager=_pipeManager - In the implementation block
@property (__weak) WPDObjectDiscoveryManager * objectDiscoveryManager;              //@synthesize objectDiscoveryManager=_objectDiscoveryManager - In the implementation block
@property (retain) NSMutableDictionary * connections;                               //@synthesize connections=_connections - In the implementation block
@property (retain) NSUUID * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (assign) BOOL entitledForZones;                                           //@synthesize entitledForZones=_entitledForZones - In the implementation block
@property (assign) BOOL entitledForObjectDiscovery;                                 //@synthesize entitledForObjectDiscovery=_entitledForObjectDiscovery - In the implementation block
@property (assign) BOOL entitledForRanging;                                         //@synthesize entitledForRanging=_entitledForRanging - In the implementation block
@property (assign) BOOL pendingSent;                                                //@synthesize pendingSent=_pendingSent - In the implementation block
@property (retain) NSMutableDictionary * advertTimers;                              //@synthesize advertTimers=_advertTimers - In the implementation block
@property (retain) NSMutableDictionary * advertTimerState;                          //@synthesize advertTimerState=_advertTimerState - In the implementation block
@property (retain) NSMutableDictionary * scanTimers;                                //@synthesize scanTimers=_scanTimers - In the implementation block
@property (retain) NSMutableDictionary * connectionTimer;                           //@synthesize connectionTimer=_connectionTimer - In the implementation block
@property (assign) BOOL scanBlacklisted;                                            //@synthesize scanBlacklisted=_scanBlacklisted - In the implementation block
@property (assign) BOOL scansOff;                                                   //@synthesize scansOff=_scansOff - In the implementation block
@property (retain) NSMutableSet * lePipePeersSet;                                   //@synthesize lePipePeersSet=_lePipePeersSet - In the implementation block
@property (retain) NSMutableSet * endpointsSet;                                     //@synthesize endpointsSet=_endpointsSet - In the implementation block
@property (assign) BOOL isObjectDiscovery;                                          //@synthesize isObjectDiscovery=_isObjectDiscovery - In the implementation block
@property (readonly) BOOL supportsObjectDiscovery;                                  //@synthesize supportsObjectDiscovery=_supportsObjectDiscovery - In the implementation block
@property (readonly) BOOL supportsRanging;                                          //@synthesize supportsRanging=_supportsRanging - In the implementation block
@property (nonatomic,retain) NSObject*<OS_voucher> scanVoucher;                     //@synthesize scanVoucher=_scanVoucher - In the implementation block
@property (nonatomic,retain) NSObject*<OS_voucher> advertVoucher;                   //@synthesize advertVoucher=_advertVoucher - In the implementation block
@property (__weak,readonly) id<WPDClientDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL isTestModeClient;                                           //@synthesize isTestModeClient=_isTestModeClient - In the implementation block
@property (assign) BOOL canDisableScans;                                            //@synthesize canDisableScans=_canDisableScans - In the implementation block
@property (retain) NSXPCConnection * conn;                                          //@synthesize conn=_conn - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> messageQueue;                       //@synthesize messageQueue=_messageQueue - In the implementation block
@property (assign) BOOL registered;                                                 //@synthesize registered=_registered - In the implementation block
@property (__weak,readonly) WPDaemonServer * server;                                //@synthesize server=_server - In the implementation block
@property (__weak,readonly) NSObject*<OS_dispatch_queue> serverQueue;               //@synthesize serverQueue=_serverQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)enableScanAdvertVouchers;
-(void)connectedDevice:(id)arg1 withError:(id)arg2 shouldDiscover:(BOOL)arg3 ;
-(void)updatedNotificationState:(BOOL)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 withPeripheral:(id)arg4 ;
-(void)setPipeManager:(WPDPipeManager *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serverQueue;
-(void)setRegistered:(BOOL)arg1 ;
-(void)setProcessName:(NSString *)arg1 ;
-(void)central:(id)arg1 subscribed:(BOOL)arg2 toCharacteristic:(id)arg3 inService:(id)arg4 ;
-(void)exitedZone:(id)arg1 ;
-(void)setHoldVouchers:(long long)arg1 ;
-(void)setConnections:(NSMutableDictionary *)arg1 ;
-(void)unregisterEndpoint:(id)arg1 ;
-(void)lostPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)sentData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 withError:(id)arg5 ;
-(WPDPipeManager *)pipeManager;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)discoveredCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2 ;
-(id)generateStateDump;
-(void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2 ;
-(void)setCanDisableScans:(BOOL)arg1 ;
-(void)stoppedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)bandwidthStateUpdated:(id)arg1 ;
-(void)foundPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)setEntitledForRanging:(BOOL)arg1 ;
-(void)sentData:(id)arg1 toEndpoint:(id)arg2 forPeripheral:(id)arg3 withError:(id)arg4 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(void)setScanTimers:(NSMutableDictionary *)arg1 ;
-(void)disconnectedDeviceOverLEPipe:(id)arg1 withError:(id)arg2 ;
-(BOOL)scansOff;
-(void)endTestMode;
-(void)receivedData:(id)arg1 fromEndpoint:(id)arg2 forPeripheral:(id)arg3 ;
-(void)readyForDataTransfer;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(void)disconnectFromPeer:(id)arg1 ;
-(NSMutableDictionary *)advertTimers;
-(void)connectedDeviceOverLEPipe:(id)arg1 ;
-(void)peerTrackingAvailable;
-(void)peerTrackingFull;
-(void)connectToPeer:(id)arg1 withOptions:(id)arg2 ;
-(void)setMachName:(NSString *)arg1 ;
-(int)processID;
-(BOOL)registered;
-(void)stopScans;
-(void)destroy_async;
-(void)setObjectDiscoveryManager:(WPDObjectDiscoveryManager *)arg1 ;
-(void)setupConnection;
-(void)setAdvertTimers:(NSMutableDictionary *)arg1 ;
-(void)discoverCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2 ;
-(void)stopScanning:(id)arg1 ;
-(NSUUID *)clientUUID;
-(void)sendTestRequest:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)queueBlock:(/*^block*/id)arg1 ;
-(void)setAdvertVoucher:(NSObject*<OS_voucher>)arg1 ;
-(id<WPDClientDelegate>)delegate;
-(NSMutableDictionary *)connections;
-(void)resetConnection;
-(void)setEntitledForZones:(BOOL)arg1 ;
-(long long)holdVouchers;
-(void)setAdvertTimerState:(NSMutableDictionary *)arg1 ;
-(void)checkEntitlements;
-(BOOL)entitledForZones;
-(NSString *)processName;
-(BOOL)isObjectDiscovery;
-(void)destroy;
-(void)discoveredDevices:(id)arg1 ;
-(WPDZoneManager *)zoneManager;
-(void)registerForAnyScanResults:(BOOL)arg1 ;
-(void)stopAdvertising:(id)arg1 ;
-(void)setScansOff:(BOOL)arg1 ;
-(void)registerWithDaemon:(id)arg1 forProcess:(id)arg2 machName:(id)arg3 holdVouchers:(long long)arg4 ;
-(NSString *)clientTypeString;
-(NSObject*<OS_dispatch_queue>)messageQueue;
-(WPDScanManager *)scanManager;
-(BOOL)pendingSent;
-(void)registerEndpoint:(id)arg1 requireAck:(BOOL)arg2 requireEncryption:(BOOL)arg3 ;
-(void)enableTestMode;
-(void)setMessageQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)stopTrackingPeerWithRequest:(id)arg1 ;
-(void)setIsObjectDiscovery:(BOOL)arg1 ;
-(void)setScanBlacklisted:(BOOL)arg1 ;
-(void)startScanning_async:(id)arg1 ;
-(NSMutableDictionary *)scanTimers;
-(void)getPowerLogStats:(/*^block*/id)arg1 ;
-(void)startTrackingZone:(id)arg1 ;
-(BOOL)entitledForObjectDiscovery;
-(void)enableRanging:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(NSString *)description;
-(void)stopTrackingZones:(id)arg1 ;
-(NSMutableDictionary *)connectionTimer;
-(void)sendDatatoLePipe:(id)arg1 forPeer:(id)arg2 ;
-(void)anyDiscoveredDevice:(id)arg1 ;
-(void)setScanManager:(WPDScanManager *)arg1 ;
-(void)startTrackingPeerWithRequest:(id)arg1 ;
-(WPDaemonServer *)server;
-(void)listenToBandwidthNotifications;
-(BOOL)scanBlacklisted;
-(WPDAdvertisingManager *)advertisingManager;
-(void)rangingEnabled:(BOOL)arg1 withError:(id)arg2 ;
-(id)getManager;
-(NSMutableSet *)lePipePeersSet;
-(NSObject*<OS_voucher>)advertVoucher;
-(void)setZoneManager:(WPDZoneManager *)arg1 ;
-(NSMutableDictionary *)advertTimerState;
-(void)enteredZone:(id)arg1 manufacturerData:(id)arg2 ;
-(BOOL)entitledForRanging;
-(void)isRangingEnabledReply:(/*^block*/id)arg1 ;
-(NSString *)bundleID;
-(void)disconnectedPeer:(id)arg1 error:(id)arg2 ;
-(void)cancelConnectionTimer:(id)arg1 ;
-(BOOL)supportsObjectDiscovery;
-(void)dumpDaemonState;
-(id)initWithXPCConnection:(id)arg1 server:(id)arg2 ;
-(void)discoveredDevice:(id)arg1 ;
-(BOOL)portTickled;
-(void)createdConnection:(id)arg1 ;
-(void)setClientTypeString:(NSString *)arg1 ;
-(id)connectionForUUID:(id)arg1 ;
-(NSObject*<OS_voucher>)scanVoucher;
-(void)stopTrackingAllZones;
-(void)setAdvertisingManager:(WPDAdvertisingManager *)arg1 ;
-(void)receivedTestResponse:(id)arg1 ;
-(void)startScanning:(id)arg1 ;
-(void)setScanVoucher:(NSObject*<OS_voucher>)arg1 ;
-(void)setProcessID:(int)arg1 ;
-(void)disableScanning;
-(void)setIsTestModeClient:(BOOL)arg1 ;
-(void)checkAllowDuplicates:(/*^block*/id)arg1 ;
-(void)setPortTickled:(BOOL)arg1 ;
-(void)startAdvertising_async:(id)arg1 ;
-(void)setClientUUID:(NSUUID *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)sendRegisteredWithDaemonAndContinuingSession:(BOOL)arg1 ;
-(NSUUID *)identifier;
-(NSXPCConnection *)conn;
-(BOOL)supportsRanging;
-(void)resumeCommunicationWithConnection:(id)arg1 andProcessID:(int)arg2 ;
-(WPDObjectDiscoveryManager *)objectDiscoveryManager;
-(void)stopAdvertising_async:(id)arg1 ;
-(void)setLePipePeersSet:(NSMutableSet *)arg1 ;
-(NSMutableSet *)endpointsSet;
-(NSString *)machName;
-(void)sendDataToCharacteristic:(id)arg1 inService:(id)arg2 forPeer:(id)arg3 ;
-(void)shouldSubscribe:(BOOL)arg1 toPeer:(id)arg2 withCharacteristic:(id)arg3 inService:(id)arg4 ;
-(void)setConnectionTimer:(NSMutableDictionary *)arg1 ;
-(BOOL)isTestModeClient;
-(void)startAdvertising:(id)arg1 ;
-(void)addCharacteristic:(id)arg1 forService:(id)arg2 ;
-(void)setEntitledForObjectDiscovery:(BOOL)arg1 ;
-(void)receivedData:(id)arg1 fromCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 ;
-(void)stopScanning_async:(id)arg1 ;
-(id)xpcConnectionForClient;
-(void)setConn:(NSXPCConnection *)arg1 ;
-(void)notifyClientStateChange:(long long)arg1 Restricted:(BOOL)arg2 ;
-(void)setPendingSent:(BOOL)arg1 ;
-(void)setEndpointsSet:(NSMutableSet *)arg1 ;
-(void)tickleMachPort;
-(void)getAllTrackedZones;
-(BOOL)canDisableScans;
-(void)dealloc;
@end

