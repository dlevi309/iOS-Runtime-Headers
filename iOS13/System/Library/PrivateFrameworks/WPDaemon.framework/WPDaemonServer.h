/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/

#import <WPDaemon/WPDaemon-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class WPDState, NSObject, WPDScanManager, WPDAdvertisingManager, WPDZoneManager, WPDPipeManager, WPDObjectDiscoveryManager, WPDClient, WPDPersistence, NSArray, WPDStatsManager, NSMutableDictionary, NSMutableSet, NSMapTable, NSXPCListener, NSString;

@interface WPDaemonServer : NSObject <NSXPCListenerDelegate> {

	unsigned char _coreBluetoothState;
	BOOL _screenOff;
	BOOL _systemLocked;
	BOOL _isTesting;
	int _lockStatusChangedToken;
	int _screenStateToken;
	int _firstUnlockStatusChangedToken;
	long long _cbState;
	WPDState* _wpdState;
	NSObject*<OS_dispatch_queue> _serverQueue;
	WPDScanManager* _scanManager;
	WPDAdvertisingManager* _advertisingManager;
	WPDZoneManager* _zoneManager;
	WPDPipeManager* _pipeManager;
	WPDObjectDiscoveryManager* _objectDiscoveryManager;
	WPDClient* _spObjectDiscoveryClient;
	WPDPersistence* _persistence;
	NSArray* _managers;
	WPDStatsManager* _statsManager;
	NSMutableDictionary* _clients;
	NSMutableSet* _testClients;
	NSMutableSet* _privilegedClients;
	NSMapTable* _clientsWithMach;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;
	unsigned long long _stateCaptureHandle;

}

@property (nonatomic,retain) WPDState * wpdState;                                   //@synthesize wpdState=_wpdState - In the implementation block
@property (assign,nonatomic) long long cbState;                                     //@synthesize cbState=_cbState - In the implementation block
@property (assign) unsigned char coreBluetoothState;                                //@synthesize coreBluetoothState=_coreBluetoothState - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> serverQueue;                        //@synthesize serverQueue=_serverQueue - In the implementation block
@property (retain) WPDScanManager * scanManager;                                    //@synthesize scanManager=_scanManager - In the implementation block
@property (retain) WPDAdvertisingManager * advertisingManager;                      //@synthesize advertisingManager=_advertisingManager - In the implementation block
@property (retain) WPDZoneManager * zoneManager;                                    //@synthesize zoneManager=_zoneManager - In the implementation block
@property (retain) WPDPipeManager * pipeManager;                                    //@synthesize pipeManager=_pipeManager - In the implementation block
@property (retain) WPDObjectDiscoveryManager * objectDiscoveryManager;              //@synthesize objectDiscoveryManager=_objectDiscoveryManager - In the implementation block
@property (readonly) WPDClient * spObjectDiscoveryClient;                           //@synthesize spObjectDiscoveryClient=_spObjectDiscoveryClient - In the implementation block
@property (retain) WPDPersistence * persistence;                                    //@synthesize persistence=_persistence - In the implementation block
@property (nonatomic,retain) NSArray * managers;                                    //@synthesize managers=_managers - In the implementation block
@property (nonatomic,retain) WPDStatsManager * statsManager;                        //@synthesize statsManager=_statsManager - In the implementation block
@property (retain) NSMutableDictionary * clients;                                   //@synthesize clients=_clients - In the implementation block
@property (retain) NSMutableSet * testClients;                                      //@synthesize testClients=_testClients - In the implementation block
@property (retain) NSMutableSet * privilegedClients;                                //@synthesize privilegedClients=_privilegedClients - In the implementation block
@property (retain) NSMapTable * clientsWithMach;                                    //@synthesize clientsWithMach=_clientsWithMach - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (retain) NSXPCListener * listener;                                        //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long stateCaptureHandle;                         //@synthesize stateCaptureHandle=_stateCaptureHandle - In the implementation block
@property (assign,nonatomic) int lockStatusChangedToken;                            //@synthesize lockStatusChangedToken=_lockStatusChangedToken - In the implementation block
@property (assign,nonatomic) int screenStateToken;                                  //@synthesize screenStateToken=_screenStateToken - In the implementation block
@property (assign,nonatomic) int firstUnlockStatusChangedToken;                     //@synthesize firstUnlockStatusChangedToken=_firstUnlockStatusChangedToken - In the implementation block
@property (assign) BOOL screenOff;                                                  //@synthesize screenOff=_screenOff - In the implementation block
@property (assign) BOOL systemLocked;                                               //@synthesize systemLocked=_systemLocked - In the implementation block
@property (assign) BOOL isTesting;                                                  //@synthesize isTesting=_isTesting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)isHomePod;
+(BOOL)isAppleTV;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(WPDPersistence *)persistence;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(void)startListening;
-(NSMutableDictionary *)clients;
-(void)updateState;
-(NSObject*<OS_dispatch_queue>)serverQueue;
-(void)setClients:(NSMutableDictionary *)arg1 ;
-(unsigned long long)stateCaptureHandle;
-(NSArray *)managers;
-(void)setPersistence:(WPDPersistence *)arg1 ;
-(WPDZoneManager *)zoneManager;
-(void)setScreenOff:(BOOL)arg1 ;
-(BOOL)screenOff;
-(void)enableTestMode;
-(void)enableRanging:(BOOL)arg1 ;
-(void)dumpDaemonState;
-(int)screenStateToken;
-(WPDScanManager *)scanManager;
-(void)setScanManager:(WPDScanManager *)arg1 ;
-(void)setServerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)registerForSpringboardNotifications;
-(id)generateStateDump;
-(void)cbManagerDidUpdateState:(id)arg1 ;
-(BOOL)isRangingEnabled;
-(os_state_data_s*)dumpToLog:(BOOL)arg1 State:(BOOL)arg2 ;
-(void)setWpdState:(WPDState *)arg1 ;
-(WPDState *)wpdState;
-(void)setCbState:(long long)arg1 ;
-(void)setAdvertisingManager:(WPDAdvertisingManager *)arg1 ;
-(void)setZoneManager:(WPDZoneManager *)arg1 ;
-(void)setPipeManager:(WPDPipeManager *)arg1 ;
-(void)setStatsManager:(WPDStatsManager *)arg1 ;
-(WPDAdvertisingManager *)advertisingManager;
-(WPDPipeManager *)pipeManager;
-(void)setManagers:(NSArray *)arg1 ;
-(void)setObjectDiscoveryManager:(WPDObjectDiscoveryManager *)arg1 ;
-(WPDObjectDiscoveryManager *)objectDiscoveryManager;
-(WPDClient *)spObjectDiscoveryClient;
-(int)lockStatusChangedToken;
-(int)firstUnlockStatusChangedToken;
-(NSMutableSet *)testClients;
-(void)notifyClientsOfStateChange;
-(long long)cbState;
-(void)notifyManagersOfStateChange;
-(WPDStatsManager *)statsManager;
-(NSMutableSet *)privilegedClients;
-(BOOL)isTesting;
-(void)enableTestMode:(BOOL)arg1 ;
-(NSMapTable *)clientsWithMach;
-(void)initManagers;
-(void)initClients;
-(void)screenStateUpdate;
-(BOOL)systemLocked;
-(void)setSystemLocked:(BOOL)arg1 ;
-(void)lockStateUpdate;
-(void)setIsTesting:(BOOL)arg1 ;
-(BOOL)isClientTestMode:(id)arg1 ;
-(id)getClientForUUID:(id)arg1 ;
-(id)getAllClients;
-(void)registerClient:(id)arg1 withMachName:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)clientForMachName:(id)arg1 ;
-(void)disableScanningForClient:(id)arg1 ;
-(unsigned char)coreBluetoothState;
-(void)setCoreBluetoothState:(unsigned char)arg1 ;
-(void)setTestClients:(NSMutableSet *)arg1 ;
-(void)setPrivilegedClients:(NSMutableSet *)arg1 ;
-(void)setClientsWithMach:(NSMapTable *)arg1 ;
-(void)setLockStatusChangedToken:(int)arg1 ;
-(void)setScreenStateToken:(int)arg1 ;
-(void)setFirstUnlockStatusChangedToken:(int)arg1 ;
@end

