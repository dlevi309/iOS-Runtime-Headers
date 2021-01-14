/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOVoltaireSimpleTileRequester.h>

@interface GEOFeatureSpecificSimpleTileRequester : GEOVoltaireSimpleTileRequester
+(unsigned char)tileProviderIdentifier;
-(id)activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(id)urlForTileKey:(const GEOTileKey*)arg1 ;
-(GEOTileKey)_regularTileKeyForTransitLineSelectionTileKey:(const GEOTileKey*)arg1 muid:(unsigned long long*)arg2 ;
-(BOOL)tileDataIsCacheableForTileKey:(const GEOTileKey*)arg1 ;
-(id)_localizationURLForTileKey:(const GEOTileKey*)arg1 ;
-(SCD_Struct_GE91)kindForTileKey:(const GEOTileKey*)arg1 ;
@end

