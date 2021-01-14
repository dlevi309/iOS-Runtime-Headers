/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>
#import <libobjc.A.dylib/MPArtworkDataSource.h>

@protocol OS_dispatch_queue;
@class NSURLSessionConfiguration, NSURL, NSObject, NSCache, NSMutableDictionary, NSMapTable, NSURLSession, NSString;

@interface MPAbstractNetworkArtworkDataSource : NSObject <NSURLSessionDataDelegate, AVAssetResourceLoaderDelegate, MPArtworkDataSource> {

	BOOL _usesFallbackCache;
	NSURLSessionConfiguration* _URLSessionConfiguration;
	NSURL* _videoArtworkCacheURL;
	NSObject*<OS_dispatch_queue> _imageAccessQueue;
	NSObject*<OS_dispatch_queue> _videoAccessQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSCache* _fallbackImageArtworkRepresentationCache;
	NSMutableDictionary* _pendingRequestURLToCompletionHandlers;
	NSMapTable* _catalogImageTaskMap;
	NSMapTable* _resourceLoadingRequestVideoTaskMap;
	NSURLSession* _imageURLSession;
	NSURLSession* _videoURLSession;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> imageAccessQueue;                            //@synthesize imageAccessQueue=_imageAccessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> videoAccessQueue;                            //@synthesize videoAccessQueue=_videoAccessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                               //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSCache * fallbackImageArtworkRepresentationCache;                        //@synthesize fallbackImageArtworkRepresentationCache=_fallbackImageArtworkRepresentationCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingRequestURLToCompletionHandlers;              //@synthesize pendingRequestURLToCompletionHandlers=_pendingRequestURLToCompletionHandlers - In the implementation block
@property (nonatomic,retain) NSMapTable * catalogImageTaskMap;                                         //@synthesize catalogImageTaskMap=_catalogImageTaskMap - In the implementation block
@property (nonatomic,retain) NSMapTable * resourceLoadingRequestVideoTaskMap;                          //@synthesize resourceLoadingRequestVideoTaskMap=_resourceLoadingRequestVideoTaskMap - In the implementation block
@property (nonatomic,retain) NSURLSession * imageURLSession;                                           //@synthesize imageURLSession=_imageURLSession - In the implementation block
@property (nonatomic,retain) NSURLSession * videoURLSession;                                           //@synthesize videoURLSession=_videoURLSession - In the implementation block
@property (nonatomic,readonly) NSURLSessionConfiguration * URLSessionConfiguration;                    //@synthesize URLSessionConfiguration=_URLSessionConfiguration - In the implementation block
@property (assign,nonatomic) BOOL usesFallbackCache;                                                   //@synthesize usesFallbackCache=_usesFallbackCache - In the implementation block
@property (nonatomic,retain) NSURL * videoArtworkCacheURL;                                             //@synthesize videoArtworkCacheURL=_videoArtworkCacheURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_applyVideoCacheURL:(id)arg1 toConfiguration:(id)arg2 ;
+(void)_applyImageURLCachePolicy:(unsigned long long)arg1 cacheDiskPath:(id)arg2 toConfiguration:(id)arg3 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)wantsBackgroundImageDecompression;
-(id)init;
-(id)cacheKeyForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(id)requestForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 systemEffectHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setUsesFallbackCache:(BOOL)arg1 ;
-(CGSize)bestAvailableSizeForCatalog:(id)arg1 ;
-(BOOL)areRepresentationsOfKind:(long long)arg1 availableForCatalog:(id)arg2 ;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1 ;
-(NSCache *)fallbackImageArtworkRepresentationCache;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2 ;
-(void)updateURLSessionWithCachePolicy:(unsigned long long)arg1 cachePath:(id)arg2 ;
-(void)setVideoArtworkCacheURL:(NSURL *)arg1 ;
-(BOOL)_isRepresentationSize:(CGSize)arg1 validForCatalog:(id)arg2 ;
-(BOOL)shouldLookForLargerImageRepresentationsWhenBestRepresentationIsUnavailable;
-(NSURLSessionConfiguration *)URLSessionConfiguration;
-(id)_artworkRepresentationWithImageFromData:(id)arg1 forURLResponse:(id)arg2 size:(CGSize)arg3 immediateImageDecompressionAllowed:(BOOL)arg4 ;
-(id)_existingRepresentationFromURLCacheForArtworkCatalog:(id)arg1 immediateImageDecompressionAllowed:(BOOL)arg2 ;
-(id)_existingRepresentativeObjectForArtworkCatalog:(id)arg1 kind:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(id)_requestForCatalog:(id)arg1 kind:(long long)arg2 size:(CGSize)arg3 ;
-(void)_performAsyncBarrierBlockOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_performSyncBlockOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)imageAccessQueue;
-(id)_bestVideoArtworkRepresentationForCatalog:(id)arg1 ;
-(id)_cacheKeyForCatalog:(id)arg1 kind:(long long)arg2 size:(CGSize)arg3 ;
-(NSURL *)videoArtworkCacheURL;
-(CGSize)_bestAvailableSizeForCatalog:(id)arg1 kind:(long long)arg2 ;
-(BOOL)_subclassImplementsSelector:(SEL)arg1 ;
-(void)setImageAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)videoAccessQueue;
-(void)setVideoAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFallbackImageArtworkRepresentationCache:(NSCache *)arg1 ;
-(NSURLSession *)imageURLSession;
-(NSMutableDictionary *)pendingRequestURLToCompletionHandlers;
-(void)setPendingRequestURLToCompletionHandlers:(NSMutableDictionary *)arg1 ;
-(NSURLSession *)videoURLSession;
-(NSMapTable *)catalogImageTaskMap;
-(void)setCatalogImageTaskMap:(NSMapTable *)arg1 ;
-(NSMapTable *)resourceLoadingRequestVideoTaskMap;
-(void)setImageURLSession:(NSURLSession *)arg1 ;
-(void)setResourceLoadingRequestVideoTaskMap:(NSMapTable *)arg1 ;
-(void)setVideoURLSession:(NSURLSession *)arg1 ;
-(id)cacheKeyForCatalog:(id)arg1 kind:(long long)arg2 size:(CGSize)arg3 ;
-(BOOL)usesFallbackCache;
-(id)requestForCatalog:(id)arg1 kind:(long long)arg2 size:(CGSize)arg3 ;
-(id)supportedSizesForCatalog:(id)arg1 ;
-(id)existingRepresentationOfKind:(long long)arg1 forArtworkCatalog:(id)arg2 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2 ;
-(id)sortedSupportedSizesForCatalog:(id)arg1 ;
-(id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(void)loadRepresentationOfKind:(long long)arg1 forArtworkCatalog:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

