/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSDBCache.h>

@class NSPredicate;

@interface CLSBusinessCategoryCache : CLSDBCache {

	NSPredicate* _predicateEntryWithUpdateTimestamp;

}

@property (nonatomic,readonly) NSPredicate * predicateEntryWithUpdateTimestamp;              //@synthesize predicateEntryWithUpdateTimestamp=_predicateEntryWithUpdateTimestamp - In the implementation block
-(BOOL)hasRegion:(id)arg1 ;
-(void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1 ;
-(id)dataModelName;
-(id)businessItemsForRegion:(id)arg1 ;
-(id)initWithDiskCacheName:(id)arg1 ;
-(void)invalidateCacheForGeoServiceProviderChangeToProvider:(id)arg1 ;
-(id)businessItemsInRegion:(id)arg1 categories:(id)arg2 maximumDistance:(double)arg3 ;
-(id)updateBusinessItems:(id)arg1 ;
-(id)predicateForEntryNearbyRegion:(id)arg1 ;
-(id)predicateForRegion:(id)arg1 ;
-(id)_fetchedBusinessItemByMUIDForBusinessItems:(id)arg1 ;
-(void)insertBatchesOfBusinessItems:(id)arg1 forRegions:(id)arg2 ;
-(id)nearestItemForRegion:(id)arg1 inItems:(id)arg2 ;
-(id)_businessItemInRegion:(id)arg1 matchingCategories:(id)arg2 maximumDistance:(double)arg3 forBusinessItems:(id)arg4 ;
-(id)businessItemsForMuid:(unsigned long long)arg1 ;
-(id)businessItemsForMuids:(id)arg1 ;
-(id)businessItemFromManagedObject:(id)arg1 ;
-(unsigned long long)numberOfBusinessItemsForRegion:(id)arg1 ;
-(id)_fetchBusinessItemsForMUIDs:(id)arg1 ;
-(void)_updateManagedBusinessItem:(id)arg1 withBusinessItem:(id)arg2 ;
-(NSPredicate *)predicateEntryWithUpdateTimestamp;
@end

