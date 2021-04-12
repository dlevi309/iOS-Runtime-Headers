/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/WPHomeKitDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HAPAccessoryServerBrowserWiProxBTLEDelegate;
@class NSObject, WPHomeKit, NSMutableSet, NSString;

@interface HAPAccessoryServerBrowserWiProxBTLE : HMFObject <WPHomeKitDelegate, HMFLogging> {

	BOOL _scanInBackground;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<HAPAccessoryServerBrowserWiProxBTLEDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	WPHomeKit* _wpHomeKit;
	long long _currentScanState;
	NSMutableSet* _trackedIdentifiers;
	NSMutableSet* _trackedPeripherals;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                             //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak,readonly) id<HAPAccessoryServerBrowserWiProxBTLEDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                         //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) WPHomeKit * wpHomeKit;                                              //@synthesize wpHomeKit=_wpHomeKit - In the implementation block
@property (assign,nonatomic) long long currentScanState;                                           //@synthesize currentScanState=_currentScanState - In the implementation block
@property (assign,nonatomic) BOOL scanInBackground;                                                //@synthesize scanInBackground=_scanInBackground - In the implementation block
@property (nonatomic,readonly) NSMutableSet * trackedIdentifiers;                                  //@synthesize trackedIdentifiers=_trackedIdentifiers - In the implementation block
@property (nonatomic,readonly) NSMutableSet * trackedPeripherals;                                  //@synthesize trackedPeripherals=_trackedPeripherals - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HAPAccessoryServerBrowserWiProxBTLEDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)pauseScans;
-(void)homeKitDidUpdateState:(id)arg1 ;
-(void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 RSSI:(id)arg4 type:(long long)arg5 ;
-(void)resetLastSeenForTrackedAccessories:(id)arg1 ;
-(void)startBrowsingForHAPBLEAccessories;
-(void)stopBrowsingForHAPBLEAccessories;
-(void)startTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1 ;
-(void)retrieveStateForTrackedAccessoryWithIdentifier:(id)arg1 onQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)updateStateForIdentifier:(id)arg1 stateNumber:(id)arg2 ;
-(void)stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1 ;
-(void)probeReachabilityForTrackedAccessories;
-(WPHomeKit *)wpHomeKit;
-(void)_stopScanning;
-(void)setCurrentScanState:(long long)arg1 ;
-(void)_startBrowsingForHAPBLEAccessories;
-(void)_startScanningWithData:(id)arg1 ;
-(void)_stopBrowsingForHAPBLEAccessories;
-(NSMutableSet *)trackedIdentifiers;
-(BOOL)scanInBackground;
-(void)_startTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1 restartScan:(BOOL)arg2 ;
-(long long)currentScanState;
-(void)_stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1 ;
-(void)_removeTrackedPeripheral:(id)arg1 ;
-(NSMutableSet *)trackedPeripherals;
-(id)_getTrackedPeripheralWithIdentifier:(id)arg1 ;
-(unsigned long long)_getLinkQuality:(id)arg1 ;
-(void)_probeReachabilityForTrackedAccessories;
-(void)_reportHAPPeripheral:(id)arg1 ;
-(void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 RSSI:(id)arg4 ;
-(id)_parseAdvertisementData:(id)arg1 forPeripheral:(id)arg2 RSSI:(id)arg3 ;
-(void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 ;
-(void)homeKitStartedScanning:(id)arg1 ;
-(void)homeKitStoppedScanning:(id)arg1 ;
-(void)homeKit:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
-(void)setScanInBackground:(BOOL)arg1 ;
@end

