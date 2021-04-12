/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOSimpleTileRequester.h>
#import <libobjc.A.dylib/GEOSimpleTileRequesterSubclass.h>

@interface GEOVoltaireSimple3DTileRequester : GEOSimpleTileRequester <GEOSimpleTileRequesterSubclass>
+(unsigned char)tileProviderIdentifier;
-(unsigned)tileEditionForKey:(const GEOTileKey*)arg1 ;
-(id)activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(SCD_Struct_GE94)kindForTileKey:(const GEOTileKey*)arg1 ;
-(id)urlForTileKey:(const GEOTileKey*)arg1 ;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
@end

