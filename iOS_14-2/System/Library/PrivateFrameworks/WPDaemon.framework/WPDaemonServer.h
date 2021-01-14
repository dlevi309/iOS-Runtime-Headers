/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/

#import <WPDaemon/WPDaemon-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class WPDAdvertisingManager, WPDStatsManager, WPDState, NSObject, WPDScanManager, WPDZoneManager, WPDPipeManager, WPDObjectDiscoveryManager, WPDClient, WPDPersistence, NSArray, NSMutableDictionary, NSMutableSet, NSMapTable, NSXPCListener, NSString;

@interface WPDaemonServer : NSObject <NSXPCListenerDelegate> {

	unsigned char _coreBluetoothState;
	BOOL _screenOff;
	BOOL _systemLocked;
	BOOL _isTesting;
	int _lockStatusChangedToken;
	int _screenStateToken;
	int _firstUnlockStatusChangedToken;
	long long _cbState;
	WPDAdvertisingManager* _advertisingManager;
	WPDStatsManager* _statsManager;
	WPDState* _wpdState;
	NSObject*<OS_dispatch_queue> _serverQueue;
	WPDScanManager* _scanManager;
	WPDZoneManager* _zoneManager;
	WPDPipeManager* _pipeManager;
	WPDObjectDiscoveryManager* _objectDiscoveryManager;
	WPDClient* _spObjectDiscoveryClient;
	WPDPersistence* _persistence;
	NSArray* _managers;
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
-(void)addClient:(id)arg1 ;
-(void)setPipeManager:(WPDPipeManager *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serverQueue;
-(NSMutableDictionary *)clients;
-(WPDPersistence *)persistence;
-(int)firstUnlockStatusChangedToken;
-(WPDPipeManager *)pipeManager;
-(id)generateStateDump;
-(void)setPersistence:(WPDPersistence *)arg1 ;
-(void)setObjectDiscoveryManager:(WPDObjectDiscoveryManager *)arg1 ;
-(void)startListening;
-(unsigned long long)stateCaptureHandle;
-(id)init;
-(unsigned char)coreBluetoothState;
-(WPDStatsManager *)statsManager;
-(int)lockStatusChangedToken;
-(id)clientForMachName:(id)arg1 ;
-(void)enableTestMode:(BOOL)arg1 ;
-(void)setStatsManager:(WPDStatsManager *)arg1 ;
-(void)setIsTesting:(BOOL)arg1 ;
-(NSArray *)managers;
-(void)setCbState:(long long)arg1 ;
-(void)lockStateUpdate;
-(WPDZoneManager *)zoneManager;
-(void)setFirstUnlockStatusChangedToken:(int)arg1 ;
-(NSMapTable *)clientsWithMach;
-(NSMutableSet *)testClients;
-(void)removeClient:(id)arg1 ;
-(WPDScanManager *)scanManager;
-(id)getAllClients;
-(void)enableTestMode;
-(void)screenStateUpdate;
-(os_state_data_s*)dumpToLog:(BOOL)arg1 State:(BOOL)arg2 ;
-(void)setSystemLocked:(BOOL)arg1 ;
-(BOOL)isTesting;
-(void)cbManagerDidUpdateState:(id)arg1 ;
-(void)disableScanningForClient:(id)arg1 ;
-(NSXPCListener *)listener;
-(void)updateState;
-(void)setScanManager:(WPDScanManager *)arg1 ;
-(void)registerForSpringboardNotifications;
-(WPDAdvertisingManager *)advertisingManager;
-(void)setWpdState:(WPDState *)arg1 ;
-(void)setLockStatusChangedToken:(int)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)systemLocked;
-(void)enableRanging:(BOOL)arg1 ;
-(void)initClients;
-(void)setZoneManager:(WPDZoneManager *)arg1 ;
-(void)dumpDaemonState;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)notifyClientsOfStateChange;
-(BOOL)screenOff;
-(void)setAdvertisingManager:(WPDAdvertisingManager *)arg1 ;
-(void)setScreenOff:(BOOL)arg1 ;
-(int)screenStateToken;
-(void)setManagers:(NSArray *)arg1 ;
-(BOOL)isRangingEnabled;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setScreenStateToken:(int)arg1 ;
-(WPDState *)wpdState;
-(id)getClientForUUID:(id)arg1 ;
-(void)setClientsWithMach:(NSMapTable *)arg1 ;
-(void)setPrivilegedClients:(NSMutableSet *)arg1 ;
-(WPDObjectDiscoveryManager *)objectDiscoveryManager;
-(void)registerClient:(id)arg1 withMachName:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setTestClients:(NSMutableSet *)arg1 ;
-(WPDClient *)spObjectDiscoveryClient;
-(long long)cbState;
-(BOOL)isClientTestMode:(id)arg1 ;
-(void)setCoreBluetoothState:(unsigned char)arg1 ;
-(void)notifyManagersOfStateChange;
-(void)setClients:(NSMutableDictionary *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)setServerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableSet *)privilegedClients;
-(void)initManagers;
@end

