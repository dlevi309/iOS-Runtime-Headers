/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class CLSPublicEventCache;

@interface CLSPublicEventManager : NSObject {

	CLSPublicEventCache* _cache;
	double _queryRadius;

}

@property (nonatomic,readonly) CLSPublicEventCache * cache;              //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic) double queryRadius;                         //@synthesize queryRadius=_queryRadius - In the implementation block
+(id)urlForEventsForCacheInvalidation;
-(void)saveEventsForCacheInvalidation:(id)arg1 ;
-(CLSPublicEventCache *)cache;
-(id)init;
-(double)queryRadius;
-(void)setQueryRadius:(double)arg1 ;
-(id)publicEventsByTimeLocationTupleIdentifierForTimeLocationTuples:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)loadInvalidationTokensAndInvalidateCachesIfNeeded;
@end

