/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
*/

#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>
#import <libobjc.A.dylib/TUCallCapabilitiesDelegatePrivate.h>
#import <libobjc.A.dylib/TUCallCapabilitiesDelegate.h>

@protocol OS_dispatch_queue;
@class ACAccountStore, NSNumber, AXDispatchTimer, CTXPCServiceSubscriptionContext, NSSet, CNContactStore, CoreTelephonyClient, NSObject, NSArray, CTXPCContexts, NSMutableDictionary, NSString;

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
	NSArray* _cachedSubscriptionContexts;
	CTXPCContexts* _cachedActiveContexts;
	NSMutableDictionary* _phoneNumberInfoCache;

}

@property (assign,nonatomic) BOOL headphoneJackSupportsTTY;                                  //@synthesize headphoneJackSupportsTTY=_headphoneJackSupportsTTY - In the implementation block
@property (nonatomic,retain) CoreTelephonyClient * telephonyClient;                          //@synthesize telephonyClient=_telephonyClient - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> telephonyUpdateQueue;              //@synthesize telephonyUpdateQueue=_telephonyUpdateQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accountStoreQueue;                 //@synthesize accountStoreQueue=_accountStoreQueue - In the implementation block
@property (retain) CTXPCServiceSubscriptionContext * defaultVoiceContext;                    //@synthesize defaultVoiceContext=_defaultVoiceContext - In the implementation block
@property (retain) NSSet * allVoiceContexts;                                                 //@synthesize allVoiceContexts=_allVoiceContexts - In the implementation block
@property (assign) unsigned long long activeContextCount;                                    //@synthesize activeContextCount=_activeContextCount - In the implementation block
@property (retain) NSNumber * callCapabilitiesSupportsTelephonyCalls; 
@property (retain) NSArray * cachedSubscriptionContexts;                                     //@synthesize cachedSubscriptionContexts=_cachedSubscriptionContexts - In the implementation block
@property (retain) CTXPCContexts * cachedActiveContexts;                                     //@synthesize cachedActiveContexts=_cachedActiveContexts - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * phoneNumberInfoCache;                     //@synthesize phoneNumberInfoCache=_phoneNumberInfoCache - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                  //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isRelayRTTSupported;
+(BOOL)softwareTTYIsSupportedForContext:(id)arg1 ;
+(BOOL)isOnlyRTTSupportedForContext:(id)arg1 ;
+(BOOL)isRTTSupported;
+(BOOL)TTYSoftwareEnabledForAnyActiveContext;
+(id)sharedCallCenter;
+(id)relayPhoneNumber;
+(BOOL)shouldUseRTT;
+(BOOL)relayIsSupportedForContext:(id)arg1 ;
+(BOOL)isTTYSupported;
+(BOOL)hardwareTTYIsSupported;
+(BOOL)isOnlyRTTSupported;
+(BOOL)hardwareTTYIsSupportedForContext:(id)arg1 ;
+(BOOL)shouldUseRTTForContext:(id)arg1 ;
+(BOOL)isTTYSupportedForContext:(id)arg1 ;
+(id)relayPhoneNumberForContext:(id)arg1 ;
+(long long)currentSupportedTextingType;
+(id)sharedUtilityProvider;
+(void)performCallCenterTask:(/*^block*/id)arg1 ;
+(BOOL)softwareTTYIsSupported;
+(BOOL)relayIsSupported;
+(BOOL)TTYHardwareEnabledForAnyActiveContext;
+(BOOL)isRTTSupportedForContext:(id)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)activeSubscriptionsDidChange;
-(void)subscriptionInfoDidChange;
-(void)simLessSubscriptionsDidChange;
-(void)carrierSettingsDidChange;
-(void)iCloudAccountDidChange:(id)arg1 ;
-(id)getCarrierValueForKeyHierarchy:(id)arg1 andContext:(id)arg2 ;
-(void)listenForCloudRelayChanges;
-(CNContactStore *)contactStore;
-(void)_processiCloudAccountForRTT;
-(id)subscriptionContexts;
-(id)phoneNumberForContext:(id)arg1 ;
-(id)init;
-(id)contactPathForCall:(id)arg1 ;
-(id)getCarrierValueForKey:(id)arg1 andContext:(id)arg2 ;
-(void)didChangeTelephonyCallingSupport;
-(void)setCachedSubscriptionContexts:(NSArray *)arg1 ;
-(void)reloadDefaultVoiceContext;
-(void)didChangeRelayCallingAvailability;
-(BOOL)relayRTTIsSupported;
-(NSMutableDictionary *)phoneNumberInfoCache;
-(NSObject*<OS_dispatch_queue>)accountStoreQueue;
-(void)setTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(BOOL)reloadRelayPhoneNumbers;
-(void)setHeadphoneJackSupportsTTY:(BOOL)arg1 ;
-(void)mediaServerDied;
-(BOOL)contactIsTTYContact:(id)arg1 ;
-(unsigned long long)currentPreferredTransportMethodForContext:(id)arg1 ;
-(id)ttyMeContact;
-(id)phoneNumberFromUUID:(id)arg1 ;
-(void)setCachedActiveContexts:(CTXPCContexts *)arg1 ;
-(void)setDefaultVoiceContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(void)setAccountStoreQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)registerNotifications;
-(CTXPCContexts *)cachedActiveContexts;
-(id)myPhoneNumber;
-(id)labelFromUUID:(id)arg1 ;
-(void)didChangeOutgoingRelayCallerID;
-(BOOL)currentProcessHandlesCloudRelay;
-(void)setTelephonyUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)cachedSubscriptionContexts;
-(void)didChangeRelayCallingCapabilities;
-(void)setAllVoiceContexts:(NSSet *)arg1 ;
-(unsigned long long)currentPreferredTransportMethod;
-(void)iCloudRTTRelayDidChange:(id)arg1 ;
-(void)setActiveContextCount:(unsigned long long)arg1 ;
-(void)updateHeadphoneState;
-(NSNumber *)callCapabilitiesSupportsTelephonyCalls;
-(void)setTTYDictionaryAvailability:(BOOL)arg1 ;
-(CoreTelephonyClient *)telephonyClient;
-(BOOL)isTTYSupportedForContext:(id)arg1 ;
-(BOOL)contactPathIsMe:(id)arg1 ;
-(BOOL)headphoneJackSupportsTTY;
-(id)activeContexts;
-(NSObject*<OS_dispatch_queue>)telephonyUpdateQueue;
-(BOOL)isTTYOverIMSSupportedForContext:(id)arg1 ;
-(void)setPhoneNumberInfoCache:(NSMutableDictionary *)arg1 ;
-(id)relayNumberForContext:(id)arg1 ;
-(unsigned long long)activeContextCount;
-(CTXPCServiceSubscriptionContext *)defaultVoiceContext;
-(void)headphoneStateChangedNotification:(id)arg1 ;
-(BOOL)relayIsSupported;
-(void)purgePhoneNumberInfoCache;
-(NSSet *)allVoiceContexts;
-(void)dealloc;
-(void)setCallCapabilitiesSupportsTelephonyCalls:(NSNumber *)arg1 ;
@end

