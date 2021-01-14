/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGTextureProvider.h>
#import <libobjc.A.dylib/PXGImageRequestPerformer.h>

@protocol OS_dispatch_queue, PXGDisplayAssetPixelBufferSourcesProvider;
@class NSObject, PXGThumbnailRequestQueue, NSMapTable, NSMutableIndexSet, PXGImageRequestQueue, NSMutableDictionary, CIContext, PXGAssetImageCache, NSArray, PXMediaProvider, NSString;

@interface PXGDisplayAssetTextureProvider : PXGTextureProvider <PXGImageRequestPerformer> {

	NSObject*<OS_dispatch_queue> _videoSessionsRequestQueue;
	PXGThumbnailRequestQueue* _requestQueue_thumbnailRequestQueue;
	NSMapTable* _workQueue_videoSessionsByAsset;
	NSMutableIndexSet* _workQueue_textureRequestIDsWithDeliveredVideoFrames;
	PXGThumbnailRequestQueue* _workQueue_thumbnailRequestQueue;
	PXGImageRequestQueue* _workQueue_imageRequestQueue;
	NSMutableDictionary* _workQueue_deferredImageRequestBlocksByTextureID;
	CIContext* _workQueue_crossfadeRenderContext;
	NSObject*<OS_dispatch_queue> _cancelationQueue;
	NSMutableDictionary* _cancelationQueue_mediaRequestIDByTextureID;
	NSMutableDictionary* _cancelationQueue_deferredMediaRequestIDByTextureID;
	os_unfair_lock_s _lookupLock;
	NSMutableIndexSet* _lookupLock_requestIDsWithDeliveredThumbnails;
	PXGAssetImageCache* _imageCache;
	BOOL _isLowSpec;
	NSArray* _requestOptions;
	CGImageRef _lightPlaceholderImage;
	CGImageRef _darkPlaceholderImage;
	CGSize _largestImageDataSpecSize;
	double _masterThumbnailShortSide;
	double _deferMediumRequestShortSideLimit;
	BOOL _videoRequestsAllowed;
	PXMediaProvider* _mediaProvider;
	id<PXGDisplayAssetPixelBufferSourcesProvider> _pixelBufferSourcesProvider;
	double _displayLinkLastTargetTimestamp;

}

@property (assign) double displayLinkLastTargetTimestamp;                                                           //@synthesize displayLinkLastTargetTimestamp=_displayLinkLastTargetTimestamp - In the implementation block
@property (assign,nonatomic) BOOL videoRequestsAllowed;                                                             //@synthesize videoRequestsAllowed=_videoRequestsAllowed - In the implementation block
@property (nonatomic,readonly) PXMediaProvider * mediaProvider;                                                     //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,retain) id<PXGDisplayAssetPixelBufferSourcesProvider> pixelBufferSourcesProvider;              //@synthesize pixelBufferSourcesProvider=_pixelBufferSourcesProvider - In the implementation block
@property (nonatomic,readonly) CGImageRef placeholderImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)defaultMediaVersionHandlerWithDataSourceBeforeChanges:(id)arg1 dataSourceAfterChanges:(id)arg2 ;
-(PXMediaProvider *)mediaProvider;
-(BOOL)_imageSizeSatisfiedByThumbnail:(CGSize)arg1 ;
-(void)_workQueue_startRequestingVideoTexturesForDisplayAsset:(id)arg1 pixelBufferSource:(id)arg2 textureRequestID:(int)arg3 ;
-(void)performRequestForSpriteIndex:(unsigned)arg1 textureRequestID:(int)arg2 sharedState:(id)arg3 ;
-(id)init;
-(void)_processThumbnailRequestsOnRequestQueue:(BOOL)arg1 ;
-(void)_workQueue_handleCGImageResult:(CGImageRef)arg1 orientation:(unsigned)arg2 info:(id)arg3 shouldCache:(BOOL)arg4 textureRequestID:(int)arg5 ;
-(void)_updateMediumRequestShortSideLimit;
-(void)cancelTextureRequests:(id)arg1 ;
-(CVBufferRef)_workQueue_renderCrossfadeIfNeededWithPixelBuffer:(CVBufferRef)arg1 forVideoSession:(id)arg2 textureRequestID:(id)arg3 ;
-(void)_requestQueue_handleThumbnailData:(id)arg1 spec:(PXMediaProviderThumbnailDataSpec)arg2 forTextureRequestID:(int)arg3 ;
-(id<PXGDisplayAssetPixelBufferSourcesProvider>)pixelBufferSourcesProvider;
-(void)didFinishRequestingTextures;
-(void)_workQueue_cancelTextureRequests:(id)arg1 ;
-(void)_workQueue_provideVideoFrameForVideoSession:(id)arg1 ;
-(void)releaseCachedResources;
-(void)_cancelationQueue_cancelImageRequests:(id)arg1 ;
-(BOOL)_noteThumbnailAsDeliveredForRequestID:(int)arg1 ;
-(void)setVideoRequestsAllowed:(BOOL)arg1 ;
-(void)_workQueue_provideCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 forRequestID:(int)arg3 ;
-(void)_workQueue_processImageRequestsWithAllowedIDs:(id)arg1 ;
-(void)_requestQueue_requestTexturesForSpritesInRange:(PXGSpriteIndexRange)arg1 observer:(id)arg2 textureRequestIDs:(NSRange)arg3 displayAssetFetchResult:(id)arg4 presentationStyles:(unsigned long long)arg5 targetSize:(CGSize)arg6 screenScale:(double)arg7 ;
-(BOOL)_hasDeliveredThumbnailForTextureRequestID:(int)arg1 ;
-(void)_setupRequestOptions;
-(void)setDisplayLinkLastTargetTimestamp:(double)arg1 ;
-(void)_workQueue_handleResult:(CGImageRef)arg1 orientation:(long long)arg2 info:(id)arg3 targetSize:(CGSize)arg4 screenScale:(double)arg5 mediaRequest:(id)arg6 textureRequestID:(int)arg7 ;
-(CGImageRef)placeholderImage;
-(void)_workQueue_processDeferredImageRequests;
-(id)_requestOptionsForUseCase:(unsigned long long)arg1 forDrawing:(BOOL)arg2 ;
-(void)lowMemoryModeDidChange;
-(void)_workQueue_performDeferredImageRequest:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 textureRequestID:(int)arg6 ;
-(NSRange)requestTexturesForSpritesInRange:(PXGSpriteIndexRange)arg1 geometries:(SCD_Struct_PX11*)arg2 styles:(SCD_Struct_PX83*)arg3 infos:(SCD_Struct_PX15*)arg4 inLayout:(id)arg5 ;
-(void)_handlePixelBufferChangedForVideoSession:(id)arg1 ;
-(id)initWithMediaProvider:(id)arg1 ;
-(void)_workQueue_requestVideoTexturesForSpriteAtIndex:(unsigned)arg1 spriteReference:(id)arg2 displayAsset:(id)arg3 textureRequestID:(int)arg4 ;
-(double)displayLinkLastTargetTimestamp;
-(void)interactionStateDidChange:(SCD_Struct_PX22)arg1 ;
-(void)registerImageDataSpecs:(id)arg1 ;
-(void)setPixelBufferSourcesProvider:(id<PXGDisplayAssetPixelBufferSourcesProvider>)arg1 ;
-(void)_workQueue_performRequestForDisplayAsset:(id)arg1 textureRequestID:(int)arg2 sharedState:(id)arg3 ;
-(void)dealloc;
-(BOOL)videoRequestsAllowed;
@end

