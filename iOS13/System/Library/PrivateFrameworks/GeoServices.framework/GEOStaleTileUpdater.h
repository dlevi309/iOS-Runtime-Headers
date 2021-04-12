/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)cancelKey:(const GEOTileKey*)arg1 ;
-(id)initWithDiskCache:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 manifestManager:(id)arg4 tileRequesterCreationBlock:(/*^block*/id)arg5 ;
-(unsigned long long)numberOfTilesConsidered;
-(void)_determineStaleKeysToUpdate;
-(void)_addMoreKeysToListIfNeeded:(id)arg1 staleCachedETags:(id)arg2 staleCachedData:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)determineNextBatchWithQueue:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)downloadDidSucceedForTile:(GEOTileKey*)arg1 downloadSize:(unsigned long long)arg2 httpStatus:(unsigned)arg3 ;
-(void)downloadDidFailForTile:(GEOTileKey*)arg1 error:(id)arg2 ;
@end

