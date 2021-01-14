/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/

#import <WPDaemon/WPDManager.h>
#import <libobjc.A.dylib/CBPeripheralManagerDelegate.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <WPDaemon/WPDObjectDiscoveryAdvertiser.h>
#import <WPDaemon/WPDObjectDiscoveryScanner.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, CBPeripheralManager, WPAdvertisingRequest, NSUUID, NSDictionary, CBCentralManager, NSMutableDictionary, NSMutableSet, NSArray, NSString;

@interface WPDObjectDiscoveryManager : WPDManager <CBPeripheralManagerDelegate, CBCentralManagerDelegate, WPDObjectDiscoveryAdvertiser, WPDObjectDiscoveryScanner> {

	BOOL _scanning;
	BOOL _scanningDisabled;
	BOOL _advertising;
	BOOL _advWhiteListed;
	BOOL _scanWhiteListed;
	NSObject*<OS_dispatch_queue> _serverQueue;
	CBPeripheralManager* _peripheralManager;
	WPAdvertisingRequest* _advertRequest;
	NSUUID* _advertClientUUID;
	NSDictionary* _advertOptions;
	unsigned long long _advertHash;
	CBCentralManager* _centralManager;
	NSMutableDictionary* _scanRequests;
	NSMutableSet* _currentScanners;
	NSDictionary* _scanOptions;
	NSObject*<OS_dispatch_source> _scanStopTimer;
	NSArray* _nearbyTokensRequest;
	NSArray* _matchActionRules;

}

@property (__weak,readonly) NSObject*<OS_dispatch_queue> serverQueue;              //@synthesize serverQueue=_serverQueue - In the implementation block
@property (retain) CBPeripheralManager * peripheralManager;                        //@synthesize peripheralManager=_peripheralManager - In the implementation block
@property (assign) BOOL advertising;                                               //@synthesize advertising=_advertising - In the implementation block
@property (retain) WPAdvertisingRequest * advertRequest;                           //@synthesize advertRequest=_advertRequest - In the implementation block
@property (__weak) NSUUID * advertClientUUID;                                      //@synthesize advertClientUUID=_advertClientUUID - In the implementation block
@property (retain) NSDictionary * advertOptions;                                   //@synthesize advertOptions=_advertOptions - In the implementation block
@property (assign) unsigned long long advertHash;                                  //@synthesize advertHash=_advertHash - In the implementation block
@property (nonatomic,readonly) BOOL advWhiteListed;                                //@synthesize advWhiteListed=_advWhiteListed - In the implementation block
@property (assign) BOOL scanning;                                                  //@synthesize scanning=_scanning - In the implementation block
@property (retain) CBCentralManager * centralManager;                              //@synthesize centralManager=_centralManager - In the implementation block
@property (retain) NSMutableDictionary * scanRequests;                             //@synthesize scanRequests=_scanRequests - In the implementation block
@property (retain) NSMutableSet * currentScanners;                                 //@synthesize currentScanners=_currentScanners - In the implementation block
@property (retain) NSDictionary * scanOptions;                                     //@synthesize scanOptions=_scanOptions - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> scanStopTimer;                    //@synthesize scanStopTimer=_scanStopTimer - In the implementation block
@property (retain) NSArray * nearbyTokensRequest;                                  //@synthesize nearbyTokensRequest=_nearbyTokensRequest - In the implementation block
@property (retain) NSArray * matchActionRules;                                     //@synthesize matchActionRules=_matchActionRules - In the implementation block
@property (nonatomic,readonly) BOOL scanWhiteListed;                               //@synthesize scanWhiteListed=_scanWhiteListed - In the implementation block
@property (assign) BOOL scanningDisabled;                                          //@synthesize scanningDisabled=_scanningDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)serverQueue;
-(id)rulesFromTokens:(id)arg1 ;
-(void)removeAdvertisingRequestsForClient:(id)arg1 ;
-(id)generateStateDump;
-(void)setScanning:(BOOL)arg1 ;
-(BOOL)advertising;
-(BOOL)scanning;
-(void)forceReadADVBuffer:(id)arg1 ;
-(void)updateReports:(id)arg1 fromReport:(id)arg2 ;
-(void)peripheralManager:(id)arg1 didStopAdvertisingWithError:(id)arg2 ;
-(WPAdvertisingRequest *)advertRequest;
-(BOOL)updateAdvertisingOptionsWithError:(id*)arg1 ;
-(void)setScanningDisabled:(BOOL)arg1 ;
-(void)setAdvertising:(BOOL)arg1 ;
-(void)setMatchActionRules:(NSArray *)arg1 ;
-(void)cancelScanStopTimer;
-(void)updateReports:(id)arg1 Peripheral:(id)arg2 AdvertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)updateNearbyTokens:(id)arg1 ;
-(void)resetAdvertiser;
-(void)setScanOptions:(NSDictionary *)arg1 ;
-(void)centralManager:(id)arg1 didDiscoverMultiplePeripherals:(id)arg2 ;
-(void)setCentralManager:(CBCentralManager *)arg1 ;
-(id)initWithServer:(id)arg1 ;
-(CBPeripheralManager *)peripheralManager;
-(id)removeAdvertisingRequest:(id)arg1 forClient:(id)arg2 ;
-(NSMutableSet *)currentScanners;
-(void)deactivateADVBuffer;
-(void)setAdvertRequest:(WPAdvertisingRequest *)arg1 ;
-(void)updateClientsWithReports:(id)arg1 ;
-(void)stopAdvertiser;
-(CBCentralManager *)centralManager;
-(void)setScanRequests:(NSMutableDictionary *)arg1 ;
-(void)update;
-(void)updateScanner;
-(void)setAdvertHash:(unsigned long long)arg1 ;
-(void)removeScanRequestsForClient:(id)arg1 ;
-(void)setAdvertClientUUID:(NSUUID *)arg1 ;
-(id)spoofNearOwnerWithPayload:(id)arg1 ;
-(void)setPeripheralManager:(CBPeripheralManager *)arg1 ;
-(void)cleanup;
-(NSMutableDictionary *)scanRequests;
-(void)setScanStopTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)addScanStopTimer;
-(void)startAdvertiser;
-(id)addAdvertisingRequest:(id)arg1 forClient:(id)arg2 ;
-(BOOL)updateScanRules;
-(NSArray *)nearbyTokensRequest;
-(void)activateADVBuffer;
-(void)setCurrentScanners:(NSMutableSet *)arg1 ;
-(NSArray *)matchActionRules;
-(unsigned long long)advertHash;
-(BOOL)advWhiteListed;
-(void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2 ;
-(NSUUID *)advertClientUUID;
-(BOOL)changedScanOptions:(id)arg1 Clients:(id)arg2 ;
-(BOOL)advertOptionsChanged:(id)arg1 ;
-(BOOL)scanWhiteListed;
-(NSDictionary *)scanOptions;
-(id)addScanRequest:(id)arg1 forClient:(id)arg2 ;
-(void)setAdvertOptions:(NSDictionary *)arg1 ;
-(BOOL)scanningDisabled;
-(NSObject*<OS_dispatch_source>)scanStopTimer;
-(void)centralManager:(id)arg1 didFailToScanWithError:(id)arg2 ;
-(void)setNearbyTokensRequest:(NSArray *)arg1 ;
-(id)updateAdvertiser;
-(NSDictionary *)advertOptions;
-(id)getScanRequestsForClient:(id)arg1 ;
@end

