/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTObject.h>
#import <libobjc.A.dylib/AMSMetricsBagContract.h>
#import <libobjc.A.dylib/MTEventRecorderDelegate.h>

@class AMSBagValue, NSString, NSDictionary, AMSBag, AMSMetrics;

@interface MTEventRecorderAMSMetricsDelegate : MTObject <AMSMetricsBagContract, MTEventRecorderDelegate> {

	BOOL _monitorsLifecycleEvents;
	BOOL _personalizedWithItunesAccount;
	NSString* _containerId;
	NSDictionary* _lastMetricsDictionary;
	AMSBag* _amsBag;
	AMSMetrics* _bagBasedAMSMetrics;
	AMSMetrics* _contractBasedAMSMetrics;
	AMSMetrics* _backgroundAMSMetrics;

}

@property (nonatomic,retain) NSString * containerId;                                   //@synthesize containerId=_containerId - In the implementation block
@property (nonatomic,retain) NSDictionary * lastMetricsDictionary;                     //@synthesize lastMetricsDictionary=_lastMetricsDictionary - In the implementation block
@property (nonatomic,retain) AMSBag * amsBag;                                          //@synthesize amsBag=_amsBag - In the implementation block
@property (nonatomic,retain) AMSMetrics * bagBasedAMSMetrics;                          //@synthesize bagBasedAMSMetrics=_bagBasedAMSMetrics - In the implementation block
@property (nonatomic,retain) AMSMetrics * contractBasedAMSMetrics;                     //@synthesize contractBasedAMSMetrics=_contractBasedAMSMetrics - In the implementation block
@property (nonatomic,retain) AMSMetrics * backgroundAMSMetrics;                        //@synthesize backgroundAMSMetrics=_backgroundAMSMetrics - In the implementation block
@property (assign,nonatomic) BOOL monitorsLifecycleEvents;                             //@synthesize monitorsLifecycleEvents=_monitorsLifecycleEvents - In the implementation block
@property (assign,nonatomic) BOOL personalizedWithItunesAccount;                       //@synthesize personalizedWithItunesAccount=_personalizedWithItunesAccount - In the implementation block
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
+(id)bundleIdentifier;
+(id)amsMetricsObjectCache;
-(NSString *)containerId;
-(id<AMSMescalBagContract>)mescalContract;
-(AMSBagValue *)trustedDomains;
-(AMSBagValue *)metricsDictionary;
-(BOOL)monitorsLifecycleEvents;
-(void)setMonitorsLifecycleEvents:(BOOL)arg1 ;
-(id)initWithContainerId:(id)arg1 ;
-(void)setContainerId:(NSString *)arg1 ;
-(id)flushUnreportedEvents;
-(void)setAmsBag:(AMSBag *)arg1 ;
-(id)initWithContainerId:(id)arg1 amsBag:(id)arg2 ;
-(AMSBag *)amsBag;
-(void)setLastMetricsDictionary:(NSDictionary *)arg1 ;
-(AMSMetrics *)bagBasedAMSMetrics;
-(AMSMetrics *)contractBasedAMSMetrics;
-(id)prepareMetrics;
-(BOOL)personalizedWithItunesAccount;
-(id)lookupItunesAccount:(id)arg1 ;
-(id)activeItunesAccount;
-(BOOL)shouldFlushBackgroundMetrics;
-(AMSMetrics *)backgroundAMSMetrics;
-(NSDictionary *)lastMetricsDictionary;
-(id)recordEvent:(id)arg1 toTopic:(id)arg2 ;
-(id)sendMethod;
-(id)initWithContainerId:(id)arg1 profileName:(id)arg2 profileVersion:(id)arg3 ;
-(void)setPersonalizedWithItunesAccount:(BOOL)arg1 ;
-(void)setBagBasedAMSMetrics:(AMSMetrics *)arg1 ;
-(void)setContractBasedAMSMetrics:(AMSMetrics *)arg1 ;
-(void)setBackgroundAMSMetrics:(AMSMetrics *)arg1 ;
@end

