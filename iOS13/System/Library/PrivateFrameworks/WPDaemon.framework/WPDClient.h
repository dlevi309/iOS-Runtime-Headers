/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/

#import <WPDaemon/WPXPCDaemonProtocol.h>
#import <WPDaemon/WPDClientProtocol.h>

@protocol WPDClientDelegate, OS_dispatch_queue;
@class NSUUID, NSString, NSMutableSet, NSXPCConnection, NSObject, WPDaemonServer, WPDScanManager, WPDAdvertisingManager, WPDZoneManager, WPDPipeManager, WPDObjectDiscoveryManager, NSMutableDictionary;

@interface WPDClient : NSObject <WPXPCDaemonProtocol, WPDClientProtocol> {

	BOOL _isTestModeClient;
	BOOL _canDisableScans;
	BOOL _registered;
	BOOL _portTickled;
	BOOL _holdVoucher;
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

}

@property (assign) BOOL portTickled;                                                //@synthesize portTickled=_portTickled - In the implementation block
@property (assign) BOOL holdVoucher;                                                //@synthesize holdVoucher=_holdVoucher - In the implementation block
@property (assign) int processID;                                                   //@synthesize processID=_processID - In the implementation block
@property (retain) NSString * processName;                                          //@synthesize processName=_processName - In the implementation block
@property (retain) NSString * clientTypeString;                                     //@synthesize clientTypeString=_clientTypeString - In the implementation block
@property (retain) NSString * machName;                                             //@synthesize machName=_machName - In the implementation block
@property (retain) NSUUID * clientUUID;                                             //@synthesize clientUUID=_clientUUID - In the implementation block
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
-(void)dealloc;
-(NSString *)description;
-(id<WPDClientDelegate>)delegate;
-(NSUUID *)identifier;
-(NSString *)processName;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setProcessName:(NSString *)arg1 ;
-(WPDaemonServer *)server;
-(void)destroy;
-(BOOL)registered;
-(void)setRegistered:(BOOL)arg1 ;
-(int)processID;
-(NSString *)machName;
-(NSMutableDictionary *)connections;
-(void)setConnections:(NSMutableDictionary *)arg1 ;
-(NSUUID *)clientUUID;
-(void)setClientUUID:(NSUUID *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serverQueue;
-(void)startAdvertising:(id)arg1 ;
-(void)unregisterEndpoint:(id)arg1 ;
-(void)disconnectFromPeer:(id)arg1 ;
-(void)sendTestRequest:(id)arg1 ;
-(void)setupConnection;
-(void)connectToPeer:(id)arg1 withOptions:(id)arg2 ;
-(void)disableScanning;
-(void)resetConnection;
-(void)setMachName:(NSString *)arg1 ;
-(WPDZoneManager *)zoneManager;
-(void)setProcessID:(int)arg1 ;
-(NSXPCConnection *)conn;
-(void)enableTestMode;
-(void)startScanning:(id)arg1 ;
-(void)stopScanning:(id)arg1 ;
-(void)checkAllowDuplicates:(/*^block*/id)arg1 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)stopAdvertising:(id)arg1 ;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(void)rangingEnabled:(BOOL)arg1 withError:(id)arg2 ;
-(void)enableRanging:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)isRangingEnabledReply:(/*^block*/id)arg1 ;
-(void)startTrackingPeerWithRequest:(id)arg1 ;
-(void)stopTrackingPeerWithRequest:(id)arg1 ;
-(void)peerTrackingFull;
-(void)peerTrackingAvailable;
-(void)stoppedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)foundPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)lostPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)sendDataToCharacteristic:(id)arg1 inService:(id)arg2 forPeer:(id)arg3 ;
-(void)registerEndpoint:(id)arg1 requireAck:(BOOL)arg2 requireEncryption:(BOOL)arg3 ;
-(void)connectedDevice:(id)arg1 withError:(id)arg2 shouldDiscover:(BOOL)arg3 ;
-(void)connectedDeviceOverLEPipe:(id)arg1 ;
-(void)sentData:(id)arg1 toEndpoint:(id)arg2 forPeripheral:(id)arg3 withError:(id)arg4 ;
-(void)receivedData:(id)arg1 fromEndpoint:(id)arg2 forPeripheral:(id)arg3 ;
-(void)central:(id)arg1 subscribed:(BOOL)arg2 toCharacteristic:(id)arg3 inService:(id)arg4 ;
-(void)disconnectedDeviceOverLEPipe:(id)arg1 withError:(id)arg2 ;
-(void)listenToBandwidthNotifications;
-(void)discoverCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2 ;
-(void)shouldSubscribe:(BOOL)arg1 toPeer:(id)arg2 withCharacteristic:(id)arg3 inService:(id)arg4 ;
-(void)discoveredCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2 ;
-(void)updatedNotificationState:(BOOL)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 withPeripheral:(id)arg4 ;
-(void)sentData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 withError:(id)arg5 ;
-(void)bandwidthStateUpdated:(id)arg1 ;
-(void)registerForAnyScanResults:(BOOL)arg1 ;
-(void)anyDiscoveredDevice:(id)arg1 ;
-(void)receivedTestResponse:(id)arg1 ;
-(void)registerWithDaemon:(id)arg1 forProcess:(id)arg2 machName:(id)arg3 shouldHoldVoucherForConnections:(BOOL)arg4 ;
-(void)enteredZone:(id)arg1 manufacturerData:(id)arg2 ;
-(void)exitedZone:(id)arg1 ;
-(void)addCharacteristic:(id)arg1 forService:(id)arg2 ;
-(void)startTrackingZone:(id)arg1 ;
-(void)stopTrackingZones:(id)arg1 ;
-(void)stopTrackingAllZones;
-(void)getAllTrackedZones;
-(void)getPowerLogStats:(/*^block*/id)arg1 ;
-(void)dumpDaemonState;
-(void)sendDatatoLePipe:(id)arg1 forPeer:(id)arg2 ;
-(void)setConn:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)messageQueue;
-(void)setMessageQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(WPDScanManager *)scanManager;
-(void)setScanManager:(WPDScanManager *)arg1 ;
-(id)generateStateDump;
-(void)setAdvertisingManager:(WPDAdvertisingManager *)arg1 ;
-(void)setZoneManager:(WPDZoneManager *)arg1 ;
-(void)setPipeManager:(WPDPipeManager *)arg1 ;
-(WPDAdvertisingManager *)advertisingManager;
-(WPDPipeManager *)pipeManager;
-(void)setObjectDiscoveryManager:(WPDObjectDiscoveryManager *)arg1 ;
-(WPDObjectDiscoveryManager *)objectDiscoveryManager;
-(id)initWithXPCConnection:(id)arg1 server:(id)arg2 ;
-(void)setIsTestModeClient:(BOOL)arg1 ;
-(void)setCanDisableScans:(BOOL)arg1 ;
-(void)notifyClientStateChange:(long long)arg1 Restricted:(BOOL)arg2 ;
-(void)checkEntitlements;
-(NSString *)clientTypeString;
-(void)setHoldVoucher:(BOOL)arg1 ;
-(void)setClientTypeString:(NSString *)arg1 ;
-(void)setScanBlacklisted:(BOOL)arg1 ;
-(void)setIsObjectDiscovery:(BOOL)arg1 ;
-(void)setEntitledForObjectDiscovery:(BOOL)arg1 ;
-(void)resumeCommunicationWithConnection:(id)arg1 andProcessID:(int)arg2 ;
-(void)sendRegisteredWithDaemonAndContinuingSession:(BOOL)arg1 ;
-(BOOL)portTickled;
-(void)setPortTickled:(BOOL)arg1 ;
-(void)setEntitledForZones:(BOOL)arg1 ;
-(void)setEntitledForRanging:(BOOL)arg1 ;
-(void)destroy_async;
-(NSMutableDictionary *)advertTimers;
-(void)setAdvertTimers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)scanTimers;
-(void)setScanTimers:(NSMutableDictionary *)arg1 ;
-(BOOL)entitledForRanging;
-(BOOL)supportsRanging;
-(BOOL)entitledForZones;
-(NSMutableSet *)endpointsSet;
-(BOOL)isObjectDiscovery;
-(BOOL)isTestModeClient;
-(void)endTestMode;
-(void)tickleMachPort;
-(void)startAdvertising_async:(id)arg1 ;
-(NSMutableDictionary *)advertTimerState;
-(void)setPendingSent:(BOOL)arg1 ;
-(void)stopAdvertising_async:(id)arg1 ;
-(BOOL)pendingSent;
-(BOOL)scanBlacklisted;
-(void)setScansOff:(BOOL)arg1 ;
-(void)stopScans;
-(NSMutableSet *)lePipePeersSet;
-(void)queueBlock:(/*^block*/id)arg1 ;
-(void)cancelConnectionTimer:(id)arg1 ;
-(void)startScanning_async:(id)arg1 ;
-(BOOL)scansOff;
-(BOOL)entitledForObjectDiscovery;
-(BOOL)supportsObjectDiscovery;
-(void)stopScanning_async:(id)arg1 ;
-(NSMutableDictionary *)connectionTimer;
-(void)disconnectedPeer:(id)arg1 error:(id)arg2 ;
-(BOOL)holdVoucher;
-(id)getManager;
-(void)readyForDataTransfer;
-(BOOL)canDisableScans;
-(id)xpcConnectionForClient;
-(void)discoveredDevice:(id)arg1 ;
-(void)discoveredDevices:(id)arg1 ;
-(void)createdConnection:(id)arg1 ;
-(id)connectionForUUID:(id)arg1 ;
-(void)receivedData:(id)arg1 fromCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 ;
-(void)setEndpointsSet:(NSMutableSet *)arg1 ;
-(void)setAdvertTimerState:(NSMutableDictionary *)arg1 ;
-(void)setConnectionTimer:(NSMutableDictionary *)arg1 ;
-(void)setLePipePeersSet:(NSMutableSet *)arg1 ;
@end

