/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSCache, NSURL;

@interface PLPhotoKitVariationCache : NSObject {

	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSCache* _memoryCache;
	NSURL* _cacheURL;

}

@property (readonly) NSURL * cacheURL;              //@synthesize cacheURL=_cacheURL - In the implementation block
-(id)initWithCacheURL:(id)arg1 ;
-(void)saveAnalysisResult:(id)arg1 assetIdentifier:(id)arg2 ;
-(void)saveAnalysisResult:(id)arg1 assetIdentifier:(id)arg2 sourceType:(long long)arg3 ;
-(id)analysisResultForAssetIdentifier:(id)arg1 ;
-(unsigned long long)evictIfNeeded;
-(id)analysisResultForAssetIdentifier:(id)arg1 sourceType:(long long)arg2 ;
-(void)savePortraitEffectSettings:(id)arg1 sourceType:(long long)arg2 assetIdentifier:(id)arg3 ;
-(void)savePortraitEffectSettings:(id)arg1 assetIdentifier:(id)arg2 ;
-(id)portraitEffectSettingsForAssetIdentifier:(id)arg1 ;
-(id)portraitEffectSettingsForAssetIdentifier:(id)arg1 sourceType:(long long)arg2 ;
-(void)saveGatingResult:(id)arg1 forVariationType:(long long)arg2 assetIdentifier:(id)arg3 sourceType:(long long)arg4 ;
-(void)saveGatingResult:(id)arg1 forVariationType:(long long)arg2 assetIdentifier:(id)arg3 ;
-(BOOL)_writeInfo:(id)arg1 atURL:(id)arg2 ;
-(id)gatingResultForVariationType:(long long)arg1 assetIdentifier:(id)arg2 sourceType:(long long)arg3 ;
-(BOOL)_performChangesForAssetIdentifier:(id)arg1 sourceType:(long long)arg2 changesBlock:(/*^block*/id)arg3 ;
-(BOOL)deleteCacheForAssetIdentifier:(id)arg1 sourceType:(long long)arg2 ;
-(BOOL)deleteCacheForAssetIdentifier:(id)arg1 ;
-(id)_fileURLWithIdentifier:(id)arg1 sourceType:(long long)arg2 pathExtension:(id)arg3 ;
-(id)_readInfoForURL:(id)arg1 ;
-(void)_saveToMemoryCache:(id)arg1 forFileURL:(id)arg2 fileSize:(unsigned long long)arg3 ;
-(BOOL)_removeCachesForURL:(id)arg1 ;
-(id)initWithPathManager:(id)arg1 ;
-(id)gatingResultForVariationType:(long long)arg1 assetIdentifier:(id)arg2 ;
-(NSURL *)cacheURL;
-(unsigned long long)purgeAll;
@end

