/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSString;

@interface AMSDevice : NSObject <AMSBagConsumer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)operatingSystem;
+(id)productVersion;
+(id)deviceName;
+(id)serialNumber;
+(id)language;
+(id)productType;
+(id)macAddress;
+(id)buildVersion;
+(BOOL)isRunningInStoreDemoMode;
+(id)screenScale;
+(void)registerCompanionWithSerialNumber:(id)arg1 ;
+(BOOL)deviceIsiPhone;
+(BOOL)deviceIsiPad;
+(id)ROMAddress;
+(id)MLBSerialNumber;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(id)deviceGUID;
+(BOOL)deviceIsAppleTV;
+(BOOL)deviceIsAudioAccessory;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(BOOL)deviceIsiPod;
+(id)uniqueDeviceId;
+(void)startListeningForDeviceLanguageChangeWithBagContract:(id)arg1 ;
+(void)stopListeningForDeviceLanguageChange;
+(id)deviceOffers;
+(BOOL)postDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 bag:(id)arg4 logKey:(id)arg5 ;
+(id)_followUpItemWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 bag:(id)arg4 ;
+(void)_performAuth;
+(BOOL)tearDownAllDeviceOfferFollowUpsForAccount:(id)arg1 logKey:(id)arg2 ;
+(BOOL)postAllDeviceOfferFollowUpsForAccount:(id)arg1 priority:(long long)arg2 bag:(id)arg3 logKey:(id)arg4 ;
+(void)_setDeviceEligibilityKeepingExistingDeviceOffers:(id)arg1 offersStore:(id)arg2 ;
+(void)saveDeviceOffers:(id)arg1 ;
+(BOOL)_setRawDeviceOffers:(id)arg1 offersStore:(id)arg2 ;
+(BOOL)shouldPresentSetupOffersForAccount:(id)arg1 issues:(long long*)arg2 ;
+(BOOL)isEligibleForOffers;
+(BOOL)tearDownDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 logKey:(id)arg3 ;
+(BOOL)_shouldPostOffersUpdatedNotification:(id)arg1 oldOffers:(id)arg2 ;
+(BOOL)expressedIntent;
+(BOOL)isGift;
+(BOOL)deviceOffersContainType:(unsigned long long)arg1 ;
+(id)deviceOffersForType:(unsigned long long)arg1 ;
+(void)registerCompanionWithSerialNumber:(id)arg1 bag:(id)arg2 ;
+(void)removeDeviceOfferWithIdentifier:(id)arg1 account:(id)arg2 bag:(id)arg3 logKey:(id)arg4 ;
+(BOOL)saveDeviceOffersForAccount:(id)arg1 response:(id)arg2 logKey:(id)arg3 ;
+(void)saveDeviceOfferEligibility:(id)arg1 ;
+(void)setDeviceOffersCheckEncodingForRequestParameters:(id)arg1 ;
+(BOOL)shouldPresentSetupOffersForAccount:(id)arg1 ;
+(id)_notificationIdFromFollowUpId:(id)arg1 account:(id)arg2 ;
+(BOOL)postAllDeviceOfferFollowUpsForAccount:(id)arg1 priority:(long long)arg2 bagContract:(id)arg3 logKey:(id)arg4 ;
+(BOOL)postDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 bagContract:(id)arg4 logKey:(id)arg5 ;
+(void)removeDeviceOfferWithIdentifier:(id)arg1 account:(id)arg2 bagContract:(id)arg3 logKey:(id)arg4 ;
+(id)compatibleProductType;
+(id)hardwarePlatform;
+(BOOL)isSecureElementAvailable;
+(id)localIPAddress;
+(id)macAddressData;
+(id)thinnedAppVariantId;
+(BOOL)deviceIsAppleWatch;
+(BOOL)deviceIsMac;
+(id)_dataForNVRAMKey:(id)arg1 ;
+(id)_systemVersionDictionary;
+(BOOL)deviceIsInternalBuild;
+(BOOL)deviceIsSeedBuild;
@end

