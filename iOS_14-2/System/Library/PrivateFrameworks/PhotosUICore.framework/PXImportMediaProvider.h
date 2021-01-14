/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXMediaProvider.h>

@class PXLoadingStatusManager, NSMutableDictionary, PXImportImageCache;

@interface PXImportMediaProvider : PXMediaProvider {

	BOOL _hasBeenIdle;
	unsigned short _thumbnailImageFormat;
	PXLoadingStatusManager* loadingStatusManager;
	long long _nextRequestID;
	NSMutableDictionary* _thumbnailRequestsByID;
	PXImportImageCache* _imageCache;
	long long _imageRequestsInflight;
	long long _lastRequestsInflight;
	NSMutableDictionary* _extensionPlaceholderCachesByRequestSize;

}

@property (assign,nonatomic) long long nextRequestID;                                                    //@synthesize nextRequestID=_nextRequestID - In the implementation block
@property (nonatomic,readonly) CGSize gridItemSize; 
@property (nonatomic,readonly) unsigned short thumbnailImageFormat;                                      //@synthesize thumbnailImageFormat=_thumbnailImageFormat - In the implementation block
@property (nonatomic,retain) PXLoadingStatusManager * loadingStatusManager; 
@property (nonatomic,retain) NSMutableDictionary * thumbnailRequestsByID;                                //@synthesize thumbnailRequestsByID=_thumbnailRequestsByID - In the implementation block
@property (nonatomic,retain) PXImportImageCache * imageCache;                                            //@synthesize imageCache=_imageCache - In the implementation block
@property (assign,nonatomic) long long imageRequestsInflight;                                            //@synthesize imageRequestsInflight=_imageRequestsInflight - In the implementation block
@property (assign,nonatomic) long long lastRequestsInflight;                                             //@synthesize lastRequestsInflight=_lastRequestsInflight - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * extensionPlaceholderCachesByRequestSize;              //@synthesize extensionPlaceholderCachesByRequestSize=_extensionPlaceholderCachesByRequestSize - In the implementation block
@property (assign,nonatomic) BOOL hasBeenIdle;                                                           //@synthesize hasBeenIdle=_hasBeenIdle - In the implementation block
+(void)unregisterPXImportMediaProviderNotificationsReceiver:(id)arg1 ;
+(void)registerPXImportMediaProviderNotificationsReceiver:(id)arg1 ;
-(PXLoadingStatusManager *)loadingStatusManager;
-(void)setLoadingStatusManager:(PXLoadingStatusManager *)arg1 ;
-(void)stopCachingImagesForAllAssets;
-(CGSize)gridItemSize;
-(long long)requestLivePhotoForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(id)cachedImageForModel:(id)arg1 atSize:(unsigned long long)arg2 ;
-(id)initWithImageFormat:(unsigned short)arg1 ;
-(long long)imageOfSize:(unsigned long long)arg1 forModel:(id)arg2 localCacheOnly:(BOOL)arg3 priority:(unsigned char)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)thumbnailExistsForModel:(id)arg1 ;
-(BOOL)thumbnailExistsForModel:(id)arg1 atSize:(unsigned long long)arg2 ;
-(void)performIdleProcessingIfNecessary;
-(double)idleTimeOut;
-(id)_newPlaceholderImageForItemWithExtension:(id)arg1 size:(CGSize)arg2 ;
-(id)_placeholderExtensionForItem:(id)arg1 ;
-(id)_placeholderForItem:(id)arg1 size:(unsigned long long)arg2 ;
-(void)setNextRequestID:(long long)arg1 ;
-(BOOL)hasBeenIdle;
-(NSMutableDictionary *)thumbnailRequestsByID;
-(void)setThumbnailRequestsByID:(NSMutableDictionary *)arg1 ;
-(long long)imageRequestsInflight;
-(void)setImageRequestsInflight:(long long)arg1 ;
-(long long)lastRequestsInflight;
-(void)setLastRequestsInflight:(long long)arg1 ;
-(NSMutableDictionary *)extensionPlaceholderCachesByRequestSize;
-(void)setHasBeenIdle:(BOOL)arg1 ;
-(void)setExtensionPlaceholderCachesByRequestSize:(NSMutableDictionary *)arg1 ;
-(unsigned short)thumbnailImageFormat;
-(void)enumerateAvailableThumbnailDataFormats:(/*^block*/id)arg1 ;
-(long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)ppt_sendMediaProviderDidProcessAsset:(id)arg1 ;
-(void)sendMediaProviderThumbnailingBecameIdle;
-(long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(long long)nextRequestID;
-(PXImportImageCache *)imageCache;
-(void)setImageCache:(PXImportImageCache *)arg1 ;
-(long long)requestImageForImportItem:(id)arg1 ofSize:(unsigned long long)arg2 priority:(unsigned char)arg3 completion:(/*^block*/id)arg4 ;
-(id)thumbnailDataForAsset:(id)arg1 targetSize:(CGSize)arg2 onlyFromCache:(BOOL)arg3 outDataSpec:(PXMediaProviderThumbnailDataSpec*)arg4 ;
-(long long)requestImageForImportItem:(id)arg1 ofSize:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)startCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)cancelImageRequest:(long long)arg1 ;
-(long long)requestCGImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)stopCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
@end

