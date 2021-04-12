/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sharedTelephonyManagerCreatingIfNecessary:(BOOL)arg1 ;
+(id)sharedTelephonyManager;
+(CTServerConnectionRef)defaultTelephonyCenter;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CTServerConnectionRef)_serverConnection;
-(void)_updateState;
-(CoreTelephonyClient *)coreTelephonyClient;
-(void)setCoreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(BOOL)isEndpointOnCurrentDevice;
-(TUCall *)incomingCall;
-(id)displayedCall;
-(void)swapCalls;
-(void)disconnectAllCalls;
-(TUCall *)activeCall;
-(id)_backgroundQueryQueue;
-(unsigned long long)callCount;
-(STTelephonyStateProvider *)telephonyStateProvider;
-(BOOL)hasCellularTelephony;
-(void)subscriptionInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2 ;
-(void)carrierBundleInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2 ;
-(void)_handleTelephonyDaemonRestart;
-(BOOL)containsCellularRadio;
-(void)_serverConnectionDidError:(SCD_Struct_SB12)arg1 ;
-(BOOL)inCall;
-(BOOL)activeCallExists;
-(BOOL)heldCallExists;
-(void)disconnectCallAndActivateHeld;
-(BOOL)isInEmergencyCallbackMode;
-(unsigned long long)faceTimeAudioCallCount;
-(unsigned long long)telephonyCallCount;
-(void)setCellDataSwitchingEnabled:(BOOL)arg1 ;
-(void)preHeatDataLinkForDomains:(id)arg1 ;
-(id)initWithStateProvider:(id)arg1 wifiDomain:(id)arg2 bluetoothController:(id)arg3 ;
-(void)callEventHandler:(id)arg1 ;
-(void)handleCallControlFailure:(id)arg1 ;
-(void)updateSpringBoard;
-(void)telephonyAudioChangeHandler;
-(void)setNetworkRegistrationEnabled:(BOOL)arg1 ;
-(void)updateCalls;
-(void)_queue_noteWirelessModemDynamicStoreChanged;
-(void)queue_setFastDormancySuspended:(BOOL)arg1 withConnection:(CTServerConnectionRef)arg2 ;
-(void)_performQueryInBackground:(/*^block*/id)arg1 withMainQueueResultHandler:(/*^block*/id)arg2 ;
-(BOOL)isEmergencyCallActive;
-(void)setIncomingCall:(TUCall *)arg1 ;
-(void)setActiveCall:(TUCall *)arg1 ;
-(void)setHeldCall:(TUCall *)arg1 ;
-(void)setOutgoingCall:(TUCall *)arg1 ;
-(TUCall *)heldCall;
-(void)setCachedSlot1CountryCode:(NSString *)arg1 ;
-(void)setCachedSlot1SIMStatus:(NSString *)arg1 ;
-(void)setCachedSlot2CountryCode:(NSString *)arg1 ;
-(void)setCachedSlot2SIMStatus:(NSString *)arg1 ;
-(BOOL)updateLocale;
-(void)_updateNetworkLocale;
-(id)_primaryCarrierBundleInfo;
-(TUCall *)outgoingCall;
-(BOOL)hasNonCellularNetworkConnection;
-(id)_callsForService:(int)arg1 ;
-(id)_subscriptionInfoForCall:(id)arg1 ;
-(BOOL)isCellDataSwitchingEnabled;
-(unsigned long long)_callCountForService:(int)arg1 ;
-(long long)_dataConnectedSubscriptionSlot;
-(STWifiStatusDomain *)wifiDomain;
-(SBBluetoothController *)bluetoothController;
-(BOOL)isUsingVPNConnection;
-(void)_setCurrentActivationAlertItem:(id)arg1 ;
-(void)_setIsInEmergencyCallbackMode:(unsigned char)arg1 ;
-(long long)_primarySubscriptionSlot;
-(long long)_secondarySubscriptionSlot;
-(long long)_dataPreferredSubscriptionSlotIfSIMPresent;
-(long long)_anySubscriptionSlotWithSIMPresent;
-(long long)_otherSubscriptionSlotIfSIMPresent:(long long)arg1 ;
-(long long)_subscriptionSlotIfSIMPresent:(long long)arg1 ;
-(NSString *)cachedSlot1SIMStatus;
-(NSString *)cachedSlot1CountryCode;
-(NSString *)cachedSlot2SIMStatus;
-(NSString *)cachedSlot2CountryCode;
-(id)_secondaryCarrierBundleInfo;
-(void)_setIsNetworkTethering:(BOOL)arg1 withNumberOfDevices:(int)arg2 ;
-(void)_avSystemControllerDidError:(id)arg1 ;
-(BOOL)hasCellularData;
-(BOOL)emergencyCallSupported;
-(double)inCallDuration;
-(id)_phoneApp;
-(void)setFastDormancySuspended:(BOOL)arg1 ;
-(BOOL)incomingCallExists;
-(BOOL)outgoingCallExists;
-(BOOL)multipleCallsExist;
-(BOOL)inCallUsingSpeakerOrReceiver;
-(unsigned long long)dataConnectionAvailabilityWithCurrentCalls;
-(void)disconnectIncomingCall;
-(void)disconnectDisplayedCall;
-(void)dumpBasebandState:(id)arg1 ;
-(BOOL)isNetworkRegistrationEnabled;
-(BOOL)isUsingSlowDataConnection;
-(BOOL)isTTYEnabled;
-(void)_provisioningUpdateWithStatus:(int)arg1 slot:(long long)arg2 ;
-(id)_primarySubscriptionInfo;
-(id)_primaryMobileEquipmentInfo;
-(id)_secondarySubscriptionInfo;
-(id)_secondaryMobileEquipmentInfo;
-(id)carrierDisabledApplicationIDs;
-(BOOL)isNetworkTethering;
-(int)numberOfNetworkTetheredDevices;
@end

