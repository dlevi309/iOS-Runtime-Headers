/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) AMSBagValue * appleMusicDeviceOfferDeepLink; 
@property (nonatomic,readonly) AMSBagValue * iCloudDeviceOfferDeepLink; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AMSBagValue * metricsURL; 
@property (nonatomic,readonly) AMSBagValue * metricsDictionary; 
@property (nonatomic,readonly) AMSBagValue * metricsUrl; 
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
@property (nonatomic,readonly) AMSBagValue * mescalCertificateURL; 
@property (nonatomic,readonly) AMSBagValue * mescalSetupURL; 
@property (nonatomic,readonly) AMSBagValue * mescalPrimingURL; 
@property (nonatomic,readonly) AMSBagValue * mescalSignedActions; 
@property (nonatomic,readonly) AMSBagValue * mescalSignSapRequests; 
@property (nonatomic,readonly) AMSBagValue * mescalSignSapResponses; 
@property (nonatomic,readonly) AMSBagValue * personalizedLookupURL; 
@property (nonatomic,readonly) AMSBagValue * unpersonalizedLookupURL; 
-(AMSBagValue *)trustedDomains;
-(AMSBagValue *)mescalSignSapRequests;
-(AMSBagValue *)mescalSignSapResponses;
-(id<AMSMetricsBagContract>)metricsContract;
-(id<AMSMescalBagContract>)mescalContract;
-(AMSBagValue *)metricsDictionary;
-(AMSBagValue *)storefrontSuffix;
-(id<AMSBagProtocol>)bag;
-(AMSBagValue *)personalizedLookupURL;
-(id)initWithBag:(id)arg1 ;
-(AMSBagValue *)iCloudDeviceOfferDeepLink;
-(AMSBagValue *)guidRegexes;
-(AMSBagValue *)TFOSamplingPercentage;
-(AMSBagValue *)appleMusicDeviceOfferDeepLink;
-(AMSBagValue *)TFOSamplingSessionDuration;
-(AMSBagValue *)guidSchemes;
-(AMSBagValue *)metricsURL;
-(AMSBagValue *)apsEnabledPatterns;
-(AMSBagValue *)apsSamplingPercent;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(AMSBagValue *)metricsUrl;
-(AMSBagValue *)mescalSignedActions;
-(AMSBagValue *)TLSSamplingSessionDuration;
-(AMSBagValue *)unpersonalizedLookupURL;
-(AMSBagValue *)mescalSetupURL;
-(AMSBagValue *)apsAllowedProductTypes;
-(AMSBagValue *)mescalCertificateURL;
-(AMSBagValue *)TLSSamplingPercentage;
@end

