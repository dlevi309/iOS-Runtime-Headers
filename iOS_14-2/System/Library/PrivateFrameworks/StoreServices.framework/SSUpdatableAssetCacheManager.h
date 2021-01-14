/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSString;

@interface SSUpdatableAssetCacheManager : NSObject {

	NSString* _clientIdentifier;

}
-(id)initWithClientIdentifier:(id)arg1 ;
-(id)manifestsDirectoryURL;
-(id)currentManifestFileURL;
-(BOOL)setCacheURLsOnManifestAndAssets:(id)arg1 error:(id*)arg2 ;
-(id)assetsDirectoryURL;
-(id)assetFileName:(id)arg1 ;
-(id)manifestFileName:(id)arg1 ;
-(id)validatePath:(id)arg1 ;
-(id)manifestFileURL:(id)arg1 ;
-(id)assetFileURL:(id)arg1 ;
-(id)allCachedManifests;
-(id)loadCurrentCachedManifest;
-(id)cacheRoot;
@end

