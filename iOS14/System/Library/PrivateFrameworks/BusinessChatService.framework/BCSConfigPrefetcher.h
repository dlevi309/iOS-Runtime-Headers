/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@protocol BCSConfigCaching, BCSConfigCacheSkipping, BCSFeatureFlagArbitrating, BCSConfigRemoteFetching, BCSUserDefaultsProviding, BCSMetricFactoryProtocol;
@class NSMutableSet;

@interface BCSConfigPrefetcher : NSObject {

	id<BCSConfigCaching> _configCache;
	id<BCSConfigCacheSkipping> _configCacheSkipper;
	id<BCSFeatureFlagArbitrating> _featureFlagArbiter;
	id<BCSConfigRemoteFetching> _chatSuggestConfigRemoteFetcher;
	id<BCSConfigRemoteFetching> _businessLinkConfigRemoteFetcher;
	id<BCSUserDefaultsProviding> _userDefaults;
	id<BCSMetricFactoryProtocol> _metricFactory;
	NSMutableSet* _triggers;

}

@property (nonatomic,retain) id<BCSConfigCaching> configCache;                                         //@synthesize configCache=_configCache - In the implementation block
@property (nonatomic,retain) id<BCSConfigCacheSkipping> configCacheSkipper;                            //@synthesize configCacheSkipper=_configCacheSkipper - In the implementation block
@property (nonatomic,retain) id<BCSFeatureFlagArbitrating> featureFlagArbiter;                         //@synthesize featureFlagArbiter=_featureFlagArbiter - In the implementation block
@property (nonatomic,retain) id<BCSConfigRemoteFetching> chatSuggestConfigRemoteFetcher;               //@synthesize chatSuggestConfigRemoteFetcher=_chatSuggestConfigRemoteFetcher - In the implementation block
@property (nonatomic,retain) id<BCSConfigRemoteFetching> businessLinkConfigRemoteFetcher;              //@synthesize businessLinkConfigRemoteFetcher=_businessLinkConfigRemoteFetcher - In the implementation block
@property (nonatomic,retain) id<BCSUserDefaultsProviding> userDefaults;                                //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) id<BCSMetricFactoryProtocol> metricFactory;                               //@synthesize metricFactory=_metricFactory - In the implementation block
@property (nonatomic,retain) NSMutableSet * triggers;                                                  //@synthesize triggers=_triggers - In the implementation block
-(void)setUserDefaults:(id<BCSUserDefaultsProviding>)arg1 ;
-(id<BCSUserDefaultsProviding>)userDefaults;
-(NSMutableSet *)triggers;
-(void)setTriggers:(NSMutableSet *)arg1 ;
-(id<BCSConfigCaching>)configCache;
-(id<BCSConfigCacheSkipping>)configCacheSkipper;
-(id<BCSMetricFactoryProtocol>)metricFactory;
-(void)setConfigCache:(id<BCSConfigCaching>)arg1 ;
-(void)setConfigCacheSkipper:(id<BCSConfigCacheSkipping>)arg1 ;
-(void)setMetricFactory:(id<BCSMetricFactoryProtocol>)arg1 ;
-(long long)_hoursSinceLastSuccessfulPrefetchForType:(long long)arg1 ;
-(void)_notePrefetchForType:(long long)arg1 finishedSuccessfully:(BOOL)arg2 ;
-(BOOL)_shouldPrefetchType:(long long)arg1 ;
-(void)addPrefetchTrigger:(id)arg1 ;
-(void)setFeatureFlagArbiter:(id<BCSFeatureFlagArbitrating>)arg1 ;
-(void)setChatSuggestConfigRemoteFetcher:(id<BCSConfigRemoteFetching>)arg1 ;
-(void)setBusinessLinkConfigRemoteFetcher:(id<BCSConfigRemoteFetching>)arg1 ;
-(void)_prefetchConfigsIfNecessaryWithXCPActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<BCSConfigRemoteFetching>)chatSuggestConfigRemoteFetcher;
-(id<BCSConfigRemoteFetching>)businessLinkConfigRemoteFetcher;
-(id)initWithConfigCache:(id)arg1 configCacheSkipper:(id)arg2 featureFlagArbiter:(id)arg3 chatSuggestConfigRemoteFetcher:(id)arg4 businessLinkConfigRemoteFetcher:(id)arg5 userDefaults:(id)arg6 metricFactory:(id)arg7 ;
-(id<BCSFeatureFlagArbitrating>)featureFlagArbiter;
@end

