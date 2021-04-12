/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBDateTimeOverrideObserver.h>
#import <libobjc.A.dylib/DNDStateUpdateListener.h>
#import <libobjc.A.dylib/SBAVSystemControllerCacheObserver.h>

@class SBStatusBarDefaults, SBTelephonyManager, SBUserSessionController, NSHashTable, NSTimer, NSDateFormatter, NSString, SBSStatusBarStyleOverridesAssertion, DNDStateService, DNDState, SBSystemStatusBatteryDataProvider, STTelephonyStatusDomainDataProvider, SBSystemStatusWifiDataProvider, STBatteryStatusDomain, STTelephonyStatusDomain, STVoiceControlStatusDomain, STWifiStatusDomain;

@interface SBStatusBarStateAggregator : NSObject <SBDateTimeOverrideObserver, DNDStateUpdateListener, SBAVSystemControllerCacheObserver> {

	SBStatusBarDefaults* _statusBarDefaults;
	SBTelephonyManager* _override_telephonyManager;
	SBUserSessionController* _override_userSessionController;
	unsigned long long _coalescentBlockDepth;
	BOOL _hasPostedOnce;
	unsigned long long _itemPostState[42];
	BOOL _nonItemDataChanged;
	SCD_Struct_SB46 _data;
	int _actions;
	BOOL _performingAtomicUpdate;
	unsigned long long _atomicUpdateItemPostState[42];
	SCD_Struct_SB46 _atomicUpdateData;
	NSHashTable* _postObservers;
	BOOL _notifyingPostObservers;
	long long _showsRecordingOverrides;
	NSTimer* _timeItemTimer;
	NSDateFormatter* _timeItemDateFormatter;
	NSDateFormatter* _shortTimeItemDateFormatter;
	NSDateFormatter* _dateItemDateFormatter;
	NSString* _timeItemTimeString;
	NSString* _shortTimeItemTimeString;
	NSString* _dateItemTimeString;
	NSString* _serviceString;
	NSString* _serviceCrossfadeString;
	NSString* _secondaryServiceString;
	NSString* _secondaryServiceCrossfadeString;
	NSString* _serviceBadgeString;
	NSString* _secondaryServiceBadgeString;
	unsigned long long _airplaneTransitionToken;
	BOOL _suppressCellServiceForAirplaneModeTransition;
	BOOL _cachedShowRSSI;
	BOOL _showsActivityIndicatorOnHomeScreen;
	long long _activityIndicatorEverywhereCount;
	long long _syncActivityIndicatorCount;
	NSString* _activityDisplayIdentifier;
	NSString* _batteryDetailString;
	BOOL _shouldShowBluetoothHeadphoneGlyph;
	BOOL _shouldShowBluetoothHeadphoneBatteryPercent;
	BOOL _alarmEnabled;
	int _locationStatusBarIconType;
	unsigned _locationIconPendingRequestCount;
	SBSStatusBarStyleOverridesAssertion* _tetheringStatusBarStyleOverrideAssertion;
	SBUserSessionController* _lazy_userSessionController;
	NSString* _personName;
	NSString* _overridePersonName;
	DNDStateService* _dndStateService;
	DNDState* _dndState;
	BOOL _isInternalOrDeveloperDevice;
	SBSystemStatusBatteryDataProvider* _batteryDataProvider;
	STTelephonyStatusDomainDataProvider* _telephonyDataProvider;
	SBSystemStatusWifiDataProvider* _wifiDataProvider;
	STBatteryStatusDomain* _batteryDomain;
	STTelephonyStatusDomain* _telephonyDomain;
	STVoiceControlStatusDomain* _voiceControlDomain;
	STWifiStatusDomain* _wifiDomain;

}

@property (nonatomic,readonly) SBSystemStatusBatteryDataProvider * batteryDataProvider;                                                                    //@synthesize batteryDataProvider=_batteryDataProvider - In the implementation block
@property (nonatomic,readonly) STTelephonyStatusDomainDataProvider * telephonyDataProvider;                                                                //@synthesize telephonyDataProvider=_telephonyDataProvider - In the implementation block
@property (nonatomic,readonly) SBSystemStatusWifiDataProvider * wifiDataProvider;                                                                          //@synthesize wifiDataProvider=_wifiDataProvider - In the implementation block
@property (nonatomic,readonly) STBatteryStatusDomain * batteryDomain;                                                                                      //@synthesize batteryDomain=_batteryDomain - In the implementation block
@property (nonatomic,readonly) STTelephonyStatusDomain * telephonyDomain;                                                                                  //@synthesize telephonyDomain=_telephonyDomain - In the implementation block
@property (nonatomic,readonly) STVoiceControlStatusDomain * voiceControlDomain;                                                                            //@synthesize voiceControlDomain=_voiceControlDomain - In the implementation block
@property (nonatomic,readonly) STWifiStatusDomain * wifiDomain;                                                                                            //@synthesize wifiDomain=_wifiDomain - In the implementation block
@property (setter=_setTelephonyManager:,getter=_telephonyManager,nonatomic,retain) SBTelephonyManager * telephonyManager;                                  //@synthesize override_telephonyManager=_override_telephonyManager - In the implementation block
@property (setter=_setUserSessionController:,getter=_userSessionController,nonatomic,retain) SBUserSessionController * userSessionController;              //@synthesize override_userSessionController=_override_userSessionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(int)_thermalColorForLevel:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(const SCD_Struct_SB46*)_statusBarData;
-(void)_registerForNotifications;
-(void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(id)_userSessionController;
-(void)_updateAirplaneMode;
-(void)beginCoalescentBlock;
-(void)endCoalescentBlock;
-(void)setShowsActivityIndicatorOnHomeScreen:(BOOL)arg1 ;
-(void)cache:(id)arg1 didUpdateActiveAudioRoute:(id)arg2 ;
-(void)cache:(id)arg1 didUpdatePickableRoutes:(id)arg2 ;
-(STWifiStatusDomain *)wifiDomain;
-(void)setShowsActivityIndicatorEverywhere:(BOOL)arg1 ;
-(void)setShowsSyncActivityIndicator:(BOOL)arg1 ;
-(void)setShowsOverridesForRecording:(BOOL)arg1 ;
-(void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2 ;
-(id)_telephonyManager;
-(void)_setTelephonyManager:(id)arg1 ;
-(void)updateStatusBarItem:(int)arg1 ;
-(void)setUserNameOverride:(id)arg1 ;
-(void)setAlarmEnabled:(BOOL)arg1 ;
-(void)_stopTimeItemTimer;
-(void)_removeTetheringStatusBarStyleOverrideAssertion;
-(void)_postItem:(int)arg1 withState:(unsigned long long)arg2 inList:(unsigned long long*)arg3 ;
-(BOOL)_setItem:(int)arg1 enabled:(BOOL)arg2 inList:(BOOL*)arg3 itemPostState:(unsigned long long*)arg4 ;
-(void)_resetTimeItemFormatter;
-(void)_updateSignalStrengthItem;
-(void)_updateServiceItem;
-(void)_updateDataNetworkItem;
-(void)_updateSecondarySignalStrengthItem;
-(void)_updateSecondaryServiceItem;
-(void)_updateSecondaryDataNetworkItem;
-(void)_updateBatteryItems;
-(void)_tickRefCount:(long long*)arg1 up:(BOOL)arg2 withTransitionBlock:(/*^block*/id)arg3 ;
-(void)_updateBluetoothBatteryItem;
-(void)_requestActions:(int)arg1 ;
-(void)_notifyItemChanged:(int)arg1 ;
-(void)_updateTetheringState;
-(void)_buildLocationState;
-(void)_updatePersonNameItem;
-(void)_updateLockItem;
-(void)_restartTimeItemTimer;
-(STBatteryStatusDomain *)batteryDomain;
-(STTelephonyStatusDomain *)telephonyDomain;
-(STVoiceControlStatusDomain *)voiceControlDomain;
-(void)_noteAirplaneModeChanged;
-(void)_updateCarPlayItem;
-(void)_updateThermalColorItem;
-(BOOL)_setItem:(int)arg1 enabled:(BOOL)arg2 ;
-(void)_updateSignalStrengthItem:(int)arg1 withData:(id)arg2 SIMInfo:(id)arg3 barsGetter:(/*^block*/id)arg4 barsSetter:(/*^block*/id)arg5 ;
-(void)_updateServiceItem:(int)arg1 withData:(id)arg2 SIMInfo:(id)arg3 otherSIMInfo:(id)arg4 serviceStringGetter:(/*^block*/id)arg5 serviceStringSetter:(/*^block*/id)arg6 serviceCrossfadeStringGetter:(/*^block*/id)arg7 serviceCrossfadeStringSetter:(/*^block*/id)arg8 serviceContentTypeGetter:(/*^block*/id)arg9 serviceContentTypeSetter:(/*^block*/id)arg10 serviceBadgeStringGetter:(/*^block*/id)arg11 serviceBadgeStringSetter:(/*^block*/id)arg12 ;
-(BOOL)_shouldShowPersonName;
-(BOOL)_shouldShowEmergencyOnlyStatusForInfo:(id)arg1 ;
-(void)_updateDataNetworkItem:(int)arg1 withData:(id)arg2 primary:(BOOL)arg3 dataNetworkTypeGetter:(/*^block*/id)arg4 dataNetworkTypeSetter:(/*^block*/id)arg5 ;
-(int)_statusBarBatteryStateForSystemStatusChargingState:(unsigned long long)arg1 ;
-(void)_updateStateAtomicallyWithoutAnimationUsingBlock:(/*^block*/id)arg1 ;
-(void)setShouldShowBluetoothHeadphoneGlyph:(BOOL)arg1 andShouldShowBluetoothHeadphoneBatteryPercent:(BOOL)arg2 ;
-(void)_updateCallForwardingItem:(int)arg1 withInfo:(id)arg2 ;
-(void)_notifyNonItemDataChanged;
-(void)_updateTimeItems;
-(void)_updateQuietModeItem;
-(void)_updateBluetoothHeadphonesItem;
-(void)_updateBluetoothItem;
-(void)_updateTTYItem;
-(void)_updateAlarmItem;
-(void)_updateLocationItem;
-(void)_updateRotationLockItem;
-(void)_updateAirplayItem;
-(void)_updateVPNItem;
-(void)_updateCallForwardingItem;
-(void)_updateSecondaryCallForwardingItem;
-(void)_updateVoiceControlItem;
-(void)_updateActivityItem;
-(void)_updateLiquidDetectionItem;
-(void)_updateLocationState;
-(void)sendStatusBarActions:(int)arg1 ;
-(void)addPostingObserver:(id)arg1 ;
-(void)removePostingObserver:(id)arg1 ;
-(void)_setUserSessionController:(id)arg1 ;
-(SBSystemStatusBatteryDataProvider *)batteryDataProvider;
-(STTelephonyStatusDomainDataProvider *)telephonyDataProvider;
-(SBSystemStatusWifiDataProvider *)wifiDataProvider;
@end

