/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
*/

#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>
#import <libobjc.A.dylib/TUCallCapabilitiesDelegatePrivate.h>
#import <libobjc.A.dylib/TUCallCapabilitiesDelegate.h>

@protocol OS_dispatch_queue;
@class ACAccountStore, NSNumber, AXDispatchTimer, CTXPCServiceSubscriptionContext, NSSet, CNContactStore, CoreTelephonyClient, NSObject, NSString;

@interface RTTTelephonyUtilities : NSObject <CoreTelephonyClientCarrierBundleDelegate, TUCallCapabilitiesDelegatePrivate, TUCallCapabilitiesDelegate> {

	ACAccountStore* _accountStore;
	NSNumber* _callCapabilitiesSupportsTelephonyCalls;
	AXDispatchTimer* _icloudAccountConsolidator;
	AXDispatchTimer* _icloudRelayConsolidator;
	BOOL _headphoneJackSupportsTTY;
	CTXPCServiceSubscriptionContext* _defaultVoiceContext;
	unsigned long long _activeContextCount;
	NSSet* _allVoiceContexts;
	CNContactStore* _contactStore;
	CoreTelephonyClient* _telephonyClient;
	NSObject*<OS_dispatch_queue> _telephonyUpdateQueue;
	NSObject*<OS_dispatch_queue> _accountStoreQueue;

}

@property (assign,nonatomic) BOOL headphoneJackSupportsTTY;                                  //@synthesize headphoneJackSupportsTTY=_headphoneJackSupportsTTY - In the implementation block
@property (nonatomic,retain) CoreTelephonyClient * telephonyClient;                          //@synthesize telephonyClient=_telephonyClient - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> telephonyUpdateQueue;              //@synthesize telephonyUpdateQueue=_telephonyUpdateQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accountStoreQueue;                 //@synthesize accountStoreQueue=_accountStoreQueue - In the implementation block
@property (retain) CTXPCServiceSubscriptionContext * defaultVoiceContext;                    //@synthesize defaultVoiceContext=_defaultVoiceContext - In the implementation block
@property (retain) NSSet * allVoiceContexts;                                                 //@synthesize allVoiceContexts=_allVoiceContexts - In the implementation block
@property (assign) unsigned long long activeContextCount;                                    //@synthesize activeContextCount=_activeContextCount - In the implementation block
@property (retain) NSNumber * callCapabilitiesSupportsTelephonyCalls; 
@property (nonatomic,retain) CNContactStore * contactStore;                                  //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)softwareTTYIsSupported;
+(BOOL)hardwareTTYIsSupported;
+(id)sharedUtilityProvider;
+(BOOL)isRTTSupportedForContext:(id)arg1 ;
+(BOOL)isRTTSupported;
+(BOOL)isTTYSupportedForContext:(id)arg1 ;
+(BOOL)isTTYSupported;
+(BOOL)hardwareTTYIsSupportedForContext:(id)arg1 ;
+(BOOL)softwareTTYIsSupportedForContext:(id)arg1 ;
+(id)sharedCallCenter;
+(void)performCallCenterTask:(/*^block*/id)arg1 ;
+(BOOL)isOnlyRTTSupported;
+(BOOL)shouldUseRTT;
+(BOOL)relayIsSupported;
+(BOOL)isOnlyRTTSupportedForContext:(id)arg1 ;
+(BOOL)isRelayRTTSupported;
+(BOOL)shouldUseRTTForContext:(id)arg1 ;
+(id)relayPhoneNumber;
+(id)relayPhoneNumberForContext:(id)arg1 ;
+(BOOL)TTYHardwareEnabledForAnyActiveContext;
+(BOOL)TTYSoftwareEnabledForAnyActiveContext;
+(BOOL)relayIsSupportedForContext:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)subscriptionInfoDidChange;
-(void)activeSubscriptionsDidChange;
-(void)simLessSubscriptionsDidChange;
-(void)didChangeTelephonyCallingSupport;
-(void)didChangeOutgoingRelayCallerID;
-(BOOL)isTTYSupportedForContext:(id)arg1 ;
-(unsigned long long)currentPreferredTransportMethodForContext:(id)arg1 ;
-(unsigned long long)currentPreferredTransportMethod;
-(void)registerNotifications;
-(BOOL)reloadRelayPhoneNumbers;
-(CTXPCServiceSubscriptionContext *)defaultVoiceContext;
-(void)setTTYDictionaryAvailability:(BOOL)arg1 ;
-(BOOL)relayIsSupported;
-(CoreTelephonyClient *)telephonyClient;
-(BOOL)isTTYOverIMSSupportedForContext:(id)arg1 ;
-(NSSet *)allVoiceContexts;
-(id)relayNumberForContext:(id)arg1 ;
-(void)setTelephonyUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(void)reloadDefaultVoiceContext;
-(void)setAccountStoreQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)updateHeadphoneState;
-(void)listenForCloudRelayChanges;
-(void)setCallCapabilitiesSupportsTelephonyCalls:(NSNumber *)arg1 ;
-(void)setHeadphoneJackSupportsTTY:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)telephonyUpdateQueue;
-(void)headphoneStateChangedNotification:(id)arg1 ;
-(void)mediaServerDied;
-(NSNumber *)callCapabilitiesSupportsTelephonyCalls;
-(BOOL)headphoneJackSupportsTTY;
-(BOOL)contactIsTTYContact:(id)arg1 ;
-(id)phoneNumberForContext:(id)arg1 ;
-(id)subscriptionContexts;
-(id)phoneNumberFromUUID:(id)arg1 ;
-(void)carrierSettingsDidChange;
-(void)setDefaultVoiceContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(void)setActiveContextCount:(unsigned long long)arg1 ;
-(void)setAllVoiceContexts:(NSSet *)arg1 ;
-(id)getCarrierValueForKeyHierarchy:(id)arg1 andContext:(id)arg2 ;
-(id)getCarrierValueForKey:(id)arg1 andContext:(id)arg2 ;
-(BOOL)currentProcessHandlesCloudRelay;
-(void)iCloudRTTRelayDidChange:(id)arg1 ;
-(void)iCloudAccountDidChange:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)accountStoreQueue;
-(BOOL)relayRTTIsSupported;
-(void)_icloudAccountChanged;
-(id)myPhoneNumber;
-(id)ttyMeContact;
-(BOOL)contactPathIsMe:(id)arg1 ;
-(id)contactPathForCall:(id)arg1 ;
-(id)labelFromUUID:(id)arg1 ;
-(unsigned long long)activeContextCount;
@end

