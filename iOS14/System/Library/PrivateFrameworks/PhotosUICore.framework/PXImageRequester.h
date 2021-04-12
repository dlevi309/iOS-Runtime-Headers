/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableImageRequester.h>

@protocol PXUIImageProvider, PXDisplayAsset;
@class UIImage, PXImageRequest, NSString;

@interface PXImageRequester : PXObservable <PXMutableImageRequester> {

	SCD_Struct_PX24 _needsUpdateFlags;
	BOOL _hasFullQuality;
	BOOL _isInCloud;
	id<PXUIImageProvider> _mediaProvider;
	id<PXDisplayAsset> _asset;
	double _scale;
	UIImage* _image;
	UIImage* _opportunisticImage;
	double _loadingProgress;
	id<PXDisplayAsset> __currentImageSourceAsset;
	PXImageRequest* __currentRequest;
	CGSize _contentSize;
	CGSize _maximumRequestSize;
	CGSize _viewportSize;
	CGSize __targetSize;
	CGRect _desiredContentsRect;
	CGRect _cropRect;
	CGRect _contentsRect;

}

@property (setter=_setImage:,nonatomic,retain) UIImage * image;                                                            //@synthesize image=_image - In the implementation block
@property (setter=_setOpportunisticImage:,nonatomic,retain) UIImage * opportunisticImage;                                  //@synthesize opportunisticImage=_opportunisticImage - In the implementation block
@property (setter=_setCurrentImageSourceAsset:,nonatomic,retain) id<PXDisplayAsset> _currentImageSourceAsset;              //@synthesize _currentImageSourceAsset=__currentImageSourceAsset - In the implementation block
@property (assign,setter=_setHasFullQuality:,nonatomic) BOOL hasFullQuality;                                               //@synthesize hasFullQuality=_hasFullQuality - In the implementation block
@property (assign,setter=_setIsInCloud:,nonatomic) BOOL isInCloud;                                                         //@synthesize isInCloud=_isInCloud - In the implementation block
@property (setter=_setCurrentRequest:,nonatomic,retain) PXImageRequest * _currentRequest;                                  //@synthesize _currentRequest=__currentRequest - In the implementation block
@property (assign,setter=_setTargetSize:,nonatomic) CGSize _targetSize;                                                    //@synthesize _targetSize=__targetSize - In the implementation block
@property (assign,setter=_setLoadingProgress:,nonatomic) double loadingProgress;                                           //@synthesize loadingProgress=_loadingProgress - In the implementation block
@property (nonatomic,readonly) id<PXUIImageProvider> mediaProvider;                                                        //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> asset;                                                                   //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                                                                         //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) double scale;                                                                               //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CGSize maximumRequestSize;                                                                  //@synthesize maximumRequestSize=_maximumRequestSize - In the implementation block
@property (nonatomic,readonly) CGRect desiredContentsRect;                                                                 //@synthesize desiredContentsRect=_desiredContentsRect - In the implementation block
@property (nonatomic,readonly) CGRect cropRect;                                                                            //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,readonly) CGSize viewportSize;                                                                        //@synthesize viewportSize=_viewportSize - In the implementation block
@property (nonatomic,readonly) CGRect contentsRect;                                                                        //@synthesize contentsRect=_contentsRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultOptions;
-(void)setMediaProvider:(id<PXUIImageProvider>)arg1 ;
-(CGRect)cropRect;
-(void)setContentSize:(CGSize)arg1 ;
-(CGSize)_targetSize;
-(void)setAsset:(id<PXDisplayAsset>)arg1 ;
-(id<PXUIImageProvider>)mediaProvider;
-(void)_setTargetSize:(CGSize)arg1 ;
-(void)setCropRect:(CGRect)arg1 ;
-(CGRect)contentsRect;
-(id)init;
-(BOOL)isInCloud;
-(PXImageRequest *)_currentRequest;
-(id<PXDisplayAsset>)asset;
-(CGSize)contentSize;
-(void)didPerformChanges;
-(double)scale;
-(void)handlePreloadedImage:(id)arg1 ;
-(void)_updateIfNeeded;
-(CGSize)viewportSize;
-(CGRect)desiredContentsRect;
-(void)setDesiredContentsRect:(CGRect)arg1 ;
-(UIImage *)image;
-(void)setContentsRect:(CGRect)arg1 ;
-(double)loadingProgress;
-(void)_setImage:(id)arg1 ;
-(NSString *)description;
-(void)_invalidateImageRequest;
-(void)setScale:(double)arg1 ;
-(void)handlePreloadedImageRequester:(id)arg1 ;
-(CGSize)maximumRequestSize;
-(void)setMaximumRequestSize:(CGSize)arg1 ;
-(void)setViewportSize:(CGSize)arg1 ;
-(id)initWithMediaProvider:(id)arg1 asset:(id)arg2 ;
-(void)_updateImageRequestIfNeeded;
-(void)_invalidateIsInCloud;
-(void)_handleProgressForImageRequest:(id)arg1 progress:(double)arg2 ;
-(void)_handleResultOfImageRequest:(id)arg1 image:(id)arg2 info:(id)arg3 ;
-(void)_updateIsInCloudIfNeeded;
-(void)_setLoadingProgress:(double)arg1 ;
-(void)_setOpportunisticImage:(id)arg1 ;
-(void)_setHasFullQuality:(BOOL)arg1 ;
-(void)_setIsInCloud:(BOOL)arg1 ;
-(void)_cancelRequests;
-(UIImage *)opportunisticImage;
-(BOOL)hasFullQuality;
-(id<PXDisplayAsset>)_currentImageSourceAsset;
-(void)_setCurrentImageSourceAsset:(id)arg1 ;
-(void)_setCurrentRequest:(id)arg1 ;
-(BOOL)_needsUpdate;
-(id)mutableChangeObject;
-(void)_invalidateTargetSize;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)_updateTargetSizeIfNeeded;
-(void)dealloc;
@end

