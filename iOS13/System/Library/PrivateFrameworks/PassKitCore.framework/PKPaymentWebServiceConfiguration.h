/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSNumber, NSURL;

@interface PKPaymentWebServiceConfiguration : NSObject <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _configuration;
	NSNumber* _version;
	NSURL* _configurationURL;

}

@property (copy) NSDictionary * configuration;               //@synthesize configuration=_configuration - In the implementation block
@property (__weak,readonly) NSNumber * version;              //@synthesize version=_version - In the implementation block
@property (copy) NSURL * configurationURL;                   //@synthesize configurationURL=_configurationURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)version;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSDictionary *)configuration;
-(BOOL)peerPaymentEnabledForRegion:(id)arg1 ;
-(BOOL)applyServiceEnabledForRegion:(id)arg1 ;
-(BOOL)accountServiceEnabledForRegion:(id)arg1 ;
-(id)featureWithType:(long long)arg1 inRegion:(id)arg2 ;
-(id)paymentSetupFeaturedNetworksForRegion:(id)arg1 ;
-(id)paymentSetupBrowsableProductTypesForRegion:(id)arg1 ;
-(id)supportedRegionsForOSVersion:(id)arg1 deviceClass:(id)arg2 ;
-(id)unsupportedRegionsForOSVersion:(id)arg1 deviceClass:(id)arg2 ;
-(BOOL)hasFeaturesSupportedForRegion:(id)arg1 osVersion:(id)arg2 deviceClass:(id)arg3 ;
-(BOOL)buddyProvisioningEnabledForRegion:(id)arg1 ;
-(BOOL)buddyManualProvisioningEnabledForRegion:(id)arg1 ;
-(id)discoveryManifestURLForRegion:(id)arg1 ;
-(id)unsupportedWebPaymentConfigurations;
-(BOOL)AMPNonDefaultBehaviourDisabledForRegion:(id)arg1 ;
-(id)primaryFeaturedNetworkForRegion:(id)arg1 ;
-(id)heroImageManifestURLForRegion:(id)arg1 ;
-(BOOL)browseProvisioningBankAppsEnabledForRegion:(id)arg1 ;
-(id)marketsURL;
-(BOOL)suppressCardholderNameFieldForRegion:(id)arg1 ;
-(BOOL)regionHasProvisioningEnablementPercentage:(id)arg1 ;
-(double)provisioningEnablementPercentageForRegion:(id)arg1 ;
-(id)marketGeoRegionNotificationNetworkThresholdsForRegion:(id)arg1 ;
-(id)betaPaymentNetworksForRegion:(id)arg1 ;
-(id)betaPaymentNetworkVersionsForRegion:(id)arg1 ;
-(id)applyServiceFeaturesForRegion:(id)arg1 ;
-(void)setConfigurationURL:(NSURL *)arg1 ;
-(NSURL *)configurationURL;
-(id)_queue_region:(id)arg1 ;
-(id)supportedRegionsForOSVersion:(id)arg1 deviceClass:(id)arg2 platform:(id)arg3 ;
-(id)_regionsForOSVersion:(id)arg1 deviceClass:(id)arg2 platform:(id)arg3 supportedRegions:(BOOL)arg4 ;
-(id)unsupportedRegionsForOSVersion:(id)arg1 deviceClass:(id)arg2 platform:(id)arg3 ;
-(id)_queue_featuresForRegion:(id)arg1 osVersion:(id)arg2 deviceClass:(id)arg3 ;
-(id)_queue_globalFeaturesForOSVersion:(id)arg1 deviceClass:(id)arg2 ;
-(id)_featuresFromDictionary:(id)arg1 withRegion:(id)arg2 osVersion:(id)arg3 deviceClass:(id)arg4 ;
-(id)_queue_featuresForRegion:(id)arg1 ;
-(id)_queue_unsupported_region:(id)arg1 ;
-(id)_queue_regions;
-(id)_queue_unsupported_regions;
-(BOOL)_queue_supportedForOSVersion:(id)arg1 inRegion:(id)arg2 deviceClass:(id)arg3 platform:(id)arg4 suportedRegions:(BOOL)arg5 ;
-(id)initWithConfiguration:(id)arg1 url:(id)arg2 ;
-(id)brokerURLForRegion:(id)arg1 ;
-(id)paymentServicesURLForRegion:(id)arg1 ;
-(id)paymentServicesMerchantURLForRegion:(id)arg1 ;
-(BOOL)manualProvisioningEnabledForRegion:(id)arg1 ;
-(BOOL)cameraFirstProvisioningEnabledForRegion:(id)arg1 ;
-(id)defaultServerURL;
-(BOOL)userCanResetCloudStoreApplePayViewForRegion:(id)arg1 ;
-(id)maxRefreshIntervalForUnsupportedRegion;
-(id)maxRefreshIntervalForRegion:(id)arg1 ;
-(id)featuresForRegion:(id)arg1 ;
-(BOOL)remotePaymentsRequiredForVoiceover;
-(id)numberOfDaysBetweenMapsReprocessingForRegion:(id)arg1 ;
-(id)marketGeoRegionNotificationDisabledNetworksForRegion:(id)arg1 ;
-(id)marketGeoRegionNotificationSendLimitForRegion:(id)arg1 ;
-(id)marketGeoRegionNotificationHourForRegion:(id)arg1 ;
-(BOOL)browseProvisioningBankAppsManualEntryDisabledForRegion:(id)arg1 ;
-(id)marketGeoRegionNotificationTimeRangeForRegion:(id)arg1 ;
-(double)deviceCheckInIntervalForRegion:(id)arg1 ;
-(BOOL)deviceCheckInDisabledForRegion:(id)arg1 ;
-(BOOL)shouldPaymentSetupFeaturesUseStrictProductsCheckForRegion:(id)arg1 ;
-(BOOL)shouldEnableTransitServiceCheckInForRegion:(id)arg1 ;
@end

