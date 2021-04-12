/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <HearingUtilities/HUDeviceController.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/AXHADeviceControllerProtocol.h>

@protocol OS_dispatch_queue;
@class CBCentralManager, NSLock, NSObject, NSMutableArray, NSMutableDictionary, AXDispatchTimer, NSString;

@interface AXHearingAidDeviceController : HUDeviceController <CBCentralManagerDelegate, AXHADeviceControllerProtocol> {

	CBCentralManager* _bluetoothManager;
	NSLock* _centralRequestsLock;
	BOOL _isScanning;
	BOOL _centralIsOn;
	NSObject*<OS_dispatch_queue> _bluetoothCentralQueue;
	NSMutableArray* _availableSearchBlocks;
	NSMutableArray* _connectedSearchBlocks;
	NSMutableArray* _updateDeviceBlocks;
	NSObject*<OS_dispatch_queue> _deviceUpdatesQueue;
	NSMutableDictionary* _deviceUpdatesDescription;
	AXDispatchTimer* _advertisingTimeoutTimer;
	NSMutableDictionary* _advertisingTimestamps;
	AXDispatchTimer* _availableDeviceTimer;
	BOOL _shouldActiveScan;
	NSMutableArray* _availablePeripherals;
	NSMutableArray* _loadedDevices;
	NSMutableArray* _connectedDevices;
	NSMutableArray* centralRequestBlocks;
	NSMutableArray* _persistentDevices;

}

@property (nonatomic,retain) NSMutableArray * availablePeripherals;               //@synthesize availablePeripherals=_availablePeripherals - In the implementation block
@property (retain) NSMutableArray * loadedDevices;                                //@synthesize loadedDevices=_loadedDevices - In the implementation block
@property (nonatomic,retain) NSMutableArray * connectedDevices;                   //@synthesize connectedDevices=_connectedDevices - In the implementation block
@property (nonatomic,retain) NSMutableArray * persistentDevices;                  //@synthesize persistentDevices=_persistentDevices - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateDeviceBlocks;                 //@synthesize updateDeviceBlocks=_updateDeviceBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray * centralRequestBlocks; 
@property (nonatomic,retain) NSMutableArray * availableSearchBlocks;              //@synthesize availableSearchBlocks=_availableSearchBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray * connectedSearchBlocks;              //@synthesize connectedSearchBlocks=_connectedSearchBlocks - In the implementation block
@property (assign,nonatomic) BOOL shouldActiveScan;                               //@synthesize shouldActiveScan=_shouldActiveScan - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(BOOL)isPaired;
-(BOOL)isConnected;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(id)init;
-(BOOL)isScanning;
-(void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2 ;
-(void)pairingAgent:(id)arg1 peerDidFailToCompletePairing:(id)arg2 error:(id)arg3 ;
-(id)hearingAidForDeviceID:(id)arg1 ;
-(void)pairingAgent:(id)arg1 peerDidUnpair:(id)arg2 ;
-(void)forgetDevice:(id)arg1 ;
-(NSMutableArray *)connectedDevices;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2 ;
-(void)centralManager:(id)arg1 didRetrieveConnectedPeripherals:(id)arg2 ;
-(BOOL)representsLocalDevices;
-(void)stopSearching;
-(void)dealloc;
-(void)setConnectedDevices:(NSMutableArray *)arg1 ;
-(void)setUpdateDeviceBlocks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)updateDeviceBlocks;
-(void)connectToPeripheral:(id)arg1 ;
-(void)disconnectFromPeripheral:(id)arg1 ;
-(void)unpairPeripheralWithUUID:(id)arg1 ;
-(void)resetConnectionToPeripheral:(id)arg1 ;
-(void)mergeDevice:(id)arg1 withDevice:(id)arg2 ;
-(void)replaceDevice:(id)arg1 withDevice:(id)arg2 ;
-(void)checkPeripheralPaired:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)hearingAidsForUUID:(id)arg1 ;
-(void)deviceDidFinishLoading:(id)arg1 ;
-(void)checkPartiallyPairedWithCompletion:(/*^block*/id)arg1 ;
-(void)searchForAvailableDevicesWithCompletion:(/*^block*/id)arg1 ;
-(void)disconnectFromHearingAidWithDeviceUUID:(id)arg1 ;
-(void)cancelPendingConnections;
-(BOOL)shouldActiveScan;
-(void)setShouldActiveScan:(BOOL)arg1 ;
-(id)valueForProperty:(unsigned long long)arg1 forDeviceID:(id)arg2 ;
-(BOOL)isPartiallyConnected;
-(void)persistPairedHearingAids;
-(BOOL)isBluetoothAvailable;
-(void)shouldRelinquishForPartialConnection:(/*^block*/id)arg1 ;
-(NSMutableArray *)persistentDevices;
-(NSMutableArray *)availablePeripherals;
-(NSMutableArray *)loadedDevices;
-(NSMutableArray *)availableSearchBlocks;
-(NSMutableArray *)connectedSearchBlocks;
-(void)searchForAvailableDevices;
-(void)setAvailablePeripherals:(NSMutableArray *)arg1 ;
-(void)setLoadedDevices:(NSMutableArray *)arg1 ;
-(void)setCentralRequestBlocks:(NSMutableArray *)arg1 ;
-(void)setPersistentDevices:(NSMutableArray *)arg1 ;
-(void)pairedHearingAidsDidChange;
-(void)setAvailableSearchBlocks:(NSMutableArray *)arg1 ;
-(void)setConnectedSearchBlocks:(NSMutableArray *)arg1 ;
-(void)removeLoadedDevice:(id)arg1 ;
-(void)removeAvailableDevice:(id)arg1 ;
-(void)clearMissingHearingAids;
-(void)sendRequestToCentralManager:(/*^block*/id)arg1 ;
-(void)loadedDevicesDidChange;
-(id)hearingAidForPeripheral:(id)arg1 ;
-(NSMutableArray *)centralRequestBlocks;
-(void)removeConnectedDevice:(id)arg1 ;
-(void)addConnectedDevice:(id)arg1 ;
-(void)addLoadedDevice:(id)arg1 ;
-(void)addAvailableDevice:(id)arg1 ;
-(void)clearAvailableDevices;
-(void)clearConnectedDevices;
-(void)clearLoadedDevices;
-(id)hearingAidsForPeripheral:(id)arg1 ;
-(void)searchForConnectedDevices;
@end

