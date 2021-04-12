/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(CLSPublicEventCache *)cache;
-(double)queryRadius;
-(id)publicEventsByTimeLocationTupleIdentifierForTimeLocationTuples:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)saveEventsForCacheInvalidation:(id)arg1 ;
-(id)loadInvalidationTokensAndInvalidateCachesIfNeeded;
-(void)setQueryRadius:(double)arg1 ;
@end

