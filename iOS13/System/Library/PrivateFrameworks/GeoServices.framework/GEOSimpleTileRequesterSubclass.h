/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOSimpleTileRequesterSubclass
@optional
-(unsigned)tileEditionForKey:(const GEOTileKey*)arg1;
-(id)editionHeader;
-(BOOL)downloadsDataToDisk;
-(SCD_Struct_GE5*)kindForTileKey:(const GEOTileKey*)arg1;
-(id)localizationURLForTileKey:(const GEOTileKey*)arg1;
-(BOOL)allowsCookies;
-(void)finishedLoadingTileForKey:(GEOTileKey)arg1 baseOperation:(id)arg2;
-(void)failedLoadingTileForKey:(GEOTileKey)arg1 baseOperation:(id)arg2 error:(id)arg3;
-(BOOL)needsLocalizationForKey:(const GEOTileKey*)arg1;
-(id)newXPCDataRequestForTileKey:(const GEOTileKey*)arg1;
-(BOOL)tileDataIsCacheableForTileKey:(const GEOTileKey*)arg1;
-(id)mergeBaseTileEtag:(id)arg1 withLocalizationTileEtag:(id)arg2;
-(id)mergeBaseTile:(id)arg1 withLocalizationTile:(id)arg2;
-(int)checksumMethodForIncomingTileDataWithKey:(const GEOTileKey*)arg1;
-(BOOL)shouldAllowEmptyDataForTileKey:(const GEOTileKey*)arg1;
-(id)processTileData:(id)arg1 error:(id*)arg2;

@required
-(id)urlForTileKey:(const GEOTileKey*)arg1;

@end

