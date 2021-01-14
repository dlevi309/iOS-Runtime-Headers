/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOSimpleTileRequester.h>
#import <libobjc.A.dylib/GEOSimpleTileRequesterSubclass.h>

@interface GEOVoltaireSimple3DTileRequester : GEOSimpleTileRequester <GEOSimpleTileRequesterSubclass>
+(unsigned char)tileProviderIdentifier;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(id)activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(id)urlForTileKey:(const GEOTileKey*)arg1 ;
-(SCD_Struct_GE91)kindForTileKey:(const GEOTileKey*)arg1 ;
-(unsigned)tileEditionForKey:(const GEOTileKey*)arg1 ;
@end

