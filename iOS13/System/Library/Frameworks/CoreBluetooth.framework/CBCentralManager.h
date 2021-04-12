/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <CoreBluetooth/CBManager.h>

@protocol CBCentralManagerDelegate;
@class NSMapTable, NSMutableArray;

@interface CBCentralManager : CBManager {

	struct {
		unsigned willRestoreState : 1;
		unsigned didDiscoverPeripheral : 1;
		unsigned didConnectPeripheral : 1;
		unsigned didFailToConnectPeripheral : 1;
		unsigned didDisconnectPeripheral : 1;
		unsigned didUpdatePeripheralConnectionState : 1;
		unsigned didFindPeripheral : 1;
		unsigned didLosePeripheral : 1;
		unsigned didLoseZone : 1;
		unsigned didUpdateConnectionParameters : 1;
		unsigned connectionEventDidOccur : 1;
		unsigned didSendBytesToPeripheralWithError : 1;
		unsigned didReceiveDataFromPeripheral : 1;
		unsigned didDiscoverMultiplePeripherals : 1;
		unsigned didUpdateANCSAuthorizationForPeripheral : 1;
		unsigned canSendDataToPeripheral : 1;
		unsigned didFailToStartScanWithError : 1;
		unsigned didUpdateControllerBTClockForPeripheral : 1;
	}  _delegateFlags;
	BOOL _isScanning;
	id<CBCentralManagerDelegate> _delegate;
	NSMapTable* _peripherals;
	NSMutableArray* _discoveredPeripherals;

}

@property (assign,nonatomic) BOOL isScanning;                                           //@synthesize isScanning=_isScanning - In the implementation block
@property (nonatomic,retain,readonly) NSMapTable * peripherals;                         //@synthesize peripherals=_peripherals - In the implementation block
@property (retain) NSMutableArray * discoveredPeripherals;                              //@synthesize discoveredPeripherals=_discoveredPeripherals - In the implementation block
@property (assign,nonatomic,__weak) id<CBCentralManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)supportsFeatures:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id<CBCentralManagerDelegate>)delegate;
-(void)setDelegate:(id<CBCentralManagerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setDesiredConnectionLatency:(long long)arg1 forPeripheral:(id)arg2 ;
-(void)connectPeripheral:(id)arg1 options:(id)arg2 ;
-(id)retrievePeripheralsWithIdentifiers:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 ;
-(void)cancelPeripheralConnection:(id)arg1 ;
-(void)stopScan;
-(void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2 ;
-(id)retrievePeripheralWithAddress:(id)arg1 ;
-(id)dataArrayToUUIDArray:(id)arg1 ;
-(void)handleMsg:(unsigned short)arg1 args:(id)arg2 ;
-(id)peripheralWithInfo:(id)arg1 ;
-(void)forEachPeripheral:(/*^block*/id)arg1 ;
-(void)orphanPeripherals;
-(void)setIsScanning:(BOOL)arg1 ;
-(id)peripheralWithIdentifier:(id)arg1 ;
-(id)retrieveConnectedPeripheralsWithServices:(id)arg1 ;
-(id)retrieveConnectedPeripheralsWithServices:(id)arg1 allowAll:(BOOL)arg2 ;
-(void)cancelPeripheralConnection:(id)arg1 options:(id)arg2 ;
-(BOOL)isMsgAllowedAlways:(unsigned short)arg1 ;
-(void)handleRestoringState:(id)arg1 ;
-(void)handlePeripheralDiscovered:(id)arg1 ;
-(void)handlePeripheralConnectionCompleted:(id)arg1 ;
-(void)handlePeripheralCLReady:(id)arg1 ;
-(void)handlePeripheralDisconnectionCompleted:(id)arg1 ;
-(void)handlePeripheralConnectionStateUpdated:(id)arg1 ;
-(void)handlePeripheralTrackingUpdated:(id)arg1 ;
-(void)handleZoneLost:(id)arg1 ;
-(void)HandleControllerBTClockUpdateMsg:(id)arg1 ;
-(void)handleConnectionParametersUpdated:(id)arg1 ;
-(void)handleAdvertisingAddressChanged:(id)arg1 ;
-(void)handleApplicationActivityEvent:(id)arg1 ;
-(void)handleApplicationConnectionEventDidOccur:(id)arg1 ;
-(void)handleScanFailedToStartWithError:(id)arg1 ;
-(void)handleReadyForUpdates:(id)arg1 ;
-(void)handleDidSendBytesToPeripheralwithError:(id)arg1 ;
-(void)handleDidReceiveDataFromPeripheral:(id)arg1 ;
-(void)handleSupportedFeatures:(id)arg1 ;
-(void)handleAncsAuthChanged:(id)arg1 ;
-(id)peerWithInfo:(id)arg1 ;
-(void)retrievePeripherals:(id)arg1 ;
-(id)retrieveState;
-(void)retrieveConnectedPeripherals;
-(void)randomizeAFHMapForPeripheral:(id)arg1 ;
-(void)wipeDuplicateFilterList:(id)arg1 ;
-(void)addAdvancedMatchingRule:(id)arg1 ;
-(void)removeAdvancedMatchingRule:(id)arg1 ;
-(void)setEnhancedScanEnable:(id)arg1 ;
-(void)setEnhancedSetScanParamtersMultiCore:(id)arg1 ;
-(void)removeSingleEntryDuplicateFilter:(id)arg1 ;
-(unsigned short)getTotalSupportedAdvancedMatchingRules;
-(unsigned short)getRemainingAdvancedMatchingRule;
-(void)setDataLengthChange:(id)arg1 options:(id)arg2 ;
-(void)setLESetPhy:(id)arg1 options:(id)arg2 ;
-(void)cancelPeripheralConnection:(id)arg1 force:(BOOL)arg2 ;
-(void)startTrackingPeripheral:(id)arg1 options:(id)arg2 ;
-(void)stopTrackingPeripheral:(id)arg1 options:(id)arg2 ;
-(void)enablePrivateModeForPeripheral:(id)arg1 forDuration:(unsigned short)arg2 ;
-(void)registerForConnectionEventsWithOptions:(id)arg1 ;
-(void)pauseLeConnectionManager;
-(void)resumeLeConnectionManager;
-(void)pauseScans;
-(void)resumeScans;
-(void)sendData:(id)arg1 toPeripheral:(id)arg2 ;
-(void)setConnectionEventOptions:(id)arg1 ;
-(void)setMatchActionRules:(id)arg1 ;
-(id)startConnectionEventCounterForPeripheral:(id)arg1 ;
-(id)stopConnectionEventCounterForPeripheral:(id)arg1 ;
-(id)isApplicationConnectedToAnyPeripherals:(id)arg1 ;
-(id)createPeripheralWithAddress:(id)arg1 andIdentifier:(id)arg2 ;
-(BOOL)isMsgAllowedWhenOff:(unsigned short)arg1 ;
-(BOOL)isScanning;
-(NSMapTable *)peripherals;
-(NSMutableArray *)discoveredPeripherals;
-(void)setDiscoveredPeripherals:(NSMutableArray *)arg1 ;
@end

