/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/FMFSessionDelegate.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableSet, NSData, CUBluetoothClient, CXCallObserver, NSArray, CUSystemMonitor, NSString, CUNetInterfaceMonitor, NSMutableArray, CUWiFiManager;

@interface CUSystemMonitorImp : NSObject <FMFSessionDelegate, CXCallObserverDelegate> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableSet* _monitors;
	SCD_Struct_CU3 _bluetoothAddress48;
	NSData* _bluetoothAddressData;
	CUBluetoothClient* _bluetoothClient;
	CXCallObserver* _callObserver;
	int _activeCallCount;
	int _connectedCallCount;
	int _familyBuddyToken;
	BOOL _familyFailed;
	NSArray* _familyMembers;
	BOOL _familyObserving;
	CUSystemMonitor* _familyPrimaryIPMonitor;
	int _familyUpdatedToken;
	BOOL _manateeAvailable;
	BOOL _manateeObserving;
	int _fmfDevicesChangedToken;
	int _meDeviceChangedToken;
	int _meDeviceRetryToken;
	NSString* _meDeviceFMFDeviceID;
	NSString* _meDeviceIDSDeviceID;
	NSString* _meDeviceName;
	BOOL _meDeviceIsMe;
	BOOL _meDeviceValid;
	CUNetInterfaceMonitor* _netInterfaceMonitor;
	unsigned _netFlags;
	SCD_Union_CU21 _primaryIPv4Addr;
	SCD_Union_CU21 _primaryIPv6Addr;
	NSString* _primaryNetworkSignature;
	int _powerSourceToken;
	BOOL _powerUnlimited;
	NSString* _primaryAppleID;
	BOOL _primaryAppleIDActive;
	BOOL _primaryAppleIDIsHSA2;
	int _primaryAppleIDNotifyToken;
	BOOL _primaryAppleIDObserving;
	SCD_Struct_CU3 _rotatingIdentifier48;
	NSData* _rotatingIdentifierData;
	NSObject*<OS_dispatch_source> _rotatingIdentifierTimer;
	BOOL _screenLocked;
	int _screenLockedToken;
	BOOL _screenOn;
	int _screenBlankedToken;
	BOOL _screenSaverActive;
	BOOL _scChangesPending;
	SCDynamicStoreRef _scDynamicStore;
	NSMutableArray* _scInitialKeys;
	NSString* _scKeySystemName;
	NSString* _scPatternNetInterfaceIPv4;
	NSString* _scPatternNetInterfaceIPv6;
	NSArray* _scNotificationKeys;
	NSArray* _scNotificationPatterns;
	NSString* _systemName;
	int _systemLockState;
	int _systemLockStateToken;
	BOOL _firstUnlocked;
	int _firstUnlockToken;
	CUWiFiManager* _wifiManager;
	unsigned _wifiFlags;
	int _wifiState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_update;
-(void)removeMonitor:(id)arg1 ;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(void)_screenChanged:(BOOL)arg1 ;
-(void)addMonitor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_hasMonitorPassingTest:(/*^block*/id)arg1 ;
-(void)_invokeBlock:(/*^block*/id)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)updateWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_bluetoothAddressMonitorStart;
-(void)_bluetoothAddressMonitorStop;
-(void)_callMonitorStart;
-(void)_callMonitorStop;
-(int)_activeCallCountUnached;
-(int)_connectedCallCountUnached;
-(void)_familyMonitorStart;
-(void)_familyMonitorStop;
-(void)_familyGetMembers:(BOOL)arg1 ;
-(void)_familyNetworkChanged;
-(void)_familyUpdated:(id)arg1 ;
-(void)_manateeMonitorStart;
-(void)_manateeMonitorStop;
-(void)_manateeChanged:(id)arg1 ;
-(void)_meDeviceMonitorStart;
-(void)_meDeviceMonitorStop;
-(void)_meDeviceCheckStart:(BOOL)arg1 ;
-(void)_meDeviceCheckCompletion:(id)arg1 error:(id)arg2 firstCheck:(BOOL)arg3 ;
-(void)_netInterfaceMonitorStart;
-(void)_netInterfaceMonitorStop;
-(void)_powerUnlimitedMonitorStart;
-(void)_powerUnlimitedMonitorStop;
-(void)_primaryAppleIDMonitorStart;
-(void)_primaryAppleIDMonitorStop;
-(id)_primaryAppleIDAccount;
-(void)_primaryAppleIDChanged:(id)arg1 ;
-(void)_primaryAppleIDChanged2:(BOOL)arg1 ;
-(void)_rotatingIdentifierMonitorStart;
-(void)_rotatingIdentifierMonitorStop;
-(void)_rotatingIdentifierTimerFired;
-(void)_screenLockedMonitorStart;
-(void)_screenLockedMonitorStop;
-(void)_screenLockedChanged;
-(void)_screenOnMonitorStart;
-(void)_screenOnMonitorStop;
-(void)_screenSaverMonitorStart;
-(void)_screenSaverMonitorStop;
-(void)_systemConfigUpdateKeyPtr:(id*)arg1 name:(id)arg2 enabled:(BOOL)arg3 creator:(/*^block*/id)arg4 ;
-(void)_systemConfigUpdateNotifications;
-(void)_systemConfigChanged:(id)arg1 initial:(BOOL)arg2 ;
-(void)_systemConfigNetInterfaceChanged:(id)arg1 initial:(BOOL)arg2 ;
-(void)_systemConfigSystemNameChanged:(BOOL)arg1 ;
-(void)_systemLockStateMonitorStart;
-(void)_systemLockStateMonitorStop;
-(void)_systemLockStateUpdate:(BOOL)arg1 ;
-(void)_firstUnlockMonitorStart;
-(void)_firstUnlockMonitorStop;
-(void)_firstUnlockMonitorCheck:(BOOL)arg1 ;
-(void)_wifiMonitorStart;
-(void)_wifiMonitorStop;
-(void)_wifiMonitorStateChanged:(BOOL)arg1 ;
@end

