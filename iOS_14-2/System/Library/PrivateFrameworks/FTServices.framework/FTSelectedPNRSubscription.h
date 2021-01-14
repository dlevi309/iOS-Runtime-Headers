/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/

#import <libobjc.A.dylib/CoreTelephonyClientDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientSuppServicesDelegate.h>

@class NSRecursiveLock, CoreTelephonyClient, FTSelectedPNRSubscriptionCache, NSString;

@interface FTSelectedPNRSubscription : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSuppServicesDelegate> {

	NSRecursiveLock* _lock;
	CoreTelephonyClient* _coreTelephonyClient;
	FTSelectedPNRSubscriptionCache* _cache;
	BOOL _isCacheValid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)isPhoneNumber:(id)arg1 equivalentToExistingPhoneNumber:(id)arg2 ;
-(void)invalidateCache;
-(void)activeSubscriptionsDidChange;
-(void)subscriptionInfoDidChange;
-(void)phoneNumberChanged:(id)arg1 ;
-(void)phoneNumberAvailable:(id)arg1 ;
-(id)selectedPhoneNumberRegistrationRegistrationCarrierBundleValueForKey:(id)arg1 ofType:(Class)arg2 withFallbackValue:(id)arg3 ;
-(id)init;
-(id)_reevaluateCachedSelectedPhoneNumberRegistrationWithSubscription:(id)arg1 activeContexts:(id)arg2 fallbackProhibited:(BOOL)arg3 persistUpdate:(BOOL)arg4 error:(id*)arg5 ;
-(id)_reevaluateCachedActiveSubscriptionWithError:(id*)arg1 ;
-(BOOL)_isInDualPhoneIdentityModeBasedOnCapability:(long long)arg1 ;
-(void)_distributed_invalidateCache;
-(id)_protected_reevaluateCacheIfNeededAndPersistUpdate:(BOOL)arg1 ;
-(id)_subscriptionFromAvailableSubscriptions:(id)arg1 matchingSelectedLabel:(id)arg2 ;
-(id)setSelectedPhoneNumberRegistrationSubscriptionNumber:(id)arg1 ;
-(BOOL)isSelectedPhoneNumberRegistrationSubscriptionContext:(id)arg1 ;
-(void)dualSimCapabilityDidChange;
-(BOOL)_doesSubscriptionInfoContainMultipleUniqueLabels:(id)arg1 ;
-(id)_firstPresentSubscriptionFromAvailableSubscriptions:(id)arg1 ;
-(BOOL)_legacy_isPhoneNumberEmergencyNumber:(id)arg1 ;
-(void)_reevaluateDualIdentityModeWithSubscriptionInfo:(id)arg1 ;
-(BOOL)_doesSubscriptionInfoContainMultipleLabels:(id)arg1 ;
-(void)_protected_invalidateCache;
-(id)selectedRegistrationPhoneNumberWithError:(id*)arg1 ;
-(id)_reevaluateCachedSelectedPhoneNumberWithContext:(id)arg1 error:(id*)arg2 ;
-(void)persistSelectedPhoneNumberRegistrationSubscriptionIfNeeded;
-(id)selectedPhoneNumberRegistrationSubscriptionWithError:(id*)arg1 ;
-(BOOL)_isIdentityFallbackProhibitedForDeviceBasedOnCapability:(long long)arg1 subscriptionInfo:(id)arg2 ;
-(BOOL)isDeviceInDualPhoneIdentityMode;
-(id)_reevaluateCachedSubscriptionWithError:(id*)arg1 ;
-(BOOL)isPhoneNumberEmergencyNumber:(id)arg1 ;
-(void)dealloc;
-(id)_legacy_carrierBundleValueForKey:(id)arg1 ofType:(Class)arg2 ;
@end

