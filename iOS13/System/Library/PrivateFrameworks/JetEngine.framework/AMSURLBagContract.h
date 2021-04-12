/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine
*/

@class AMSBagValue;


@protocol AMSURLBagContract <NSObject>
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
@optional
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

@end

