/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEORegionalResourceTileData, GEOResourceManifestConfiguration, GEOResourceLoader;

@interface _GEORegionalResourcesTileLoader : NSObject {

	GEORegionalResourceTileData* _tile;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	GEOResourceLoader* _resourceLoader;
	os_unfair_lock_s _lock;
	GEOTileKey _tileKey;

}

@property (nonatomic,readonly) GEOTileKey* tileKeyPtr; 
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)loadResourcesForTileKey:(const GEOTileKey*)arg1 manifestConfiguration:(id)arg2 auditToken:(id)arg3 signpostID:(unsigned long long)arg4 finished:(/*^block*/id)arg5 error:(/*^block*/id)arg6 ;
-(GEOTileKey*)tileKeyPtr;
@end

