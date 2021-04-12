/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHImageManager.h>
#import <libobjc.A.dylib/PHImageCacheDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableSet, PHImageCache, NSObject, PHPhotoLibrary, NSString;

@interface PHCachingImageManager : PHImageManager <PHImageCacheDelegate> {

	NSMutableSet* _cachingRequestIDs;
	os_unfair_lock_s _cachingLock;
	PHImageCache* _imageCache;
	BOOL _imageCacheCommitScheduled;
	NSObject*<OS_dispatch_queue> _serialQueue;
	PHPhotoLibrary* _photoLibrary;
	NSObject*<OS_dispatch_source> _memoryEventSource;
	BOOL _allowsCachingHighQualityImages;

}

@property (assign,nonatomic) BOOL allowsCachingHighQualityImages;              //@synthesize allowsCachingHighQualityImages=_allowsCachingHighQualityImages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_chooseImageTableFormatForPreheatingFromFormats:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 returnBestTableRegardlessOfFit:(BOOL)arg4 ;
-(void)_scheduleOrCommitCacheChangesIfNeeded;
-(BOOL)allowsCachingHighQualityImages;
-(void)_commitCacheChanges;
-(id)init;
-(void)stopCachingImagesForAllAssets;
-(void)additionalWorkForImageRequestCompletedWithResult:(id)arg1 request:(id)arg2 context:(id)arg3 ;
-(void)imageCache:(id)arg1 didEvictCacheEntry:(id)arg2 ;
-(BOOL)_cacheImageResult:(id)arg1 forRequest:(id)arg2 ;
-(void)_preheatImageTable:(id)arg1 forAssets:(id)arg2 ;
-(void)setAllowsCachingHighQualityImages:(BOOL)arg1 ;
-(id)_imageTableForPreheatingDegradedOpportunisticRequestsWithPhotoLibrary:(id)arg1 ;
-(id)_cacheFailReasonFromInfo:(id)arg1 ;
-(id)_tableFormats;
-(BOOL)_canPopulateCacheForResult:(id)arg1 ;
-(void)_handleMemoryWarning;
-(void)_handleCachingImageRequestResult:(id)arg1 request:(id)arg2 context:(id)arg3 ;
-(void)startCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)mediaRequestContext:(id)arg1 isQueryingCacheForRequest:(id)arg2 didWait:(BOOL*)arg3 didFindImage:(BOOL*)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)stopCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
@end

