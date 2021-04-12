/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)cancel;
-(id)initWithZoomLevel:(unsigned long long)arg1 tileSize:(int)arg2 tileScale:(int)arg3 tileSetStyle:(int)arg4 tileLoader:(id)arg5 ;
-(id)findTilesAround:(SCD_Struct_GE32)arg1 radius:(double)arg2 allowNetwork:(BOOL)arg3 queue:(id)arg4 handler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)initWithTileLoader:(id)arg1 ;
-(id)findTileWithKey:(GEOTileKey)arg1 allowNetwork:(BOOL)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_findTilesInList:(id)arg1 allowNetwork:(BOOL)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_tileLoaderClientIdentifier;
-(id)initWithZoomLevel:(unsigned long long)arg1 tileSize:(int)arg2 tileScale:(int)arg3 tileSetStyle:(int)arg4 ;
@end

