/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(AMSBagValue *)trustedDomains;
-(id<AMSMetricsBagContract>)metricsContract;
-(id<AMSMescalBagContract>)mescalContract;
-(AMSBagValue *)storefrontSuffix;
-(AMSBagValue *)guidRegexes;
-(AMSBagValue *)TFOSamplingPercentage;
-(AMSBagValue *)TFOSamplingSessionDuration;
-(AMSBagValue *)guidSchemes;
-(AMSBagValue *)metricsURL;
-(AMSBagValue *)apsEnabledPatterns;
-(AMSBagValue *)apsSamplingPercent;
-(AMSBagValue *)TLSSamplingSessionDuration;
-(AMSBagValue *)apsAllowedProductTypes;
-(AMSBagValue *)TLSSamplingPercentage;

@end

