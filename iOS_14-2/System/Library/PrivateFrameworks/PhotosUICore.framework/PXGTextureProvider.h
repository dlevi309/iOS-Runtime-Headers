/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXImageDataSpecRegistration.h>

@protocol PXGTextureProviderDelegate, OS_dispatch_queue;
@class NSMutableIndexSet, PXGViewEnvironment, NSIndexSet, NSObject, NSString;

@interface PXGTextureProvider : NSObject <PXImageDataSpecRegistration> {

	NSMutableIndexSet* _lookupLock_activeRequests;
	os_unfair_lock_s _lookupLock;
	SCD_Struct_PX25* _imageDataSpecs;
	long long _imageDataSpecsCount;
	long long _imageDataSpecsCapacity;
	void* _textureAtlasManagers;
	SCD_Struct_PX140 _lastImageDataSpec;
	long long _lastImageDataSpecIndex;
	NSMutableIndexSet* _requestIDsPendingCancellation;
	BOOL _lowMemoryMode;
	BOOL _canDeliverThumbnailData;
	PXGViewEnvironment* _viewEnvironment;
	NSIndexSet* _requestIDsInTargetRect;
	id<PXGTextureProviderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _requestQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _processingQueue;
	SCD_Struct_PX23 _interactionState;

}

@property (assign,nonatomic,__weak) id<PXGTextureProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;                   //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                      //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;                //@synthesize processingQueue=_processingQueue - In the implementation block
@property (assign,nonatomic) BOOL lowMemoryMode;                                          //@synthesize lowMemoryMode=_lowMemoryMode - In the implementation block
@property (assign,nonatomic) BOOL canDeliverThumbnailData;                                //@synthesize canDeliverThumbnailData=_canDeliverThumbnailData - In the implementation block
@property (nonatomic,retain) PXGViewEnvironment * viewEnvironment;                        //@synthesize viewEnvironment=_viewEnvironment - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX22 interactionState;                            //@synthesize interactionState=_interactionState - In the implementation block
@property (nonatomic,copy) NSIndexSet * requestIDsInTargetRect;                           //@synthesize requestIDsInTargetRect=_requestIDsInTargetRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setViewEnvironment:(PXGViewEnvironment *)arg1 ;
-(void)setInteractionState:(SCD_Struct_PX22)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(SCD_Struct_PX22)interactionState;
-(void)viewEnvironmentDidChange:(id)arg1 ;
-(id)init;
-(id<PXGTextureProviderDelegate>)delegate;
-(void)cancelTextureRequests:(id)arg1 ;
-(void)didFinishRequestingTextures;
-(long long)registerImageDataSpec:(SCD_Struct_PX140)arg1 ;
-(void)cancelTextureRequestDeferred:(int)arg1 ;
-(void)performDeferredCancellations;
-(BOOL)isRequestActive:(int)arg1 ;
-(void)requestUpdatedTexturesForDisplayLink:(id)arg1 ;
-(void)provideNothingForRequestID:(int)arg1 ;
-(void)provideCGImage:(CGImageRef)arg1 forRequestID:(int)arg2 ;
-(void)provideCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 forRequestID:(int)arg3 ;
-(void)provideImageData:(id)arg1 withSpecAtIndex:(long long)arg2 bytesPerRow:(unsigned long long)arg3 contentsRect:(CGRect)arg4 forRequestID:(int)arg5 ;
-(void)providePixelBuffer:(CVBufferRef)arg1 orientationTransform:(CGAffineTransform)arg2 forRequestID:(int)arg3 ;
-(void)setNeedsRegisterToDisplayLinkUpdates;
-(void)setNeedsUnregisterFromDisplayLinkUpdates;
-(void)providePayload:(id)arg1 forRequestID:(int)arg2 ;
-(void)prepareImageDataSpecs;
-(SCD_Struct_PX140)imageDataSpecAtIndex:(long long)arg1 ;
-(long long)requestQueue_indexForImageDataSpec:(SCD_Struct_PX140)arg1 ;
-(id)textureAtlasManagerAtSpecIndex:(long long)arg1 ;
-(void)setTextureAtlasManager:(id)arg1 atSpecIndex:(long long)arg2 ;
-(void)clearTextureAtlasManagerCache;
-(BOOL)canDeliverThumbnailData;
-(void)setCanDeliverThumbnailData:(BOOL)arg1 ;
-(NSIndexSet *)requestIDsInTargetRect;
-(void)setRequestIDsInTargetRect:(NSIndexSet *)arg1 ;
-(void)setLowMemoryMode:(BOOL)arg1 ;
-(void)releaseCachedResources;
-(void)setDelegate:(id<PXGTextureProviderDelegate>)arg1 ;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(PXGViewEnvironment *)viewEnvironment;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)lowMemoryModeDidChange;
-(NSRange)requestTexturesForSpritesInRange:(PXGSpriteIndexRange)arg1 geometries:(SCD_Struct_PX106*)arg2 styles:(SCD_Struct_PX83*)arg3 infos:(SCD_Struct_PX15*)arg4 inLayout:(id)arg5 ;
-(BOOL)lowMemoryMode;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)interactionStateDidChange:(SCD_Struct_PX22)arg1 ;
-(void)registerImageDataSpecs:(id)arg1 ;
-(void)dealloc;
@end

