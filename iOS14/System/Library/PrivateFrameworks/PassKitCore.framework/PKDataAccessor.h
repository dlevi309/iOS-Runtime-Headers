/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSData, NSBundle, PKRemoteAssetManager;

@interface PKDataAccessor : NSObject

@property (nonatomic,readonly) NSData * manifestHash; 
@property (nonatomic,readonly) NSData * archiveData; 
@property (nonatomic,readonly) NSData * serializedFileWrapper; 
@property (nonatomic,readonly) NSBundle * bundle; 
@property (nonatomic,readonly) PKRemoteAssetManager * remoteAssetManager; 
@property (nonatomic,readonly) BOOL remoteAssetsDownloaded; 
-(NSBundle *)bundle;
-(id)content;
-(void)updateSettings:(unsigned long long)arg1 ;
-(id)dictionary;
-(void)downloadRemoteAssetsWithCloudStoreCoordinatorDelegate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)noteShared;
-(void)requestUpdateWithCompletion:(/*^block*/id)arg1 ;
-(id)cachedImageSetForType:(long long)arg1 withDisplayProfile:(id)arg2 displayTraits:(id)arg3 ;
-(id)imageSetForType:(long long)arg1 displayProfile:(id)arg2 preheat:(BOOL)arg3 ;
-(void)imageSetForType:(long long)arg1 displayProfile:(id)arg2 preheat:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(BOOL)remoteAssetsDownloaded;
-(BOOL)remoteAssetsDownloadedForScreenScale:(double)arg1 suffix:(id)arg2 ;
-(void)downloadRemoteAssetsWithCompletion:(/*^block*/id)arg1 ;
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)passLocalizedStringForKey:(id)arg1 ;
-(NSData *)archiveData;
-(id)remoteAssetManagerForSEIDs:(id)arg1 ;
-(id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 ;
-(id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 ;
-(NSData *)manifestHash;
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)revocationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)dictionaryWithCompletion:(/*^block*/id)arg1 ;
-(void)contentWithCompletion:(/*^block*/id)arg1 ;
-(void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)resourceValueForKey:(id)arg1 ;
-(PKRemoteAssetManager *)remoteAssetManager;
-(id)dataForBundleResource:(id)arg1 ;
-(id)dataForBundleResources:(id)arg1 ;
-(NSData *)serializedFileWrapper;
-(BOOL)remoteAssetsDownloadedForSEIDs:(id)arg1 ;
-(id)displayProfileOfType:(long long)arg1 ;
@end

