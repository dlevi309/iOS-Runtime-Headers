/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>
#import <libobjc.A.dylib/FCAVAssetResourceLoaderType.h>

@class FCAssetManager, FCThreadSafeMutableSet, NSString;

@interface FCAVAssetResourceLoader : NSObject <AVAssetResourceLoaderDelegate, FCAVAssetResourceLoaderType> {

	FCAssetManager* _assetManager;
	FCThreadSafeMutableSet* _whitelistedMasterPlaylistURLs;

}

@property (nonatomic,readonly) FCAssetManager * assetManager;                                       //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,readonly) FCThreadSafeMutableSet * whitelistedMasterPlaylistURLs;              //@synthesize whitelistedMasterPlaylistURLs=_whitelistedMasterPlaylistURLs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)prefetchMasterPlaylistForAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithCacheDirectory:(id)arg1 ;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(BOOL)_isHLSURL:(id)arg1 ;
-(FCThreadSafeMutableSet *)whitelistedMasterPlaylistURLs;
-(FCAssetManager *)assetManager;
-(void)registerAVURLAssetForAutomaticResourceManagement:(id)arg1 ;
@end

