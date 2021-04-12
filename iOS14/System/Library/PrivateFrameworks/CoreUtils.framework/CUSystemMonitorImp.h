/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/FMFSessionDelegate.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>
#import <CoreUtils/CoreTelephonyClientDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableSet, NSData, CUBluetoothClient, TUCallCenter, CXCallObserver, NSArray, CUSystemMonitor, NSString, CUNetInterfaceMonitor, CoreTelephonyClient, RTRoutineManager, NSMutableArray, CUWiFiManager;

@interface CUSystemMonitorImp : NSObject <FMFSessionDelegate, CXCallObserverDelegate, CoreTelephonyClientDelegate> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableSet* _monitors;
	SCD_Struct_CU6 _bluetoothAddress48;
	NSData* _bluetoothAddressData;
	CUBluetoothClient* _bluetoothClient;
	TUCallCenter* _callCenter;
	CXCallObserver* _callObserver;
	int _activeCallCount;
	unsigned _callFlags;
	BOOL _callStatusObserving;
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
	SCD_Union_CU22 _primaryIPv4Addr;
	SCD_Union_CU22 _primaryIPv6Addr;
	NSString* _primaryNetworkSignature;
	int _powerSourceToken;
	BOOL _powerUnlimited;
	NSString* _primaryAppleID;
	BOOL _primaryAppleIDActive;
	BOOL _primaryAppleIDIsHSA2;
	int _primaryAppleIDNotifyToken;
	BOOL _primaryAppleIDObserving;
	CoreTelephonyClient* _regionCTClient;
	CTServerConnectionRef _regionCTServerCnx;
	NSString* _regionISOCountryCode;
	NSString* _regionMobileCountryCode;
	RTRoutineManager* _regionRoutineManager;
	NSString* _regionRoutineCountry;
	int _regionRoutineNotifyToken;
	NSString* _regionRoutineState;
	SCD_Struct_CU6 _rotatingIdentifier48;
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
-(void)_primaryAppleIDChanged:(id)arg1 ;
-(void)_systemConfigUpdateNotifications;
-(void)_powerUnlimitedMonitorStart;
-(void)_systemConfigChanged:(id)arg1 initial:(BOOL)arg2 ;
-(void)_primaryAppleIDMonitorStop;
-(BOOL)_hasMonitorPassingTest:(/*^block*/id)arg1 ;
-(void)_meDeviceMonitorStop;
-(void)_manateeMonitorStop;
-(void)_familyGetMembers:(BOOL)arg1 ;
-(void)_regionMonitorStop;
-(void)_screenOnMonitorStop;
-(void)_rotatingIdentifierTimerFired;
-(id)init;
-(void)_rotatingIdentifierMonitorStart;
-(void)_familyMonitorStop;
-(void)cellMonitorUpdate:(id)arg1 info:(id)arg2 ;
-(void)_familyUpdated:(id)arg1 ;
-(void)addMonitor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_netInterfaceMonitorStop;
-(void)_manateeMonitorStart;
-(void)_regionMonitorUpdateMCC:(id)arg1 ;
-(void)_screenChanged:(BOOL)arg1 ;
-(void)_powerUnlimitedMonitorStop;
-(void)_screenSaverMonitorStart;
-(void)_bluetoothAddressMonitorStart;
-(void)_meDeviceCheckCompletion:(id)arg1 error:(id)arg2 firstCheck:(BOOL)arg3 ;
-(void)_screenLockedMonitorStart;
-(void)_meDeviceMonitorStart;
-(void)_systemConfigNetInterfaceChanged:(id)arg1 initial:(BOOL)arg2 ;
-(void)updateWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_wifiMonitorStop;
-(void)_meDeviceCheckStart:(BOOL)arg1 ;
-(void)_screenSaverMonitorStop;
-(void)_screenOnMonitorStart;
-(void)_primaryAppleIDMonitorStart;
-(void)_callMonitorStop;
-(void)_systemLockStateUpdate:(BOOL)arg1 ;
-(void)_systemConfigUpdateKeyPtr:(id*)arg1 name:(id)arg2 enabled:(BOOL)arg3 creator:(/*^block*/id)arg4 ;
-(void)_regionMonitorStart;
-(void)_familyNetworkChanged;
-(void)_bluetoothAddressMonitorStop;
-(void)_wifiMonitorStateChanged:(BOOL)arg1 ;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(void)_regionMonitorGet;
-(void)_screenOnMonitorStartiOS;
-(void)_netInterfaceMonitorStart;
-(void)_callCenterStatusChanged:(id)arg1 ;
-(unsigned)_callFlagsUncached;
-(void)_update;
-(void)_systemLockStateMonitorStop;
-(int)_activeCallCountUnached;
-(void)_rotatingIdentifierMonitorStop;
-(void)_invokeBlock:(/*^block*/id)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)_locationsOfInterestDidChange:(BOOL)arg1 ;
-(void)_firstUnlockMonitorCheck:(BOOL)arg1 ;
-(void)_familyMonitorStart;
-(void)_manateeChanged:(id)arg1 ;
-(void)_regionMonitorUpdateLocationsOfInterest:(id)arg1 ;
-(void)_firstUnlockMonitorStop;
-(id)_primaryAppleIDAccount;
-(void)_firstUnlockMonitorStart;
-(void)_systemLockStateMonitorStart;
-(void)_screenLockedMonitorStop;
-(void)_callInfoChanged;
-(void)_systemConfigSystemNameChanged:(BOOL)arg1 ;
-(void)removeMonitor:(id)arg1 ;
-(void)_primaryAppleIDChanged2:(BOOL)arg1 ;
-(void)_wifiMonitorStart;
-(void)_callMonitorStart;
-(int)_connectedCallCountUnached;
-(void)_screenLockedChanged;
@end

