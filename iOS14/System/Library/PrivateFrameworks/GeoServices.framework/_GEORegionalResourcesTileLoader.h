/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)loadResourcesForTileKey:(const GEOTileKey*)arg1 manifestConfiguration:(id)arg2 auditToken:(id)arg3 signpostID:(unsigned long long)arg4 finished:(/*^block*/id)arg5 error:(/*^block*/id)arg6 ;
-(GEOTileKey*)tileKeyPtr;
-(void)cancel;
-(void)dealloc;
@end

