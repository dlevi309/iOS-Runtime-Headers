/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOSimpleTileRequester.h>

@interface GEOGloriaQuadIDTileRequester : GEOSimpleTileRequester
+(id)locationSensitiveTilesets;
+(unsigned long long)expiringTilesetsCount;
+(SCD_Struct_GE55*)newExpiringTilesets;
+(unsigned char)tileProviderIdentifier;
+(id)_supportedExpiringStyles;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(id)activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(id)urlForTileKey:(const GEOTileKey*)arg1 ;
-(id)processTileData:(id)arg1 forKey:(const GEOTileKey*)arg2 error:(id*)arg3 ;
-(BOOL)downloadsDataToDisk;
-(unsigned)tileEditionForKey:(const GEOTileKey*)arg1 ;
@end

