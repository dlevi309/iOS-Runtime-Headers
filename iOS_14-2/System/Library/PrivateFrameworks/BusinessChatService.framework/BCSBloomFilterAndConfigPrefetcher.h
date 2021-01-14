/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


@protocol BCSConfigCaching, BCSShardCacheQueryable, BCSShardCacheSkipping, BCSBloomFilterAndConfigRemoteFetching, BCSPrefetchTrigger, BCSShardItemInstantiating, BCSFeatureFlagArbitrating, BCSUserDefaultsProviding, BCSMetricFactoryProtocol;
@class NSMutableSet;

@interface BCSBloomFilterAndConfigPrefetcher : NSObject {

	id<BCSConfigCaching> _configCache;
	id<BCSShardCacheQueryable> _shardCache;
	id<BCSShardCacheSkipping> _shardCacheSkipper;
	id<BCSBloomFilterAndConfigRemoteFetching> _bloomFilterAndConfigRemoteFetch;
	id<BCSPrefetchTrigger> _prefetchTrigger;
	id<BCSShardItemInstantiating> _shardInstantiator;
	id<BCSFeatureFlagArbitrating> _featureFlagAribiter;
	id<BCSUserDefaultsProviding> _userDefaults;
	id<BCSMetricFactoryProtocol> _metricFactory;
	NSMutableSet* _triggers;

}

@property (nonatomic,retain) id<BCSConfigCaching> configCache;                                                       //@synthesize configCache=_configCache - In the implementation block
@property (nonatomic,retain) id<BCSShardCacheQueryable> shardCache;                                                  //@synthesize shardCache=_shardCache - In the implementation block
@property (nonatomic,retain) id<BCSShardCacheSkipping> shardCacheSkipper;                                            //@synthesize shardCacheSkipper=_shardCacheSkipper - In the implementation block
@property (nonatomic,retain) id<BCSBloomFilterAndConfigRemoteFetching> bloomFilterAndConfigRemoteFetch;              //@synthesize bloomFilterAndConfigRemoteFetch=_bloomFilterAndConfigRemoteFetch - In the implementation block
@property (nonatomic,retain) id<BCSPrefetchTrigger> prefetchTrigger;                                                 //@synthesize prefetchTrigger=_prefetchTrigger - In the implementation block
@property (nonatomic,retain) id<BCSShardItemInstantiating> shardInstantiator;                                        //@synthesize shardInstantiator=_shardInstantiator - In the implementation block
@property (nonatomic,retain) id<BCSFeatureFlagArbitrating> featureFlagAribiter;                                      //@synthesize featureFlagAribiter=_featureFlagAribiter - In the implementation block
@property (nonatomic,retain) id<BCSUserDefaultsProviding> userDefaults;                                              //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) id<BCSMetricFactoryProtocol> metricFactory;                                             //@synthesize metricFactory=_metricFactory - In the implementation block
@property (nonatomic,retain) NSMutableSet * triggers;                                                                //@synthesize triggers=_triggers - In the implementation block
-(void)setUserDefaults:(id<BCSUserDefaultsProviding>)arg1 ;
-(id<BCSUserDefaultsProviding>)userDefaults;
-(NSMutableSet *)triggers;
-(void)setTriggers:(NSMutableSet *)arg1 ;
-(id<BCSConfigCaching>)configCache;
-(id<BCSMetricFactoryProtocol>)metricFactory;
-(void)setConfigCache:(id<BCSConfigCaching>)arg1 ;
-(void)setMetricFactory:(id<BCSMetricFactoryProtocol>)arg1 ;
-(void)setShardCache:(id<BCSShardCacheQueryable>)arg1 ;
-(void)setShardCacheSkipper:(id<BCSShardCacheSkipping>)arg1 ;
-(void)setBloomFilterAndConfigRemoteFetch:(id<BCSBloomFilterAndConfigRemoteFetching>)arg1 ;
-(void)setShardInstantiator:(id<BCSShardItemInstantiating>)arg1 ;
-(void)setFeatureFlagAribiter:(id<BCSFeatureFlagArbitrating>)arg1 ;
-(void)_prefetchBloomFilterAndConfigIfNecessaryWithXPCActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)_hoursSinceLastSuccessfulPrefetchForType:(long long)arg1 ;
-(void)_notePrefetchForType:(long long)arg1 finishedSuccessfully:(BOOL)arg2 ;
-(id<BCSBloomFilterAndConfigRemoteFetching>)bloomFilterAndConfigRemoteFetch;
-(id<BCSShardCacheQueryable>)shardCache;
-(id<BCSShardItemInstantiating>)shardInstantiator;
-(BOOL)_shouldPrefetchType:(long long)arg1 ;
-(id<BCSFeatureFlagArbitrating>)featureFlagAribiter;
-(id<BCSShardCacheSkipping>)shardCacheSkipper;
-(id)initWithConfigCache:(id)arg1 shardCache:(id)arg2 shardCacheSkipper:(id)arg3 shardInstantiator:(id)arg4 featureFlagArbiter:(id)arg5 businessLinkRemoteFetcher:(id)arg6 userDefaults:(id)arg7 metricFactory:(id)arg8 ;
-(void)addPrefetchTrigger:(id)arg1 ;
-(id<BCSPrefetchTrigger>)prefetchTrigger;
-(void)setPrefetchTrigger:(id<BCSPrefetchTrigger>)arg1 ;
@end

