/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalAudio.framework/PersonalAudio
*/

#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/CBPeripheralDelegate.h>

@protocol OS_dispatch_queue;
@class CBCentralManager, NSArray, NSMutableDictionary, NSObject, NSString;

@interface PAAccessoryManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {

	BOOL _centralIsOn;
	BOOL _bluetoothAvailable;
	BOOL _shouldSendUpdate;
	CBCentralManager* _centralManager;
	NSArray* _peripherals;
	NSMutableDictionary* _uuidToAddress;
	NSObject*<OS_dispatch_queue> _bluetoothCentralQueue;

}

@property (nonatomic,retain) CBCentralManager * centralManager;                               //@synthesize centralManager=_centralManager - In the implementation block
@property (nonatomic,retain) NSArray * peripherals;                                           //@synthesize peripherals=_peripherals - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * uuidToAddress;                             //@synthesize uuidToAddress=_uuidToAddress - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> bluetoothCentralQueue;              //@synthesize bluetoothCentralQueue=_bluetoothCentralQueue - In the implementation block
@property (assign,nonatomic) BOOL shouldSendUpdate;                                           //@synthesize shouldSendUpdate=_shouldSendUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(id)init;
-(void)setCentralManager:(CBCentralManager *)arg1 ;
-(void)centralManager:(id)arg1 connectionEventDidOccur:(long long)arg2 forPeripheral:(id)arg3 ;
-(CBCentralManager *)centralManager;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(NSArray *)peripherals;
-(void)discoverAccessories;
-(void)setPeripherals:(NSArray *)arg1 ;
-(void)sendUpdateToAccessory;
-(void)updateBluetoothAvailability;
-(void)setUuidToAddress:(NSMutableDictionary *)arg1 ;
-(void)setShouldSendUpdate:(BOOL)arg1 ;
-(void)bluetoothAvailabilityDidChange:(id)arg1 ;
-(NSMutableDictionary *)uuidToAddress;
-(id)pseCharacteristicForPeripheral:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)bluetoothCentralQueue;
-(void)setBluetoothCentralQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)shouldSendUpdate;
@end

