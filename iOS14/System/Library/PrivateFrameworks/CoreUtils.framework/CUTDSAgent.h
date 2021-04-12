/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/CBPeripheralManagerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class CUSystemMonitor, CBCentralManager, NSObject, NSMutableDictionary, CBPeripheralManager, NSMutableSet, NSString;

@interface CUTDSAgent : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate> {

	unsigned char _advertiseBytes[32];
	unsigned long long _advertiseLen;
	unsigned long long _advertiserCount;
	unsigned long long _advertiseProviderCount;
	unsigned long long _advertiseSeekerCount;
	unsigned long long _advertiseTriggerCount;
	BOOL _advertisingStartCalled;
	SCD_Struct_CU6 _bleAddress48;
	BOOL _bleAddressOverride;
	BOOL _bleAddressValid;
	CUSystemMonitor* _bleAddressMonitor;
	CBCentralManager* _centralManager;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _devices;
	NSObject*<OS_dispatch_source> _lingerTimer;
	CBPeripheralManager* _peripheralManager;
	NSMutableSet* _providers;
	BOOL _scannerStartCalled;
	NSMutableSet* _seekers;
	NSMutableSet* _sessions;
	LogCategory* _ucat;
	unsigned _updateIDLast;
	BOOL _updatePending;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedTDSAgent;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(id)init;
-(void)removeProvider:(id)arg1 ;
-(void)addSession:(id)arg1 ;
-(void)addSeeker:(id)arg1 ;
-(void)removeSeeker:(id)arg1 ;
-(void)_advertiserEnsureStarted;
-(void)_advertiserEnsureStopped;
-(void)_bleAddressChanged;
-(void)_bleAddressMonitorEnsureStarted;
-(void)_bleAddressMonitorEnsureStopped;
-(void)_scannerEnsureStarted;
-(void)_scannerEnsureStopped;
-(void)_startLingerTimer;
-(void)_cancelLingerTimer;
-(void)_processChanges;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)_update;
-(void)addProvider:(id)arg1 ;
-(void)removeSession:(id)arg1 ;
-(void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2 ;
-(void)_scheduleUpdate;
@end

