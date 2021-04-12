/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPCModelPlaybackAssetCacheProviding.h>

@class MPMediaLibrary, NSString;

@interface MPCMediaLibraryPlaybackAssetCacheProvider : NSObject <MPCModelPlaybackAssetCacheProviding> {

	MPMediaLibrary* _mediaLibrary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_highQualityCachedAssetDestinationDirectoryForMediaLibrary:(id)arg1 ;
+(id)_lowQualityCachedAssetDestinationDirectoryForMediaLibrary:(id)arg1 ;
+(id)deviceLibraryProviderWithUserIdentity:(id)arg1 ;
-(void)getPlaybackAssetCacheDestinationURL:(id*)arg1 purchaseBundleDestinationURL:(id*)arg2 forGenericObject:(id)arg3 assetQualityType:(long long)arg4 pathExtension:(id)arg5 ;
-(void)setPlaybackAssetCacheFileAsset:(id)arg1 forGenericObject:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)clearPlaybackAssetCacheFileAssetForGenericObject:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_initWithMediaLibrary:(id)arg1 ;
@end

