/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSString;

@interface AMSDevice : NSObject <AMSBagConsumer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deviceName;
+(id)serialNumber;
+(id)bagKeySet;
+(BOOL)isGift;
+(BOOL)deviceIsiPod;
+(id)productVersion;
+(id)productType;
+(id)phoneNumber;
+(id)bagSubProfile;
+(id)macAddress;
+(BOOL)deviceIsAppleTV;
+(BOOL)deviceIsInternalBuild;
+(id)operatingSystem;
+(id)MLBSerialNumber;
+(id)deviceGUID;
+(id)uniqueDeviceId;
+(BOOL)deviceIsSeedBuild;
+(id)buildVersion;
+(id)ROMAddress;
+(BOOL)deviceIsAudioAccessory;
+(id)compatibleProductType;
+(id)screenWidth;
+(BOOL)deviceIsiPhone;
+(id)screenHeight;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(long long)biometricState;
+(BOOL)deviceIsiPad;
+(BOOL)deviceIsAppleWatch;
+(void)_performAuth;
+(id)deviceOffers;
+(BOOL)deviceIsMac;
+(id)bagSubProfileVersion;
+(void)stopListeningForDeviceLanguageChange;
+(void)startListeningForDeviceLanguageChangeWithBagContract:(id)arg1 ;
+(BOOL)postDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 bag:(id)arg4 logKey:(id)arg5 ;
+(id)_followUpItemWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 bag:(id)arg4 ;
+(BOOL)isEligibleForOffers;
+(id)screenScale;
+(id)language;
+(BOOL)tearDownAllDeviceOfferFollowUpsForAccount:(id)arg1 logKey:(id)arg2 ;
+(BOOL)postAllDeviceOfferFollowUpsForAccount:(id)arg1 priority:(long long)arg2 bag:(id)arg3 logKey:(id)arg4 ;
+(void)saveDeviceOffers:(id)arg1 ;
+(void)_setDeviceEligibilityKeepingExistingDeviceOffers:(id)arg1 offersStore:(id)arg2 ;
+(BOOL)_setRawDeviceOffers:(id)arg1 offersStore:(id)arg2 ;
+(BOOL)shouldPresentSetupOffersForAccount:(id)arg1 issues:(long long*)arg2 ;
+(BOOL)tearDownDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 logKey:(id)arg3 ;
+(BOOL)expressedIntent;
+(BOOL)_shouldPostOffersUpdatedNotification:(id)arg1 oldOffers:(id)arg2 ;
+(BOOL)deviceOffersContainType:(unsigned long long)arg1 ;
+(id)deviceOffersForType:(unsigned long long)arg1 ;
+(void)saveDeviceOfferEligibility:(id)arg1 ;
+(void)registerCompanionWithSerialNumber:(id)arg1 bag:(id)arg2 ;
+(BOOL)shouldPresentSetupOffersForAccount:(id)arg1 ;
+(void)removeDeviceOfferWithIdentifier:(id)arg1 account:(id)arg2 bag:(id)arg3 logKey:(id)arg4 ;
+(id)hardwarePlatform;
+(BOOL)saveDeviceOffersForAccount:(id)arg1 response:(id)arg2 logKey:(id)arg3 ;
+(void)registerCompanionWithSerialNumber:(id)arg1 ;
+(void)setDeviceOffersCheckEncodingForRequestParameters:(id)arg1 ;
+(id)localIPAddress;
+(id)_notificationIdFromFollowUpId:(id)arg1 account:(id)arg2 ;
+(id)macAddressData;
+(id)thinnedAppVariantId;
+(BOOL)postAllDeviceOfferFollowUpsForAccount:(id)arg1 priority:(long long)arg2 bagContract:(id)arg3 logKey:(id)arg4 ;
+(BOOL)postDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 bagContract:(id)arg4 logKey:(id)arg5 ;
+(void)removeDeviceOfferWithIdentifier:(id)arg1 account:(id)arg2 bagContract:(id)arg3 logKey:(id)arg4 ;
+(void)setBiometricState:(long long)arg1 ;
+(BOOL)isSecureElementAvailable;
+(id)_dataForNVRAMKey:(id)arg1 ;
+(id)_systemVersionDictionary;
+(BOOL)isRunningInStoreDemoMode;
+(id)createBagForSubProfile;
@end

