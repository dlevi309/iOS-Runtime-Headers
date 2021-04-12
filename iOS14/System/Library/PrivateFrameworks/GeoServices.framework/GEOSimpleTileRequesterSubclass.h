/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOSimpleTileRequesterSubclass
@optional
-(BOOL)shouldAllowEmptyDataForTileKey:(const GEOTileKey*)arg1;
-(id)localizationURLForTileKey:(const GEOTileKey*)arg1;
-(void)failedLoadingTileForKey:(GEOTileKey)arg1 baseOperation:(id)arg2 error:(id)arg3;
-(id)processTileData:(id)arg1 forKey:(const GEOTileKey*)arg2 error:(id*)arg3;
-(BOOL)tileDataIsCacheableForTileKey:(const GEOTileKey*)arg1;
-(BOOL)needsLocalizationForKey:(const GEOTileKey*)arg1;
-(void)finishedLoadingTileForKey:(GEOTileKey)arg1 baseOperation:(id)arg2;
-(id)newXPCDataRequestForTileKey:(const GEOTileKey*)arg1;
-(id)mergeBaseTileEtag:(id)arg1 withLocalizationTileEtag:(id)arg2;
-(id)mergeBaseTile:(id)arg1 withLocalizationTile:(id)arg2;
-(SCD_Struct_GE4*)kindForTileKey:(const GEOTileKey*)arg1;
-(BOOL)downloadsDataToDisk;
-(id)editionHeader;
-(unsigned)tileEditionForKey:(const GEOTileKey*)arg1;
-(int)checksumMethodForIncomingTileDataWithKey:(const GEOTileKey*)arg1;

@required
-(id)urlForTileKey:(const GEOTileKey*)arg1;

@end

