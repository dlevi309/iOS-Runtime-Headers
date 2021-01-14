/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
*/

#import <SystemStatusServer/SystemStatusServer-Structs.h>
#import <libobjc.A.dylib/BSDebugDescriptionProviding.h>
#import <libobjc.A.dylib/CoreTelephonyClientDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientRegistrationDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientSubscriberDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSObject, CoreTelephonyClient, STTelephonySubscriptionContext, NSArray, RadiosPreferences, NSString;

@interface STTelephonyStateProvider : NSObject <BSDebugDescriptionProviding, CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientCarrierBundleDelegate, RadiosPreferencesDelegate, BSInvalidatable> {

	CTServerConnectionRef _serverConnection;
	BOOL _hasCellularTelephony;
	BOOL _cachedDualSIMEnabled;
	BOOL _cachedRadioModuleDead;
	BOOL _containsCellularRadio;
	BOOL _airplaneModeEnabled;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSObject*<OS_dispatch_queue> _backgroundQueryQueue;
	CoreTelephonyClient* _coreTelephonyClient;
	STTelephonySubscriptionContext* _slot1SubscriptionContext;
	STTelephonySubscriptionContext* _slot2SubscriptionContext;
	NSArray* _cachedCTContexts;
	long long _cachedSuppressesCellDataIndicator;
	long long _cachedSuppressesCellIndicators;
	long long _cachedNeedsUserIdentificationModule;
	RadiosPreferences* _radiosPreferences;
	BOOL* _telephonyDaemonRestartHandlerCanceled;

}

@property (nonatomic,readonly) NSHashTable * observers;                                                                //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                                               //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> observerQueue;                                               //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backgroundQueryQueue;                                        //@synthesize backgroundQueryQueue=_backgroundQueryQueue - In the implementation block
@property (nonatomic,readonly) CoreTelephonyClient * coreTelephonyClient;                                              //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (nonatomic,retain) STTelephonySubscriptionContext * slot1SubscriptionContext;                                //@synthesize slot1SubscriptionContext=_slot1SubscriptionContext - In the implementation block
@property (nonatomic,retain) STTelephonySubscriptionContext * slot2SubscriptionContext;                                //@synthesize slot2SubscriptionContext=_slot2SubscriptionContext - In the implementation block
@property (assign,nonatomic) BOOL cachedDualSIMEnabled;                                                                //@synthesize cachedDualSIMEnabled=_cachedDualSIMEnabled - In the implementation block
@property (nonatomic,copy) NSArray * cachedCTContexts;                                                                 //@synthesize cachedCTContexts=_cachedCTContexts - In the implementation block
@property (assign,nonatomic) BOOL cachedRadioModuleDead;                                                               //@synthesize cachedRadioModuleDead=_cachedRadioModuleDead - In the implementation block
@property (nonatomic,readonly) BOOL containsCellularRadio;                                                             //@synthesize containsCellularRadio=_containsCellularRadio - In the implementation block
@property (assign,nonatomic) long long cachedSuppressesCellDataIndicator;                                              //@synthesize cachedSuppressesCellDataIndicator=_cachedSuppressesCellDataIndicator - In the implementation block
@property (nonatomic,readonly) BOOL suppressesCellDataIndicator; 
@property (assign,nonatomic) long long cachedSuppressesCellIndicators;                                                 //@synthesize cachedSuppressesCellIndicators=_cachedSuppressesCellIndicators - In the implementation block
@property (assign,nonatomic) long long cachedNeedsUserIdentificationModule;                                            //@synthesize cachedNeedsUserIdentificationModule=_cachedNeedsUserIdentificationModule - In the implementation block
@property (nonatomic,readonly) RadiosPreferences * radiosPreferences;                                                  //@synthesize radiosPreferences=_radiosPreferences - In the implementation block
@property (assign,getter=isAirplaneModeEnabled,nonatomic) BOOL airplaneModeEnabled;                                    //@synthesize airplaneModeEnabled=_airplaneModeEnabled - In the implementation block
@property (assign,nonatomic) BOOL* telephonyDaemonRestartHandlerCanceled;                                              //@synthesize telephonyDaemonRestartHandlerCanceled=_telephonyDaemonRestartHandlerCanceled - In the implementation block
@property (getter=isDualSIMEnabled,nonatomic,readonly) BOOL dualSIMEnabled; 
@property (getter=isRadioModuleDead,nonatomic,readonly) BOOL radioModuleDead; 
@property (getter=isCellularRadioCapabilityActive,nonatomic,readonly) BOOL cellularRadioCapabilityActive; 
@property (nonatomic,readonly) BOOL hasCellularTelephony;                                                              //@synthesize hasCellularTelephony=_hasCellularTelephony - In the implementation block
@property (nonatomic,readonly) BOOL needsUserIdentificationModule; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)signalStrengthChanged:(id)arg1 info:(id)arg2 ;
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2 ;
-(void)servingNetworkChanged:(id)arg1 ;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)subscriptionInfoDidChange;
-(void)carrierBundleChange:(id)arg1 ;
-(void)currentDataSimChanged:(id)arg1 ;
-(BOOL)isAirplaneModeEnabled;
-(void)displayStatusChanged:(id)arg1 status:(id)arg2 ;
-(void)preferredDataSimChanged:(id)arg1 ;
-(void)operatorNameChanged:(id)arg1 name:(id)arg2 ;
-(id)succinctDescription;
-(void)_startFakeServiceIfNecessaryForContext:(id)arg1 ;
-(void)_purgeSlot2SubscriptionState;
-(void)addObserver:(id)arg1 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(BOOL)isRadioModuleDead;
-(void)_stopFakeServiceForContext:(id)arg1 ;
-(CTServerConnectionRef)_serverConnection;
-(STTelephonySubscriptionContext *)slot1SubscriptionContext;
-(void)_updateDataConnectionType;
-(NSHashTable *)observers;
-(void)_updateLastKnownNetworkCountryCodeInContext:(id)arg1 withCTContext:(id)arg2 ;
-(id)_backgroundQueryQueue_carrierBundleInfoForCTContext:(id)arg1 ;
-(void)_airplaneModeDidChange:(BOOL)arg1 ;
-(id)init;
-(void)_logSubscriptionEvent:(id)arg1 forCTContext:(id)arg2 ;
-(void)_updateRegistrationNowInSubscriptionContext:(id)arg1 ;
-(BOOL)hasCellularTelephony;
-(id)_newSubscriptionContext;
-(void)_purgeSubscriptionState;
-(BOOL)isDualSIMEnabled;
-(NSObject*<OS_dispatch_queue>)backgroundQueryQueue;
-(void)_startFakeRegistrationIfNecessaryForContext:(id)arg1 ;
-(long long)cachedSuppressesCellDataIndicator;
-(void)setObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)_hideDataIndicatorChanged:(id)arg1 ;
-(void)_setCellStatus:(id)arg1 displayStatus:(id)arg2 forcedHome:(BOOL)arg3 changeCausedBySIMRemoval:(BOOL)arg4 inSubscriptionContext:(id)arg5 withCTContext:(id)arg6 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_setSignalStrengthBars:(unsigned long long)arg1 maxBars:(unsigned long long)arg2 inSubscriptionContext:(id)arg3 ;
-(long long)cachedNeedsUserIdentificationModule;
-(id)_backgroundQueryQueue_mobileEquipmentInfoForCTContext:(id)arg1 ;
-(void)_setRegistrationRejectionCauseCode:(long long)arg1 inContext:(id)arg2 ;
-(id)debugDescriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_updateDataStatus:(id)arg1 inSubscriptionContext:(id)arg2 ;
-(void)_setCarrierBundleInfo:(id)arg1 inSubscriptionContext:(id)arg2 ;
-(id)_backgroundQueryQueue_subscriptionContextWithInfoNotRequiringSIMForCTContext:(id)arg1 ;
-(void)setCachedSuppressesCellIndicators:(long long)arg1 ;
-(NSString *)debugDescription;
-(void)_updateDataConnectedSubscriptionContextForCTContext:(id)arg1 ;
-(void)_postponementStateChanged;
-(void)_updateDataConnectionTypeForContext:(id)arg1 ;
-(BOOL)_isSIMPresentForSlot:(long long)arg1 ;
-(void)_internalQueue_notifyObserversOfCarrierBundleInfoChangeForSlot:(long long)arg1 ;
-(void)networkReselectionNeeded:(id)arg1 ;
-(void)operatorBundleChange:(id)arg1 ;
-(void)airplaneModeChanged;
-(void)setCachedCTContexts:(NSArray *)arg1 ;
-(void)setAirplaneModeEnabled:(BOOL)arg1 ;
-(void)_logSubscriptionEvent:(id)arg1 forContext:(id)arg2 ;
-(void)_purgeSlot1SubscriptionState;
-(void)_serverConnectionDidError:(SCD_Struct_ST2)arg1 ;
-(BOOL)_hasCTContextForSlot:(long long)arg1 ;
-(void)_setSuppressesCellDataIndicator:(long long)arg1 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg1 ;
-(void)_updateState;
-(void)networkSelected:(id)arg1 success:(BOOL)arg2 mode:(id)arg3 ;
-(void)setSlot2SubscriptionContext:(STTelephonySubscriptionContext *)arg1 ;
-(void)setCachedRadioModuleDead:(BOOL)arg1 ;
-(NSString *)description;
-(void)_startFakeCellularRegistrationIfNecessaryForContext:(id)arg1 ;
-(void)_internalQueue_notifyObserversOfMobileEquipmentInfoChangeForSlot:(long long)arg1 ;
-(void)_updateDualSIMCapabilitySendingNotification:(BOOL)arg1 ;
-(BOOL)cachedDualSIMEnabled;
-(void)_setCellRegistrationStatus:(unsigned long long)arg1 inSubscriptionContext:(id)arg2 ;
-(BOOL)cachedRadioModuleDead;
-(BOOL)isSIMPresentForSlot:(long long)arg1 ;
-(void)_queryRegistrationStatusForCTContext:(id)arg1 ;
-(void)rejectCauseCodeChanged:(id)arg1 causeCode:(id)arg2 ;
-(void)_setRegistrationStatus:(unsigned long long)arg1 inSubscriptionContext:(id)arg2 ;
-(BOOL)isCellularRadioCapabilityActive;
-(void)_reallySetOperatorName:(id)arg1 inSubscriptionContext:(id)arg2 ;
-(void)setCachedSuppressesCellDataIndicator:(long long)arg1 ;
-(BOOL)_internalQueue_needsUserIdentificationModule;
-(id)_backgroundQueryQueue_shortSIMLabelForCTContext:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_setNetworkReselectionNeeded:(BOOL)arg1 inContext:(id)arg2 withCTContext:(id)arg3 ;
-(void)_cancelFakeCellularRegistrationForContext:(id)arg1 ;
-(id)_backgroundQueryQueue_SIMStatusForCTContext:(id)arg1 ;
-(void)setTelephonyDaemonRestartHandlerCanceled:(BOOL*)arg1 ;
-(long long)_subscriptionSlotForContext:(id)arg1 ;
-(id)carrierBundleInfoForSlot:(long long)arg1 ;
-(void)_applyInfoNotRequiringSIMFromContext:(id)arg1 toContext:(id)arg2 ;
-(id)_carrierNameForOperatorName:(id)arg1 withContext:(id)arg2 ;
-(void)_logSubscriptionEvent:(id)arg1 ;
-(void)setCachedDualSIMEnabled:(BOOL)arg1 ;
-(BOOL*)telephonyDaemonRestartHandlerCanceled;
-(void)_handleTelephonyDaemonRestart;
-(void)dualSimCapabilityDidChange;
-(id)_internalQueue_subscriptionContextForSlot:(long long)arg1 ;
-(BOOL)needsUserIdentificationModule;
-(NSArray *)cachedCTContexts;
-(void)suppServicesEvent:(id)arg1 event:(int)arg2 settingsType:(int)arg3 data:(id)arg4 ;
-(void)_handleNetworkReselectionNeeded:(BOOL)arg1 forCTContext:(id)arg2 ;
-(void)_setSIMStatus:(id)arg1 inSubscriptionContext:(id)arg2 ;
-(void)invalidate;
-(STTelephonySubscriptionContext *)slot2SubscriptionContext;
-(void)_cancelFakeRegistrationForContext:(id)arg1 ;
-(void)_setOperatorName:(id)arg1 inSubscriptionContext:(id)arg2 ;
-(id)mobileEquipmentInfoForSlot:(long long)arg1 ;
-(void)_cancelFakeServiceForContext:(id)arg1 ;
-(void)_internalQueue_notifyObserversOfSubscriptionInfoChangeForSlot:(long long)arg1 ;
-(RadiosPreferences *)radiosPreferences;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)subscriptionInfoForSlot:(long long)arg1 ;
-(void)_setCallForwardingIndicator:(unsigned long long)arg1 inSubscriptionContext:(id)arg2 ;
-(id)_subscriptionContextForCTContext:(id)arg1 ;
-(BOOL)_internalQueue_isCellularRadioCapabilityActive;
-(void)cellChanged:(id)arg1 cell:(id)arg2 ;
-(id)succinctDescriptionBuilder;
-(BOOL)containsCellularRadio;
-(void)setBackgroundQueryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_setCachedCTRegistrationCellStatus:(id)arg1 displayStatus:(id)arg2 forcedHome:(BOOL)arg3 inSubscriptionContext:(id)arg4 ;
-(void)setCachedNeedsUserIdentificationModule:(long long)arg1 ;
-(void)_updateCallForwardingIndicatorForContext:(id)arg1 ;
-(void)_handleCellChangedForContext:(id)arg1 withCTContext:(id)arg2 ;
-(void)_setSuppressesCellIndicators:(long long)arg1 ;
-(void)setSlot1SubscriptionContext:(STTelephonySubscriptionContext *)arg1 ;
-(long long)cachedSuppressesCellIndicators;
-(BOOL)suppressesCellDataIndicator;
-(void)_querySubscriptionStateForCTContext:(id)arg1 ;
-(void)_queryCallForwardingStateForCTContext:(id)arg1 ;
-(void)dealloc;
@end

