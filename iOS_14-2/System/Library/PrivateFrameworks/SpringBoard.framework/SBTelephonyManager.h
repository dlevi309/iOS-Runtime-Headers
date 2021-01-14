/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/STTelephonyStateObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, SBAlertItem, NWSystemPathMonitor, TUCall, CoreTelephonyClient, STTelephonyStateProvider, STWifiStatusDomain, SBBluetoothController, NSString;

@interface SBTelephonyManager : NSObject <STTelephonyStateObserver> {

	CTServerConnectionRef _serverConnection;
	BOOL _containsCellularRadio;
	BOOL _hasCellularTelephony;
	BOOL _hasCellularData;
	unsigned _usingVPN : 1;
	NSObject*<OS_dispatch_queue> _wirelessModemDynamicStoreQueue;
	SCDynamicStoreRef _queue_wirelessModemDynamicStore;
	CFStringRef _queue_wirelessModemDynamicStoreSharingKey;
	BOOL _isNetworkTethering;
	int _numberOfNetworkTetheredDevices;
	unsigned _hasShownWaitingAlert : 1;
	SBAlertItem* _activationAlertItem;
	int _numActivationFailures;
	int _inEmergencyCallbackMode;
	unsigned _loggingCallAudio : 1;
	void* _queue_fastDormancySuspendAssertion;
	NWSystemPathMonitor* _systemPathMonitor;
	TUCall* _incomingCall;
	TUCall* _activeCall;
	TUCall* _heldCall;
	TUCall* _outgoingCall;
	CoreTelephonyClient* _coreTelephonyClient;
	STTelephonyStateProvider* _telephonyStateProvider;
	STWifiStatusDomain* _wifiDomain;
	SBBluetoothController* _bluetoothController;
	NSString* _cachedSlot1CountryCode;
	NSString* _cachedSlot2CountryCode;
	NSString* _cachedSlot1SIMStatus;
	NSString* _cachedSlot2SIMStatus;

}

@property (nonatomic,retain) TUCall * incomingCall;                                                        //@synthesize incomingCall=_incomingCall - In the implementation block
@property (nonatomic,retain) TUCall * activeCall;                                                          //@synthesize activeCall=_activeCall - In the implementation block
@property (nonatomic,retain) TUCall * heldCall;                                                            //@synthesize heldCall=_heldCall - In the implementation block
@property (nonatomic,retain) TUCall * outgoingCall;                                                        //@synthesize outgoingCall=_outgoingCall - In the implementation block
@property (nonatomic,retain) CoreTelephonyClient * coreTelephonyClient;                                    //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (nonatomic,readonly) STTelephonyStateProvider * telephonyStateProvider;                          //@synthesize telephonyStateProvider=_telephonyStateProvider - In the implementation block
@property (nonatomic,readonly) STWifiStatusDomain * wifiDomain;                                            //@synthesize wifiDomain=_wifiDomain - In the implementation block
@property (nonatomic,readonly) SBBluetoothController * bluetoothController;                                //@synthesize bluetoothController=_bluetoothController - In the implementation block
@property (nonatomic,copy) NSString * cachedSlot1CountryCode;                                              //@synthesize cachedSlot1CountryCode=_cachedSlot1CountryCode - In the implementation block
@property (nonatomic,copy) NSString * cachedSlot2CountryCode;                                              //@synthesize cachedSlot2CountryCode=_cachedSlot2CountryCode - In the implementation block
@property (nonatomic,copy) NSString * cachedSlot1SIMStatus;                                                //@synthesize cachedSlot1SIMStatus=_cachedSlot1SIMStatus - In the implementation block
@property (nonatomic,copy) NSString * cachedSlot2SIMStatus;                                                //@synthesize cachedSlot2SIMStatus=_cachedSlot2SIMStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long dataConnectionAvailabilityWithCurrentCalls; 
@property (assign,getter=isCellDataSwitchingEnabled,nonatomic) BOOL cellDataSwitchingEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CTServerConnectionRef)defaultTelephonyCenter;
+(id)sharedTelephonyManagerCreatingIfNecessary:(BOOL)arg1 ;
+(id)sharedTelephonyManager;
-(id)displayedCall;
-(TUCall *)incomingCall;
-(unsigned long long)faceTimeAudioCallCount;
-(BOOL)isNetworkTethering;
-(id)_secondaryCarrierBundleInfo;
-(void)setCoreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setHeldCall:(TUCall *)arg1 ;
-(void)disconnectIncomingCall;
-(BOOL)isNetworkRegistrationEnabled;
-(CTServerConnectionRef)_serverConnection;
-(void)updateSpringBoard;
-(BOOL)isTTYEnabled;
-(void)setIncomingCall:(TUCall *)arg1 ;
-(long long)_anySubscriptionSlotWithSIMPresent;
-(long long)_dataPreferredSubscriptionSlotIfSIMPresent;
-(id)init;
-(void)_setIsInEmergencyCallbackMode:(unsigned char)arg1 ;
-(BOOL)hasCellularTelephony;
-(BOOL)isInEmergencyCallbackMode;
-(BOOL)heldCallExists;
-(BOOL)isEmergencyCallActive;
-(NSString *)cachedSlot2CountryCode;
-(BOOL)isCellDataSwitchingEnabled;
-(BOOL)hasCellularData;
-(id)_callsForService:(int)arg1 ;
-(NSString *)cachedSlot2SIMStatus;
-(BOOL)isEndpointOnCurrentDevice;
-(void)updateCalls;
-(void)dumpBasebandState:(id)arg1 ;
-(void)_queue_noteWirelessModemDynamicStoreChanged;
-(BOOL)emergencyCallSupported;
-(BOOL)hasNonCellularNetworkConnection;
-(void)setCachedSlot2SIMStatus:(NSString *)arg1 ;
-(void)_serverConnectionDidError:(SCD_Struct_SB12)arg1 ;
-(void)_updateState;
-(TUCall *)heldCall;
-(void)disconnectDisplayedCall;
-(void)swapCalls;
-(id)_subscriptionInfoForCall:(id)arg1 ;
-(NSString *)cachedSlot1SIMStatus;
-(BOOL)inCall;
-(double)inCallDuration;
-(void)subscriptionInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2 ;
-(id)_primaryMobileEquipmentInfo;
-(void)setCachedSlot1SIMStatus:(NSString *)arg1 ;
-(void)setCellDataSwitchingEnabled:(BOOL)arg1 ;
-(id)_secondaryMobileEquipmentInfo;
-(long long)_subscriptionSlotIfSIMPresent:(long long)arg1 ;
-(void)telephonyAudioChangeHandler;
-(void)setActiveCall:(TUCall *)arg1 ;
-(TUCall *)outgoingCall;
-(BOOL)outgoingCallExists;
-(void)setFastDormancySuspended:(BOOL)arg1 ;
-(NSString *)cachedSlot1CountryCode;
-(void)setOutgoingCall:(TUCall *)arg1 ;
-(unsigned long long)dataConnectionAvailabilityWithCurrentCalls;
-(void)carrierBundleInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2 ;
-(void)handleCallControlFailure:(id)arg1 ;
-(BOOL)activeCallExists;
-(id)_secondarySubscriptionInfo;
-(BOOL)incomingCallExists;
-(void)_avSystemControllerDidError:(id)arg1 ;
-(void)_handleTelephonyDaemonRestart;
-(unsigned long long)callCount;
-(BOOL)multipleCallsExist;
-(id)_primarySubscriptionInfo;
-(id)_primaryCarrierBundleInfo;
-(id)_backgroundQueryQueue;
-(id)initWithStateProvider:(id)arg1 wifiDomain:(id)arg2 bluetoothController:(id)arg3 ;
-(long long)_primarySubscriptionSlot;
-(void)setCachedSlot1CountryCode:(NSString *)arg1 ;
-(STWifiStatusDomain *)wifiDomain;
-(BOOL)isUsingVPNConnection;
-(STTelephonyStateProvider *)telephonyStateProvider;
-(void)_updateNetworkLocale;
-(id)carrierDisabledApplicationIDs;
-(void)setCachedSlot2CountryCode:(NSString *)arg1 ;
-(void)_provisioningUpdateWithStatus:(int)arg1 slot:(long long)arg2 ;
-(void)disconnectCallAndActivateHeld;
-(void)_setIsNetworkTethering:(BOOL)arg1 withNumberOfDevices:(int)arg2 ;
-(void)queue_setFastDormancySuspended:(BOOL)arg1 withConnection:(CTServerConnectionRef)arg2 ;
-(SBBluetoothController *)bluetoothController;
-(void)callEventHandler:(id)arg1 ;
-(BOOL)containsCellularRadio;
-(void)_setCurrentActivationAlertItem:(id)arg1 ;
-(void)preHeatDataLinkForDomains:(id)arg1 ;
-(void)_performQueryInBackground:(/*^block*/id)arg1 withMainQueueResultHandler:(/*^block*/id)arg2 ;
-(long long)_secondarySubscriptionSlot;
-(BOOL)isUsingSlowDataConnection;
-(void)disconnectAllCalls;
-(long long)_otherSubscriptionSlotIfSIMPresent:(long long)arg1 ;
-(TUCall *)activeCall;
-(BOOL)inCallUsingSpeakerOrReceiver;
-(unsigned long long)telephonyCallCount;
-(int)numberOfNetworkTetheredDevices;
-(BOOL)updateLocale;
-(long long)_dataConnectedSubscriptionSlot;
-(void)setNetworkRegistrationEnabled:(BOOL)arg1 ;
-(unsigned long long)_callCountForService:(int)arg1 ;
-(id)_phoneApp;
@end

