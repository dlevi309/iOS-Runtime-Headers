/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAPAccessoryServerBrowser.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/HAPAccessoryServerBrowserWiProxBTLEDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HAPAccessoryServerBrowserBTLEDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, CBCentralManager, CBConnectionsObserver, HAPAccessoryServerBrowserWiProxBTLE, NSMapTable, NSMutableArray, NSMutableOrderedSet, NSString;

@interface HAPAccessoryServerBrowserBTLE : HAPAccessoryServerBrowser <CBCentralManagerDelegate, HAPAccessoryServerBrowserWiProxBTLEDelegate, HMFLogging> {

	BOOL _performingGeneralScan;
	unsigned long long _qosLimits;
	id<HAPAccessoryServerBrowserBTLEDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	CBCentralManager* _centralManager;
	CBConnectionsObserver* _connectionsObserver;
	HAPAccessoryServerBrowserWiProxBTLE* _hapWiProxBLEBrowser;
	NSMapTable* _discoveredPeripheralsWithAccessories;
	NSMapTable* _recentlySeenPairedPeripherals;
	NSMutableArray* _powerOnCentralManagerCompletions;
	/*^block*/id _reachabilityCompletion;
	NSMutableOrderedSet* _peripheralsWithConnectionRequests;
	NSMutableArray* _peripheralsPendingConnection;
	NSObject*<OS_dispatch_source> _targetedScanTimer;
	NSMutableArray* _targetedScanAccessoryIdentifiers;
	NSMapTable* _identifersWithReachabilityScanTuples;
	long long _scanState;

}

@property (assign,nonatomic) unsigned long long qosLimits;                                             //@synthesize qosLimits=_qosLimits - In the implementation block
@property (assign,nonatomic,__weak) id<HAPAccessoryServerBrowserBTLEDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                               //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) CBCentralManager * centralManager;                                        //@synthesize centralManager=_centralManager - In the implementation block
@property (nonatomic,retain) CBConnectionsObserver * connectionsObserver;                              //@synthesize connectionsObserver=_connectionsObserver - In the implementation block
@property (nonatomic,retain) HAPAccessoryServerBrowserWiProxBTLE * hapWiProxBLEBrowser;                //@synthesize hapWiProxBLEBrowser=_hapWiProxBLEBrowser - In the implementation block
@property (nonatomic,retain) NSMapTable * discoveredPeripheralsWithAccessories;                        //@synthesize discoveredPeripheralsWithAccessories=_discoveredPeripheralsWithAccessories - In the implementation block
@property (nonatomic,retain) NSMapTable * recentlySeenPairedPeripherals;                               //@synthesize recentlySeenPairedPeripherals=_recentlySeenPairedPeripherals - In the implementation block
@property (nonatomic,retain) NSMutableArray * powerOnCentralManagerCompletions;                        //@synthesize powerOnCentralManagerCompletions=_powerOnCentralManagerCompletions - In the implementation block
@property (nonatomic,copy) id reachabilityCompletion;                                                  //@synthesize reachabilityCompletion=_reachabilityCompletion - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * peripheralsWithConnectionRequests;                  //@synthesize peripheralsWithConnectionRequests=_peripheralsWithConnectionRequests - In the implementation block
@property (nonatomic,retain) NSMutableArray * peripheralsPendingConnection;                            //@synthesize peripheralsPendingConnection=_peripheralsPendingConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> targetedScanTimer;                          //@synthesize targetedScanTimer=_targetedScanTimer - In the implementation block
@property (nonatomic,retain) NSMutableArray * targetedScanAccessoryIdentifiers;                        //@synthesize targetedScanAccessoryIdentifiers=_targetedScanAccessoryIdentifiers - In the implementation block
@property (nonatomic,retain) NSMapTable * identifersWithReachabilityScanTuples;                        //@synthesize identifersWithReachabilityScanTuples=_identifersWithReachabilityScanTuples - In the implementation block
@property (assign,nonatomic) long long scanState;                                                      //@synthesize scanState=_scanState - In the implementation block
@property (getter=isPerformingGeneralScan,nonatomic,readonly) BOOL performingGeneralScan;              //@synthesize performingGeneralScan=_performingGeneralScan - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)pauseScans;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)resetPairedAccessories;
-(id)initWithQueue:(id)arg1 ;
-(void)deRegisterAccessoryWithIdentifier:(id)arg1 ;
-(long long)scanState;
-(void)setHapWiProxBLEBrowser:(HAPAccessoryServerBrowserWiProxBTLE *)arg1 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)retrieveCurrentStateForIdentifer:(id)arg1 onQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(BOOL)isPerformingGeneralScan;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)setTargetedScanTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(CBConnectionsObserver *)connectionsObserver;
-(BOOL)_hasRecentlySeenAccessoriesWithIdentifiers:(id)arg1 ;
-(void)setIdentifersWithReachabilityScanTuples:(NSMapTable *)arg1 ;
-(void)_removeFromPendingConnections:(id)arg1 ;
-(void)_performTargetedScanForAccessoryWithIdentifier:(id)arg1 ;
-(id)hapCharacteristicsForEncryptedPayload:(id)arg1 identifier:(id)arg2 shouldConnect:(BOOL*)arg3 ;
-(void)_handleTargetedScanTimeout;
-(id<HAPAccessoryServerBrowserBTLEDelegate>)delegate;
-(void)updateBroadcastKeyForIdentifer:(id)arg1 key:(id)arg2 keyUpdatedStateNumber:(id)arg3 keyUpdatedTime:(double)arg4 ;
-(void)accessoryServerBrowserBTLE:(id)arg1 didDiscoverHAPPeripheral:(id)arg2 accessoryName:(id)arg3 pairingIdentifier:(id)arg4 advertisementFormat:(unsigned long long)arg5 statusFlags:(id)arg6 stateNumber:(id)arg7 category:(id)arg8 configurationNumber:(id)arg9 setupHash:(id)arg10 encryptedPayload:(id)arg11 ;
-(void)_performTimedScanForIdentifiers:(id)arg1 workQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(long long)linkType;
-(void)_stopActiveScan;
-(BOOL)_shouldCreateHAPAccessoryServerWithIdentifier:(id)arg1 statusFlags:(id)arg2 stateNumber:(id)arg3 category:(id)arg4 configNumber:(id)arg5 forPeripheral:(id)arg6 advertisementFormat:(unsigned long long)arg7 setupHash:(id)arg8 stateChanged:(BOOL*)arg9 connectReason:(unsigned char*)arg10 ;
-(void)_probeReachabilityForAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(NSMapTable *)identifersWithReachabilityScanTuples;
-(void)disconnectedHAPPeripheral:(id)arg1 error:(id)arg2 ;
-(void)setCentralManager:(CBCentralManager *)arg1 ;
-(void)setConnectionLatency:(long long)arg1 forPeripheral:(id)arg2 ;
-(id)_cachedCharacteristicForInstanceID:(id)arg1 identifier:(id)arg2 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSMapTable *)recentlySeenPairedPeripherals;
-(void)updateCachedStateForIdentifier:(id)arg1 stateNumber:(id)arg2 ;
-(void)probeReachabilityForAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setDiscoveredPeripheralsWithAccessories:(NSMapTable *)arg1 ;
-(id)_recentlySeenPairedPeripheralTupleWithPeripheral:(id)arg1 ;
-(void)setRecentlySeenPairedPeripherals:(NSMapTable *)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CBCentralManager *)centralManager;
-(void)_reportReachabilityForAccessoryWithIdentifier:(id)arg1 ;
-(void)setDelegate:(id<HAPAccessoryServerBrowserBTLEDelegate>)arg1 ;
-(void)_disconectFromHAPPeripheral:(id)arg1 ;
-(void)setReachabilityCompletion:(id)arg1 ;
-(void)_powerOnCentralManagerWithCompletion:(/*^block*/id)arg1 ;
-(void)saveCacheToDisk:(id)arg1 ;
-(void)_updateTargetedScanTimer;
-(BOOL)_hasPairedAccessoriesOfType:(unsigned long long)arg1 ;
-(NSMutableOrderedSet *)peripheralsWithConnectionRequests;
-(HAPAccessoryServerBrowserWiProxBTLE *)hapWiProxBLEBrowser;
-(void)_startScanningForReachability:(id)arg1 ;
-(void)setQosLimits:(unsigned long long)arg1 ;
-(void)configureAccessoryWithIdentifier:(id)arg1 trackState:(BOOL)arg2 connectionPriority:(unsigned long long)arg3 ;
-(void)_callPowerOnCompletionsWithError:(id)arg1 ;
-(void)_addToPendingConnections:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setReachabilityCompletionHandler:(/*^block*/id)arg1 ;
-(void)_didDiscoverPeripheral:(id)arg1 accessoryName:(id)arg2 pairingIdentifier:(id)arg3 format:(unsigned long long)arg4 statusFlags:(id)arg5 stateNumber:(id)arg6 category:(id)arg7 configNumber:(id)arg8 setupHash:(id)arg9 encryptedPayload:(id)arg10 ;
-(void)_matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_connectHAPPeripheralWhenAllowed:(id)arg1 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)setPeripheralsPendingConnection:(NSMutableArray *)arg1 ;
-(void)stopTrackingBTLEAccessoriesWithIdentifiers:(id)arg1 ;
-(void)markNotifyingCharacteristicUpdatedForIdentifier:(id)arg1 ;
-(void)_performTimedConnectionRequestForIdentifier:(id)arg1 ;
-(void)connectedHAPPeripheral:(id)arg1 ;
-(id)cachedAccessoryForIdentifier:(id)arg1 ;
-(void)updateStateForIdentifier:(id)arg1 stateNumber:(id)arg2 ;
-(void)_startDiscoveringAccessoryServers;
-(id)reachabilityCompletion;
-(NSMutableArray *)powerOnCentralManagerCompletions;
-(void)discoverAccessoryServerWithIdentifier:(id)arg1 ;
-(void)failedToConnectHAPPeripheral:(id)arg1 error:(id)arg2 ;
-(void)_connectPendingConnections;
-(unsigned long long)_parseAdvertisementData:(id)arg1 forPeripheral:(id)arg2 name:(id*)arg3 pairingUsername:(id*)arg4 statusFlags:(id*)arg5 stateNumber:(id*)arg6 category:(id*)arg7 configNumber:(id*)arg8 setupHash:(id*)arg9 ;
-(void)_createHAPAccessoryAndNotifyDelegateWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 stateChanged:(BOOL)arg6 connectReason:(unsigned char)arg7 configNumber:(id)arg8 category:(id)arg9 connectionIdleTime:(unsigned char)arg10 format:(unsigned long long)arg11 setupHash:(id)arg12 encryptedPayload:(id)arg13 ;
-(NSMutableArray *)peripheralsPendingConnection;
-(BOOL)_delegateRespondsToSelector:(SEL)arg1 ;
-(void)removeCachedAccessoryWithIdentifier:(id)arg1 ;
-(NSMapTable *)discoveredPeripheralsWithAccessories;
-(void)stopDiscoveringAccessoryServers;
-(id)_getDiscoveredPeripheralMatchingIdentifier:(id)arg1 ;
-(unsigned long long)qosLimits;
-(void)setConnectionsObserver:(CBConnectionsObserver *)arg1 ;
-(void)disconnectFromBTLEAccessoryServer:(id)arg1 ;
-(void)connectToBTLEAccessoryServer:(id)arg1 ;
-(void)_removeIdentifiersForReachabilityScan;
-(void)_forgetPairedAccesoryWithIdentifier:(id)arg1 ;
-(void)setScanState:(long long)arg1 ;
-(void)setTargetedScanAccessoryIdentifiers:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_source>)targetedScanTimer;
-(void)configureBTLEQoSLimits:(unsigned long long)arg1 ;
-(void)_discoverAccessoryServerWithIdentifier:(id)arg1 ;
-(void)setPowerOnCentralManagerCompletions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)targetedScanAccessoryIdentifiers;
-(void)_notifyDelegatesOfRemovedAccessoryServer:(id)arg1 error:(id)arg2 ;
-(void)setPeripheralsWithConnectionRequests:(NSMutableOrderedSet *)arg1 ;
-(void)_startScanningForPairingPeers;
-(void)startDiscoveringAccessoryServers;
-(void)resetLastSeenForAccessoryServersWithIdentifers:(id)arg1 ;
-(void)setPerformingGeneralScan:(BOOL)arg1 ;
@end

