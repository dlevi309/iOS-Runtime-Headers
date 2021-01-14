/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/


@protocol OS_dispatch_queue;
@class BluetoothManager, CBCentralManager, NSObject, NSArray;

@interface TPSBluetoothChecker : NSObject {

	BluetoothManager* _bluetoothManager;
	CBCentralManager* _centralManager;
	NSObject*<OS_dispatch_queue> _peersAccessQueue;

}

@property (nonatomic,retain) BluetoothManager * bluetoothManager;                        //@synthesize bluetoothManager=_bluetoothManager - In the implementation block
@property (nonatomic,retain) CBCentralManager * centralManager;                          //@synthesize centralManager=_centralManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> peersAccessQueue;              //@synthesize peersAccessQueue=_peersAccessQueue - In the implementation block
@property (nonatomic,readonly) NSArray * pairedPeers; 
@property (nonatomic,readonly) NSArray * pairedDevices; 
+(id)sharedInstance;
+(BOOL)bluetoothPairedWithTag:(id)arg1 withPairedPeers:(id)arg2 ;
+(BOOL)bluetoothPairedForProductID:(unsigned)arg1 withPairedDevices:(id)arg2 ;
+(BOOL)bluetoothPairedForProductID:(unsigned)arg1 minimumVersion:(id)arg2 withPairedDevices:(id)arg3 ;
-(id)init;
-(BOOL)bluetoothPairedForProductID:(unsigned)arg1 ;
-(void)setBluetoothManager:(BluetoothManager *)arg1 ;
-(NSArray *)pairedPeers;
-(void)setCentralManager:(CBCentralManager *)arg1 ;
-(id)devicesAccessQueue;
-(void)initializeBTManager;
-(CBCentralManager *)centralManager;
-(BluetoothManager *)bluetoothManager;
-(NSArray *)pairedDevices;
-(NSObject*<OS_dispatch_queue>)peersAccessQueue;
-(BOOL)bluetoothPairedWithTag:(id)arg1 ;
-(BOOL)bluetoothPairedForProductID:(unsigned)arg1 minimumVersion:(id)arg2 ;
-(void)setPeersAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

