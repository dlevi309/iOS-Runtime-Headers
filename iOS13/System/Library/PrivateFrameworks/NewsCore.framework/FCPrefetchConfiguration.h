/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDefaults;
-(id)initWithConfigDictionary:(id)arg1 ;
-(double)prefetchedForYouExpiration;
-(id)initWithPBPrefetchConfig:(id)arg1 ;
-(BOOL)isBackgroundFetchEnabled;
-(double)minimumBackgroundFetchInterval;
-(BOOL)shouldPrefetchForYouFeed;
-(unsigned long long)maximumFavoritesFeedsToPrefetch;
@end

