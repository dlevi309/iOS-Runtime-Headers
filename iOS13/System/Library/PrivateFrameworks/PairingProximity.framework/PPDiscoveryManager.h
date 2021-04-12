/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PairingProximity.framework/PairingProximity
*/

#import <libobjc.A.dylib/CBCentralManagerDelegate.h>

@protocol PPDiscoveryManagerDelegate, OS_dispatch_queue;
@class CBCentralManager, NSObject, NSString;

@interface PPDiscoveryManager : NSObject <CBCentralManagerDelegate> {

	BOOL _bluetoothIsScanning;
	long long _signalLimitOverride;
	id<PPDiscoveryManagerDelegate> _discoveryDelegate;
	CBCentralManager* _central;
	NSObject*<OS_dispatch_queue> _discoveryQueue;

}

@property (nonatomic,retain) CBCentralManager * central;                                    //@synthesize central=_central - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> discoveryQueue;                   //@synthesize discoveryQueue=_discoveryQueue - In the implementation block
@property (assign,nonatomic) BOOL bluetoothIsScanning;                                      //@synthesize bluetoothIsScanning=_bluetoothIsScanning - In the implementation block
@property (assign,nonatomic) long long signalLimitOverride;                                 //@synthesize signalLimitOverride=_signalLimitOverride - In the implementation block
@property (assign,nonatomic) id<PPDiscoveryManagerDelegate> discoveryDelegate;              //@synthesize discoveryDelegate=_discoveryDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDiscoveryManager;
+(BOOL)isBluetoothPoweredOn:(long long)arg1 ;
+(BOOL)isBluetoothConnected:(long long)arg1 ;
-(id)init;
-(void)end;
-(void)begin;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)beginDiscovery;
-(CBCentralManager *)central;
-(void)setCentral:(CBCentralManager *)arg1 ;
-(void)setSignalLimitOverride:(long long)arg1 ;
-(void)setDiscoveryDelegate:(id<PPDiscoveryManagerDelegate>)arg1 ;
-(void)forceEndDiscovery;
-(void)updateFromBTState:(long long)arg1 ;
-(long long)signalLimitOverride;
-(id<PPDiscoveryManagerDelegate>)discoveryDelegate;
-(NSObject*<OS_dispatch_queue>)discoveryQueue;
-(void)setDiscoveryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)bluetoothIsScanning;
-(void)setBluetoothIsScanning:(BOOL)arg1 ;
@end

