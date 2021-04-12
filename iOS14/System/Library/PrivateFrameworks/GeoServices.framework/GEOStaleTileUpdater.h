/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOBatchOpportunisticTileDownloader.h>

@class GEOTileDB, GEOResourceManifestManager, GEOTileKeyList, GEOTileKeyMap;

@interface GEOStaleTileUpdater : GEOBatchOpportunisticTileDownloader {

	GEOTileDB* _diskCache;
	GEOResourceManifestManager* _manifestManager;
	GEOTileKeyList* _keysRemaining;
	unsigned long long _numberOfTilesOriginallyConsidered;
	GEOTileKeyMap* _cacheMissType;
	unsigned long long _batchSize;

}
+(unsigned char)_reason;
-(unsigned long long)numberOfTilesConsidered;
-(id)initWithDiskCache:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 manifestManager:(id)arg4 tileRequesterCreationBlock:(/*^block*/id)arg5 ;
-(void)_determineStaleKeysToUpdate;
-(void)determineNextBatchWithQueue:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)_addMoreKeysToListIfNeeded:(id)arg1 staleCachedETags:(id)arg2 staleCachedData:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)downloadDidSucceedForTile:(GEOTileKey*)arg1 downloadSize:(unsigned long long)arg2 httpStatus:(unsigned)arg3 ;
-(void)downloadDidFailForTile:(GEOTileKey*)arg1 error:(id)arg2 ;
-(BOOL)cancelKey:(const GEOTileKey*)arg1 ;
@end

