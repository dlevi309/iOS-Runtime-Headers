/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)cacheRoot;
-(id)assetsDirectoryURL;
-(id)assetFileName:(id)arg1 ;
-(id)manifestFileName:(id)arg1 ;
-(id)manifestFileURL:(id)arg1 ;
-(id)validatePath:(id)arg1 ;
-(id)assetFileURL:(id)arg1 ;
-(id)allCachedManifests;
-(id)loadCurrentCachedManifest;
@end

