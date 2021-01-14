/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGTextureProvider.h>

@class NSCache;

@interface PXGCGImageTextureProvider : PXGTextureProvider {

	NSCache* _imageCache;
	NSCache* _additionalInfoCache;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue; 
-(void)invalidateCache;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(void)requestCGImageWithCacheKey:(id)arg1 imageProvider:(/*^block*/id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)requestCGImageAndAdditionalInfoWithCacheKey:(id)arg1 imageProvider:(/*^block*/id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)cacheAdditionalInfo:(id)arg1 withKey:(id)arg2 ;
-(void)_updateCacheLimit;
-(void)releaseCachedResources;
-(void)lowMemoryModeDidChange;
@end

