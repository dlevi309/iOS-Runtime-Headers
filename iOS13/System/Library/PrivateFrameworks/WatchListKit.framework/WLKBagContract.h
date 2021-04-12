/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <libobjc.A.dylib/AMSMetricsBagContract.h>
#import <libobjc.A.dylib/AMSMescalBagContract.h>

@class AMSBagValue, AMSBag, NSString;

@interface WLKBagContract : NSObject <AMSMetricsBagContract, AMSMescalBagContract> {

	AMSBag* _bag;

}

@property (nonatomic,retain) AMSBag * bag;                                             //@synthesize bag=_bag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
+(id)defaultContract;
-(id)init;
-(AMSBag *)bag;
-(void)setBag:(AMSBag *)arg1 ;
-(id<AMSMescalBagContract>)mescalContract;
-(AMSBagValue *)trustedDomains;
-(id<AMSMetricsBagContract>)metricsContract;
-(AMSBagValue *)metricsURL;
-(AMSBagValue *)metricsDictionary;
-(AMSBagValue *)mescalCertificateURL;
-(AMSBagValue *)mescalSetupURL;
-(AMSBagValue *)mescalSignedActions;
-(AMSBagValue *)mescalSignSapRequests;
-(AMSBagValue *)mescalSignSapResponses;
@end

