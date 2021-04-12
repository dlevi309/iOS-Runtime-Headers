/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class CLSPublicEventCache;

@interface CLSPublicEventCacheCreator : NSObject {

	BOOL _simulatesTimeout;
	CLSPublicEventCache* _cache;
	unsigned long long _maximumBatchSize;
	double _queryRadius;

}

@property (nonatomic,readonly) CLSPublicEventCache * cache;                      //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) double queryRadius;                               //@synthesize queryRadius=_queryRadius - In the implementation block
@property (assign,nonatomic) BOOL simulatesTimeout;                              //@synthesize simulatesTimeout=_simulatesTimeout - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumBatchSize;              //@synthesize maximumBatchSize=_maximumBatchSize - In the implementation block
-(CLSPublicEventCache *)cache;
-(unsigned long long)maximumBatchSize;
-(id)initWithCache:(id)arg1 queryRadius:(double)arg2 ;
-(id)createCacheForTimeLocationTuples:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_queryEventsForTimeLocationTuples:(id)arg1 invalidationTokens:(out id*)arg2 progressBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
-(double)queryRadius;
-(BOOL)simulatesTimeout;
-(void)setSimulatesTimeout:(BOOL)arg1 ;
@end

