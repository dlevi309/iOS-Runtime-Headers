/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/

#import <WPDaemon/WPDManager.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSIndexSet, CBCentralManager, NSDictionary, NSSet, NSObject, NSString;

@interface WPDScanManager : WPDManager <CBCentralManagerDelegate> {

	BOOL _scanning;
	BOOL _scanningDisabled;
	BOOL _isRanging;
	NSMutableDictionary* _scanRequests;
	NSMutableDictionary* _peerRequests;
	NSMutableDictionary* _connectionsInProgress;
	NSMutableSet* _peripheralConnections;
	NSIndexSet* _currentScanners;
	CBCentralManager* _centralManager;
	NSMutableSet* _spyScanClients;
	NSDictionary* _scanOptions;
	NSSet* _scanRequestHashes;
	NSSet* _scanRuleHashes;
	NSObject*<OS_dispatch_queue> _serverQueue;
	NSObject*<OS_dispatch_queue> _centralQueue;
	NSIndexSet* _rangingTypes;

}

@property (retain) NSMutableDictionary * scanRequests;                                     //@synthesize scanRequests=_scanRequests - In the implementation block
@property (retain) NSMutableDictionary * peerRequests;                                     //@synthesize peerRequests=_peerRequests - In the implementation block
@property (retain) NSMutableDictionary * connectionsInProgress;                            //@synthesize connectionsInProgress=_connectionsInProgress - In the implementation block
@property (retain) NSMutableSet * peripheralConnections;                                   //@synthesize peripheralConnections=_peripheralConnections - In the implementation block
@property (retain) NSIndexSet * currentScanners;                                           //@synthesize currentScanners=_currentScanners - In the implementation block
@property (retain) CBCentralManager * centralManager;                                      //@synthesize centralManager=_centralManager - In the implementation block
@property (assign) BOOL scanning;                                                          //@synthesize scanning=_scanning - In the implementation block
@property (retain) NSMutableSet * spyScanClients;                                          //@synthesize spyScanClients=_spyScanClients - In the implementation block
@property (retain) NSDictionary * scanOptions;                                             //@synthesize scanOptions=_scanOptions - In the implementation block
@property (retain) NSSet * scanRequestHashes;                                              //@synthesize scanRequestHashes=_scanRequestHashes - In the implementation block
@property (retain) NSSet * scanRuleHashes;                                                 //@synthesize scanRuleHashes=_scanRuleHashes - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_queue> serverQueue;              //@synthesize serverQueue=_serverQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> centralQueue;                    //@synthesize centralQueue=_centralQueue - In the implementation block
@property (assign,nonatomic) BOOL isRanging;                                               //@synthesize isRanging=_isRanging - In the implementation block
@property (nonatomic,readonly) NSIndexSet * rangingTypes;                                  //@synthesize rangingTypes=_rangingTypes - In the implementation block
@property (assign) BOOL scanningDisabled;                                                  //@synthesize scanningDisabled=_scanningDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)zonesAvailableForType:(unsigned char)arg1 ;
-(void)cleanup;
-(void)update;
-(id)initWithServer:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serverQueue;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didFindPeripheral:(id)arg2 forType:(id)arg3 ;
-(void)centralManager:(id)arg1 didLosePeripheral:(id)arg2 forType:(id)arg3 ;
-(void)centralManager:(id)arg1 didDiscoverMultiplePeripherals:(id)arg2 ;
-(void)centralManager:(id)arg1 didFailToScanWithError:(id)arg2 ;
-(void)enableRanging:(BOOL)arg1 ;
-(void)setScanning:(BOOL)arg1 ;
-(BOOL)scanning;
-(void)setCentralManager:(CBCentralManager *)arg1 ;
-(CBCentralManager *)centralManager;
-(void)setServerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)generateStateDump;
-(BOOL)scanningDisabled;
-(void)setScanningDisabled:(BOOL)arg1 ;
-(void)updateScanner;
-(void)removeScanRequestsForClient:(id)arg1 ;
-(void)removePeripheralConnectionsForClient:(id)arg1 ;
-(void)removeAllPeerTrackingRequestsForClient:(id)arg1 ;
-(void)removeSpyScanClient:(id)arg1 ;
-(void)addSpyScanClient:(id)arg1 ;
-(id)addScanRequest:(id)arg1 forClient:(id)arg2 ;
-(id)removeScanRequest:(id)arg1 forClient:(id)arg2 ;
-(id)addPeerTrackingRequest:(id)arg1 forClient:(id)arg2 ;
-(id)removePeerTrackingRequest:(id)arg1 checkZonesAvailable:(BOOL)arg2 forClient:(id)arg3 ;
-(id)connectToPeripheral:(id)arg1 fromClient:(id)arg2 withOptions:(id)arg3 ;
-(void)removePeripheralConnection:(id)arg1 forClient:(id)arg2 ;
-(id)disconnectFromPeripheral:(id)arg1 withSubscribedCharacteristics:(id)arg2 forClient:(id)arg3 ;
-(void)disconnectFromCentral:(id)arg1 forClient:(id)arg2 ;
-(id)getScanRequestsForClient:(id)arg1 ;
-(BOOL)isRanging;
-(void)setIsRanging:(BOOL)arg1 ;
-(NSDictionary *)scanOptions;
-(NSMutableDictionary *)scanRequests;
-(NSIndexSet *)currentScanners;
-(void)setScanOptions:(NSDictionary *)arg1 ;
-(BOOL)updateScanRules;
-(void)setScanRequests:(NSMutableDictionary *)arg1 ;
-(void)setCurrentScanners:(NSIndexSet *)arg1 ;
-(NSMutableSet *)peripheralConnections;
-(NSMutableSet *)spyScanClients;
-(NSIndexSet *)rangingTypes;
-(NSMutableDictionary *)peerRequests;
-(NSMutableDictionary *)connectionsInProgress;
-(BOOL)scanOptionsChanged:(id)arg1 ForRequests:(id)arg2 ;
-(void)logScanRequests:(id)arg1 method:(BOOL)arg2 window:(long long)arg3 interval:(long long)arg4 ;
-(id)ruleHashesFromScanOptions:(id)arg1 ;
-(id)scanRequestHashesFromScanRequests:(id)arg1 ;
-(NSSet *)scanRequestHashes;
-(NSSet *)scanRuleHashes;
-(void)setScanRequestHashes:(NSSet *)arg1 ;
-(void)setScanRuleHashes:(NSSet *)arg1 ;
-(void)clearExistingConnections;
-(BOOL)startTrackingPeripheral:(id)arg1 ofType:(id)arg2 ;
-(void)stopTrackingPeripheral:(id)arg1 ofType:(id)arg2 ;
-(id)retrievePeripheralWithUUID:(id)arg1 ;
-(void)setPeerRequests:(NSMutableDictionary *)arg1 ;
-(void)setConnectionsInProgress:(NSMutableDictionary *)arg1 ;
-(void)setPeripheralConnections:(NSMutableSet *)arg1 ;
-(void)setSpyScanClients:(NSMutableSet *)arg1 ;
-(NSObject*<OS_dispatch_queue>)centralQueue;
-(void)setCentralQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

