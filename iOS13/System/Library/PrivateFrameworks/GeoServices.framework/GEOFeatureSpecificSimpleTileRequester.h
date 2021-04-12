/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOVoltaireSimpleTileRequester.h>

@interface GEOFeatureSpecificSimpleTileRequester : GEOVoltaireSimpleTileRequester
+(unsigned char)tileProviderIdentifier;
-(id)activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(SCD_Struct_GE94)kindForTileKey:(const GEOTileKey*)arg1 ;
-(id)urlForTileKey:(const GEOTileKey*)arg1 ;
-(BOOL)tileDataIsCacheableForTileKey:(const GEOTileKey*)arg1 ;
-(id)_localizationURLForTileKey:(const GEOTileKey*)arg1 ;
-(GEOTileKey)_regularTileKeyForTransitLineSelectionTileKey:(const GEOTileKey*)arg1 muid:(unsigned long long*)arg2 ;
@end

