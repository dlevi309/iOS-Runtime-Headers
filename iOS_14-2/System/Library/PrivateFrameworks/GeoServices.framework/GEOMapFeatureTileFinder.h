/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSString, GEOTileLoader;

@interface GEOMapFeatureTileFinder : NSObject {

	unsigned long long _zoomLevel;
	int _tileSize;
	int _tileScale;
	int _tileSetStyle;
	NSString* _tileLoaderClientIdentifier;
	GEOTileLoader* _tileLoader;

}
-(id)initWithTileLoader:(id)arg1 ;
-(id)initWithZoomLevel:(unsigned long long)arg1 tileSize:(int)arg2 tileScale:(int)arg3 tileSetStyle:(int)arg4 tileLoader:(id)arg5 ;
-(id)findTilesAround:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 allowNetwork:(BOOL)arg3 queue:(id)arg4 handler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)_findTilesInList:(id)arg1 allowNetwork:(BOOL)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_tileLoaderClientIdentifier;
-(id)initWithZoomLevel:(unsigned long long)arg1 tileSize:(int)arg2 tileScale:(int)arg3 tileSetStyle:(int)arg4 ;
-(id)findTileWithKey:(GEOTileKey)arg1 allowNetwork:(BOOL)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)cancel;
@end

