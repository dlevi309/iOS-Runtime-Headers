/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileRequester.h>
#import <libobjc.A.dylib/GEOTileRequesterDelegate.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@class NSTimer, GEOVoltaireSimpleTileRequester, NSString;

@interface GEOVoltaireTileRequester : GEOTileRequester <GEOTileRequesterDelegate, GEOResourceManifestTileGroupObserver> {

	NSTimer* _activeTileGroupTimeoutTimer;
	GEOVoltaireSimpleTileRequester* _simpleRequester;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)expiringTilesetsCount;
+(SCD_Struct_GE55*)newExpiringTilesets;
+(unsigned char)tileProviderIdentifier;
+(Class)simpleRequesterClass;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(id)activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned)arg3 tileSetDB:(unsigned)arg4 tileSet:(id)arg5 etag:(id)arg6 forKey:(GEOTileKey)arg7 userInfo:(id)arg8 ;
-(void)start;
-(void)tileRequesterFinished:(id)arg1 ;
-(void)_failedToReceiveActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)cleanup;
-(void)_startWithTileKeys:(id)arg1 ;
-(void)tileRequester:(id)arg1 receivedError:(id)arg2 forKey:(GEOTileKey)arg3 ;
-(void)cancelKey:(const GEOTileKey*)arg1 ;
-(void)cancel;
-(void)reprioritizeKey:(const GEOTileKey*)arg1 newPriority:(unsigned)arg2 ;
-(void)dealloc;
@end

