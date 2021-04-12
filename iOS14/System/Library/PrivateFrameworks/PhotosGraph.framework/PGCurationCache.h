/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <MediaMiningKit/CLSDBCache.h>

@interface PGCurationCache : CLSDBCache
+(id)defaultCacheName;
-(void)setCuratedAssets:(id)arg1 forMoment:(id)arg2 options:(id)arg3 ;
-(void)_invalidateCacheForEventWithIdentifier:(id)arg1 ;
-(BOOL)isMomentInteresting:(id)arg1 precision:(unsigned long long)arg2 isCached:(BOOL*)arg3 ;
-(id)initAtURL:(id)arg1 ;
-(void)_setProperties:(id)arg1 forCurationObjectWithEntityName:(id)arg2 eventIdentifier:(id)arg3 precision:(unsigned long long)arg4 predicate:(id)arg5 ;
-(id)dataModelName;
-(id)_curatedKeyAssetIdentifierForEventWithIdentifier:(id)arg1 options:(id)arg2 ;
-(id)_fetchCurationObjectForEntityName:(id)arg1 predicate:(id)arg2 ;
-(void)invalidateCacheForMomentIdentifier:(id)arg1 precision:(unsigned long long)arg2 ;
-(id)_curatedAssetIdentifiersForEventWithIdentifier:(id)arg1 options:(id)arg2 ;
-(void)invalidateCacheForMomentIdentifier:(id)arg1 ;
-(void)setCuratedKeyAsset:(id)arg1 forMoment:(id)arg2 options:(id)arg3 ;
-(void)invalidateCacheForEventIdentifiers:(id)arg1 ;
-(void)_invalidateCacheForEventsWithIdentifiers:(id)arg1 ;
-(void)setMomentInteresting:(BOOL)arg1 forMoment:(id)arg2 precision:(unsigned long long)arg3 ;
-(BOOL)isMomentInteresting:(id)arg1 withAlternateJunking:(BOOL)arg2 precision:(unsigned long long)arg3 isCached:(BOOL*)arg4 ;
-(id)curatedAssetIdentifiersForCollectionWithIdentifier:(id)arg1 options:(id)arg2 ;
-(double)contentScoreForMoment:(id)arg1 precision:(unsigned long long)arg2 isCached:(BOOL*)arg3 ;
-(id)curatedKeyAssetIdentifierForMoment:(id)arg1 options:(id)arg2 ;
-(BOOL)_isMomentLocalIdentifierInteresting:(id)arg1 withAlternateJunking:(BOOL)arg2 precision:(unsigned long long)arg3 isCached:(BOOL*)arg4 ;
-(void)setMomentInteresting:(BOOL)arg1 withAlternateJunking:(BOOL)arg2 forMoment:(id)arg3 precision:(unsigned long long)arg4 ;
-(void)setMeanContentScore:(double)arg1 forMoment:(id)arg2 precision:(unsigned long long)arg3 ;
-(void)_setCuratedAssets:(id)arg1 forEventWithIdentifier:(id)arg2 options:(id)arg3 ;
-(void)setCuratedKeyAsset:(id)arg1 forCollectionWithIdentifier:(id)arg2 options:(id)arg3 ;
-(id)curatedKeyAssetIdentifierForCollectionWithIdentifier:(id)arg1 options:(id)arg2 ;
-(void)setCuratedAssets:(id)arg1 forCollectionWithIdentifier:(id)arg2 options:(id)arg3 ;
-(void)_setCuratedKeyAsset:(id)arg1 forEventWithIdentifier:(id)arg2 options:(id)arg3 ;
-(id)curatedAssetIdentifiersForMoment:(id)arg1 options:(id)arg2 ;
-(void)invalidateCacheForCollectionWithIdentifier:(id)arg1 ;
-(double)contentScoreForMomentLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 isCached:(BOOL*)arg3 ;
-(void)_invalidateCacheForEventWithIdentifier:(id)arg1 precision:(unsigned long long)arg2 ;
-(void)setContentScore:(double)arg1 forMoment:(id)arg2 precision:(unsigned long long)arg3 ;
@end

