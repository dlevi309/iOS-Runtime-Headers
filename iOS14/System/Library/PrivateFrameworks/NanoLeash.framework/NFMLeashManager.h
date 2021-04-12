/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
*/

#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/CBPeripheralDelegate.h>
#import <libobjc.A.dylib/CBScalablePipeManagerDelegate.h>

@protocol OS_dispatch_queue, NFMLLeashBreakDelegate, OS_dispatch_source;
@class NSObject, NSString, CBScalablePipeManager, CBScalablePipe, CBCentralManager, CBPeripheral;

@interface NFMLeashManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate, CBScalablePipeManagerDelegate> {

	/*^block*/id _proximityChangeHandler;
	NSObject*<OS_dispatch_queue> _centralQueue;
	BOOL _testMode;
	BOOL _connected;
	BOOL _needsToScanForPeripheral;
	long long _leashMode;
	NSString* _serviceUUID;
	NSString* _leashIdentifier;
	CBScalablePipeManager* _pipeManager;
	CBScalablePipe* _pipe;
	CBCentralManager* _centralManager;
	CBPeripheral* _peripheral;
	CBPeripheral* _discoveredPeripheral;
	long long _centralPhase;
	id<NFMLLeashBreakDelegate> _leashDelegate;
	NSObject*<OS_dispatch_source> _leashDispatchSourceTimer;
	NSObject*<OS_dispatch_queue> _externalQueue;

}

@property (assign,nonatomic) BOOL connected;                                                      //@synthesize connected=_connected - In the implementation block
@property (nonatomic,retain) CBScalablePipeManager * pipeManager;                                 //@synthesize pipeManager=_pipeManager - In the implementation block
@property (nonatomic,retain) CBScalablePipe * pipe;                                               //@synthesize pipe=_pipe - In the implementation block
@property (nonatomic,retain) CBCentralManager * centralManager;                                   //@synthesize centralManager=_centralManager - In the implementation block
@property (nonatomic,retain) CBPeripheral * peripheral;                                           //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,retain) CBPeripheral * discoveredPeripheral;                                 //@synthesize discoveredPeripheral=_discoveredPeripheral - In the implementation block
@property (assign,nonatomic) long long centralPhase;                                              //@synthesize centralPhase=_centralPhase - In the implementation block
@property (assign,nonatomic) BOOL needsToScanForPeripheral;                                       //@synthesize needsToScanForPeripheral=_needsToScanForPeripheral - In the implementation block
@property (assign,nonatomic,__weak) id<NFMLLeashBreakDelegate> leashDelegate;                     //@synthesize leashDelegate=_leashDelegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> leashDispatchSourceTimer;              //@synthesize leashDispatchSourceTimer=_leashDispatchSourceTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> externalQueue;                          //@synthesize externalQueue=_externalQueue - In the implementation block
@property (assign,nonatomic) long long leashMode;                                                 //@synthesize leashMode=_leashMode - In the implementation block
@property (nonatomic,copy) NSString * serviceUUID;                                                //@synthesize serviceUUID=_serviceUUID - In the implementation block
@property (nonatomic,copy) NSString * leashIdentifier;                                            //@synthesize leashIdentifier=_leashIdentifier - In the implementation block
@property (assign,nonatomic) BOOL testMode;                                                       //@synthesize testMode=_testMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPipeManager:(CBScalablePipeManager *)arg1 ;
-(BOOL)connected;
-(CBScalablePipeManager *)pipeManager;
-(NSString *)serviceUUID;
-(void)setConnected:(BOOL)arg1 ;
-(void)setTestMode:(BOOL)arg1 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2 ;
-(void)update:(id)arg1 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3 ;
-(void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2 ;
-(id)init;
-(void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3 ;
-(void)connect;
-(void)setCentralManager:(CBCentralManager *)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)scalablePipeManagerDidUpdateState:(id)arg1 ;
-(CBCentralManager *)centralManager;
-(BOOL)testMode;
-(void)peripheralDidUpdateRSSI:(id)arg1 error:(id)arg2 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(CBPeripheral *)peripheral;
-(NSObject*<OS_dispatch_queue>)externalQueue;
-(void)setExternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setServiceUUID:(NSString *)arg1 ;
-(CBScalablePipe *)pipe;
-(void)setPeripheral:(CBPeripheral *)arg1 ;
-(void)dealloc;
-(void)leashTest;
-(void)setLeashMode:(long long)arg1 ;
-(void)setLeashIdentifier:(NSString *)arg1 ;
-(void)beginMonitoringLeash;
-(void)stopMonitoringLeash;
-(void)setProximityChangeHandler:(/*^block*/id)arg1 ;
-(long long)leashMode;
-(NSString *)leashIdentifier;
-(void)setPipe:(CBScalablePipe *)arg1 ;
-(CBPeripheral *)discoveredPeripheral;
-(void)setDiscoveredPeripheral:(CBPeripheral *)arg1 ;
-(long long)centralPhase;
-(void)setCentralPhase:(long long)arg1 ;
-(BOOL)needsToScanForPeripheral;
-(void)setNeedsToScanForPeripheral:(BOOL)arg1 ;
-(id<NFMLLeashBreakDelegate>)leashDelegate;
-(void)setLeashDelegate:(id<NFMLLeashBreakDelegate>)arg1 ;
-(NSObject*<OS_dispatch_source>)leashDispatchSourceTimer;
-(void)setLeashDispatchSourceTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end

