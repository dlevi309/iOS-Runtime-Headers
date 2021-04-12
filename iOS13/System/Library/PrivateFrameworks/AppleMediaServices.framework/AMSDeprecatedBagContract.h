/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSDeviceOfferBagContract.h>
#import <libobjc.A.dylib/AMSMetricsBagContract.h>
#import <libobjc.A.dylib/AMSMescalBagContract.h>
#import <libobjc.A.dylib/AMSLookupBagContract.h>

@protocol AMSBagProtocol;
@class AMSBagValue, NSString;

@interface AMSDeprecatedBagContract : NSObject <AMSDeviceOfferBagContract, AMSMetricsBagContract, AMSMescalBagContract, AMSLookupBagContract> {

	id<AMSBagProtocol> _bag;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag;                                     //@synthesize bag=_bag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AMSBagValue * appleMusicDeviceOfferDeepLink; 
@property (nonatomic,readonly) AMSBagValue * iCloudDeviceOfferDeepLink; 
@property (nonatomic,readonly) AMSBagValue * apsEnabledPatterns; 
@property (nonatomic,readonly) AMSBagValue * apsSamplingPercent; 
@property (nonatomic,readonly) AMSBagValue * apsAllowedProductTypes; 
@property (nonatomic,readonly) AMSBagValue * guidRegexes; 
@property (nonatomic,readonly) AMSBagValue * guidSchemes; 
@property (nonatomic,readonly) id<AMSMescalBagContract> mescalContract; 
@property (nonatomic,readonly) AMSBagValue * storefrontSuffix; 
@property (nonatomic,readonly) AMSBagValue * TLSSamplingPercentage; 
@property (nonatomic,readonly) AMSBagValue * TLSSamplingSessionDuration; 
@property (nonatomic,readonly) AMSBagValue * TFOSamplingPercentage; 
@property (nonatomic,readonly) AMSBagValue * TFOSamplingSessionDuration; 
@property (nonatomic,readonly) AMSBagValue * trustedDomains; 
@property (nonatomic,readonly) id<AMSMetricsBagContract> metricsContract; 
@property (nonatomic,readonly) AMSBagValue * metricsURL; 
@property (nonatomic,readonly) AMSBagValue * metricsDictionary; 
@property (nonatomic,readonly) AMSBagValue * metricsUrl; 
@property (nonatomic,readonly) AMSBagValue * mescalCertificateURL; 
@property (nonatomic,readonly) AMSBagValue * mescalSetupURL; 
@property (nonatomic,readonly) AMSBagValue * mescalPrimingURL; 
@property (nonatomic,readonly) AMSBagValue * mescalSignedActions; 
@property (nonatomic,readonly) AMSBagValue * mescalSignSapRequests; 
@property (nonatomic,readonly) AMSBagValue * mescalSignSapResponses; 
@property (nonatomic,readonly) AMSBagValue * personalizedLookupURL; 
@property (nonatomic,readonly) AMSBagValue * unpersonalizedLookupURL; 
-(id)initWithBag:(id)arg1 ;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(AMSBagValue *)appleMusicDeviceOfferDeepLink;
-(AMSBagValue *)iCloudDeviceOfferDeepLink;
-(AMSBagValue *)apsEnabledPatterns;
-(AMSBagValue *)apsSamplingPercent;
-(AMSBagValue *)apsAllowedProductTypes;
-(AMSBagValue *)guidRegexes;
-(AMSBagValue *)guidSchemes;
-(id<AMSMescalBagContract>)mescalContract;
-(AMSBagValue *)storefrontSuffix;
-(AMSBagValue *)TLSSamplingPercentage;
-(AMSBagValue *)TLSSamplingSessionDuration;
-(AMSBagValue *)TFOSamplingPercentage;
-(AMSBagValue *)TFOSamplingSessionDuration;
-(AMSBagValue *)trustedDomains;
-(id<AMSMetricsBagContract>)metricsContract;
-(AMSBagValue *)metricsURL;
-(AMSBagValue *)metricsDictionary;
-(AMSBagValue *)metricsUrl;
-(AMSBagValue *)mescalCertificateURL;
-(AMSBagValue *)mescalSetupURL;
-(AMSBagValue *)mescalSignedActions;
-(AMSBagValue *)mescalSignSapRequests;
-(AMSBagValue *)mescalSignSapResponses;
-(AMSBagValue *)personalizedLookupURL;
-(AMSBagValue *)unpersonalizedLookupURL;
@end

