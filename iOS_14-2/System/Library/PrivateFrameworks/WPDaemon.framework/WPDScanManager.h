/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/

#import <WPDaemon/WPDManager.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSIndexSet, CBCentralManager, CBController, NSDictionary, NSSet, NSObject, NSString;

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
	CBController* _cbDiscoveryAsserter;
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
@property (retain) CBController * cbDiscoveryAsserter;                                     //@synthesize cbDiscoveryAsserter=_cbDiscoveryAsserter - In the implementation block
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
-(NSObject*<OS_dispatch_queue>)serverQueue;
-(BOOL)isRanging;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
-(id)generateStateDump;
-(void)setScanning:(BOOL)arg1 ;
-(void)assertCBDiscoveryScan:(BOOL)arg1 ;
-(BOOL)scanning;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)removeSpyScanClient:(id)arg1 ;
-(id)retrievePeripheralWithUUID:(id)arg1 ;
-(void)centralManager:(id)arg1 didFindPeripheral:(id)arg2 forType:(id)arg3 ;
-(void)setScanningDisabled:(BOOL)arg1 ;
-(void)addSpyScanClient:(id)arg1 ;
-(void)setScanOptions:(NSDictionary *)arg1 ;
-(void)centralManager:(id)arg1 didDiscoverMultiplePeripherals:(id)arg2 ;
-(id)removePeerTrackingRequest:(id)arg1 checkZonesAvailable:(BOOL)arg2 forClient:(id)arg3 ;
-(NSMutableDictionary *)peerRequests;
-(NSMutableSet *)peripheralConnections;
-(void)setCentralManager:(CBCentralManager *)arg1 ;
-(BOOL)startTrackingPeripheral:(id)arg1 ofType:(id)arg2 ;
-(id)initWithServer:(id)arg1 ;
-(void)setScanRuleHashes:(NSSet *)arg1 ;
-(void)setPeerRequests:(NSMutableDictionary *)arg1 ;
-(void)removePeripheralConnection:(id)arg1 forClient:(id)arg2 ;
-(id)ruleHashesFromScanOptions:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)centralQueue;
-(NSIndexSet *)currentScanners;
-(void)setScanRequestHashes:(NSSet *)arg1 ;
-(NSMutableSet *)spyScanClients;
-(CBCentralManager *)centralManager;
-(void)setScanRequests:(NSMutableDictionary *)arg1 ;
-(id)addPeerTrackingRequest:(id)arg1 forClient:(id)arg2 ;
-(void)removePeripheralConnectionsForClient:(id)arg1 ;
-(void)update;
-(void)updateScanner;
-(void)setPeripheralConnections:(NSMutableSet *)arg1 ;
-(void)removeScanRequestsForClient:(id)arg1 ;
-(void)removeAllPeerTrackingRequestsForClient:(id)arg1 ;
-(void)reconcileScanRule:(id)arg1 withRule:(id)arg2 ;
-(void)setSpyScanClients:(NSMutableSet *)arg1 ;
-(void)cleanup;
-(void)enableRanging:(BOOL)arg1 ;
-(NSMutableDictionary *)scanRequests;
-(NSSet *)scanRuleHashes;
-(void)clearExistingConnections;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(BOOL)heySiriScanActive:(BOOL)arg1 ;
-(void)setIsRanging:(BOOL)arg1 ;
-(CBController *)cbDiscoveryAsserter;
-(BOOL)updateScanRules;
-(NSSet *)scanRequestHashes;
-(void)setCurrentScanners:(NSIndexSet *)arg1 ;
-(id)connectToPeripheral:(id)arg1 fromClient:(id)arg2 withOptions:(id)arg3 ;
-(void)logScanTypes:(id)arg1 method:(BOOL)arg2 window:(long long)arg3 interval:(long long)arg4 ;
-(void)setCbDiscoveryAsserter:(CBController *)arg1 ;
-(void)setConnectionsInProgress:(NSMutableDictionary *)arg1 ;
-(void)duplicateRulesGuard:(id)arg1 forRule:(id)arg2 ;
-(void)logScanRequests:(id)arg1 method:(BOOL)arg2 window:(long long)arg3 interval:(long long)arg4 ;
-(void)removeConflictingRequest:(id)arg1 forClient:(id)arg2 ;
-(BOOL)isScannerTestMode;
-(id)disconnectFromPeripheral:(id)arg1 withSubscribedCharacteristics:(id)arg2 forClient:(id)arg3 ;
-(NSDictionary *)scanOptions;
-(void)disconnectFromCentral:(id)arg1 forClient:(id)arg2 ;
-(NSIndexSet *)rangingTypes;
-(id)addScanRequest:(id)arg1 forClient:(id)arg2 ;
-(BOOL)scanningDisabled;
-(id)removeScanRequest:(id)arg1 forClient:(id)arg2 ;
-(void)centralManager:(id)arg1 didFailToScanWithError:(id)arg2 ;
-(void)setCentralQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)centralManager:(id)arg1 didLosePeripheral:(id)arg2 forType:(id)arg3 ;
-(NSMutableDictionary *)connectionsInProgress;
-(void)stopTrackingPeripheral:(id)arg1 ofType:(id)arg2 ;
-(id)scanRequestHashesFromScanRequests:(id)arg1 ;
-(void)setServerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)scanOptionsChanged:(id)arg1 ForRequests:(id)arg2 ;
-(id)getScanRequestsForClient:(id)arg1 ;
@end

