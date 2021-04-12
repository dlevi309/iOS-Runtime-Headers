/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOSimpleTileRequester.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <libobjc.A.dylib/GEOSimpleTileRequesterSubclass.h>

@class NSString;

@interface GEOVoltaireSimpleTileRequester : GEOSimpleTileRequester <NSURLConnectionDelegate, GEOSimpleTileRequesterSubclass> {

	BOOL _hasUpdatedManifestForHTTP410;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)expiringTilesetsCount;
+(SCD_Struct_GE58*)newExpiringTilesets;
-(unsigned)tileEditionForKey:(const GEOTileKey*)arg1 ;
-(id)activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(id)urlForTileKey:(const GEOTileKey*)arg1 ;
-(id)localizationURLForTileKey:(const GEOTileKey*)arg1 ;
-(void)failedLoadingTileForKey:(GEOTileKey)arg1 baseOperation:(id)arg2 error:(id)arg3 ;
-(BOOL)needsLocalizationForKey:(const GEOTileKey*)arg1 ;
-(int)checksumMethodForIncomingTileDataWithKey:(const GEOTileKey*)arg1 ;
-(BOOL)shouldAllowEmptyDataForTileKey:(const GEOTileKey*)arg1 ;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(id)_localizationURLForTileKey:(const GEOTileKey*)arg1 ;
-(id)_deviceRegionSKUQueryItemForTileSet:(id)arg1 ;
@end

