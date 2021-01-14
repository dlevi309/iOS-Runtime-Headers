/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCacheDelegate.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@protocol OS_dispatch_queue, NSObject;
@class NSObject, NSMapTable, PXLRUMemoryCache, NSString;

@interface PXPeopleFaceTileImageManager : NSObject <NSCacheDelegate, PXPhotoLibraryUIChangeObserver> {

	NSObject*<OS_dispatch_queue> _fetchQueue;
	NSObject*<OS_dispatch_queue> _requestLookupIsolationQueue;
	NSObject*<OS_dispatch_queue> _cropCacheQueue;
	NSMapTable* _faceTileRequestByRequestID;
	NSMapTable* _highPriorityCachedIdentifiers;
	NSObject*<OS_dispatch_queue> _highPriorityCachedIdentifiersQueue;
	PXLRUMemoryCache* _memoryCache;
	id<NSObject> _memoryWarningObserver;
	id<NSObject> _backgroundEntraceObserver;

}

@property (nonatomic,readonly) PXLRUMemoryCache * memoryCache;                    //@synthesize memoryCache=_memoryCache - In the implementation block
@property (nonatomic,retain) id<NSObject> memoryWarningObserver;                  //@synthesize memoryWarningObserver=_memoryWarningObserver - In the implementation block
@property (nonatomic,retain) id<NSObject> backgroundEntraceObserver;              //@synthesize backgroundEntraceObserver=_backgroundEntraceObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)imageTransformQueue;
-(void)clearMemoryCache;
-(id)_fetchKeyFaceFromPerson:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)_cachedResultForIdentifier:(id)arg1 params:(PXFaceTileImageParams)arg2 isLowResResult:(BOOL*)arg3 ;
-(void)setBackgroundEntraceObserver:(id<NSObject>)arg1 ;
-(void)_cropImage:(id)arg1 synchronous:(BOOL)arg2 cacheResult:(BOOL)arg3 isDegraded:(BOOL)arg4 forRequest:(id)arg5 cropInfo:(SCD_Struct_PX70)arg6 didCallFastBlock:(BOOL)arg7 completionBlock:(/*^block*/id)arg8 ;
-(BOOL)_deliverCachedResultIfPossibleForRequest:(id)arg1 allowDegradedDelivery:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)isActiveRequestWithRequestID:(int)arg1 ;
-(id)_fetchAssetFromFace:(id)arg1 ;
-(id<NSObject>)memoryWarningObserver;
-(void)_stopListeningForChanges;
-(PXLRUMemoryCache *)memoryCache;
-(int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(BOOL)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)_startListeningForChanges;
-(int)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(BOOL)arg5 boundFaceRect:(BOOL)arg6 completionBlock:(/*^block*/id)arg7 ;
-(CGRect)_normalizedAspectCropRectForFaceRect:(CGRect)arg1 aspectRatio:(double)arg2 inImageRect:(CGRect)arg3 ;
-(void)setMemoryWarningObserver:(id<NSObject>)arg1 ;
-(int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(BOOL)arg5 completionBlock:(/*^block*/id)arg6 fastDisplayBlock:(/*^block*/id)arg7 ;
-(void)_addRequestResult:(id)arg1 forIdentifier:(id)arg2 ;
-(int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(BOOL)arg5 boundFaceRect:(BOOL)arg6 completionBlock:(/*^block*/id)arg7 fastDisplayBlock:(/*^block*/id)arg8 ;
-(int)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(BOOL)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)removeHighPriorityCachedItemIdentifier:(id)arg1 forOwner:(id)arg2 ;
-(void)addHighPriorityCachedItemIdentifier:(id)arg1 forOwner:(id)arg2 ;
-(void)invalidateCacheForPerson:(id)arg1 ;
-(int)_requestFaceTileImageFromRequest:(id)arg1 withTargetSize:(CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(BOOL)arg5 boundFaceRect:(BOOL)arg6 completionBlock:(/*^block*/id)arg7 fastDisplayBlock:(/*^block*/id)arg8 ;
-(int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 completionBlock:(/*^block*/id)arg5 ;
-(int)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 completionBlock:(/*^block*/id)arg5 ;
-(int)requestFaceTileImageFromRequest:(id)arg1 withTargetSize:(CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 completionBlock:(/*^block*/id)arg5 fastDisplayBlock:(/*^block*/id)arg6 ;
-(void)_requestFaceTileImageRequest:(id)arg1 faceImageRequest:(id)arg2 cacheResult:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 fastDisplayBlock:(/*^block*/id)arg5 ;
-(id<NSObject>)backgroundEntraceObserver;
-(void)cancelRequest:(int)arg1 ;
-(BOOL)_doesChange:(id)arg1 containVisibleChangesToPHAssetWithOID:(id)arg2 ;
-(CGRect)_boundedCropRectForRect:(CGRect)arg1 inRect:(CGRect)arg2 withTargetAspectRatio:(double)arg3 ;
-(void)dealloc;
-(void)_handleMemoryClearRequest;
@end

