/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NTPBPrefetchConfig, NSDictionary;

@interface FCPrefetchConfiguration : NSObject {

	NTPBPrefetchConfig* _pbConfig;
	NSDictionary* _configDict;
	BOOL _backgroundFetchEnabled;
	BOOL _shouldPrefetchForYouFeed;
	double _minimumBackgroundFetchInterval;
	unsigned long long _maximumFavoritesFeedsToPrefetch;
	double _prefetchedForYouExpiration;

}

@property (getter=isBackgroundFetchEnabled,nonatomic,readonly) BOOL backgroundFetchEnabled;              //@synthesize backgroundFetchEnabled=_backgroundFetchEnabled - In the implementation block
@property (nonatomic,readonly) double minimumBackgroundFetchInterval;                                    //@synthesize minimumBackgroundFetchInterval=_minimumBackgroundFetchInterval - In the implementation block
@property (nonatomic,readonly) BOOL shouldPrefetchForYouFeed;                                            //@synthesize shouldPrefetchForYouFeed=_shouldPrefetchForYouFeed - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumFavoritesFeedsToPrefetch;                       //@synthesize maximumFavoritesFeedsToPrefetch=_maximumFavoritesFeedsToPrefetch - In the implementation block
@property (nonatomic,readonly) double prefetchedForYouExpiration;                                        //@synthesize prefetchedForYouExpiration=_prefetchedForYouExpiration - In the implementation block
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)initWithPBPrefetchConfig:(id)arg1 ;
-(BOOL)isBackgroundFetchEnabled;
-(unsigned long long)maximumFavoritesFeedsToPrefetch;
-(double)prefetchedForYouExpiration;
-(double)minimumBackgroundFetchInterval;
-(unsigned long long)hash;
-(BOOL)shouldPrefetchForYouFeed;
-(id)initWithDefaults;
-(BOOL)isEqual:(id)arg1 ;
@end

