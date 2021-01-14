/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXLivePhotoTrimScrubberFilmStripView.h>
#import <libobjc.A.dylib/PUTilingViewTileSource.h>
#import <libobjc.A.dylib/PUTilingViewTileTransitionDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/PHVideoScrubberFilmstripView.h>

@protocol OS_dispatch_queue;
@class AVAsset, AVVideoComposition, UIImage, NSObject, PUTileViewAnimator, NSArray, PUTilingView, PUFilmstripMediaProvider, PUFilmstripDataSource, NSString;

@interface PUFilmstripView : UIView <PXLivePhotoTrimScrubberFilmStripView, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, UIScrollViewDelegate, PHVideoScrubberFilmstripView> {

	BOOL _needsUpdateThumbnailAspectRatio;
	BOOL _needsUpdateDataSource;
	BOOL _needsUpdateLayout;
	BOOL _needsUpdateGeneratedPlaceholder;
	NSObject*<OS_dispatch_queue> _placeholderGenerationQueue;
	PUTileViewAnimator* _animator;
	BOOL _generatesPlaceholderImage;
	BOOL _useContentAspectRatio;
	AVAsset* _asset;
	AVVideoComposition* _videoComposition;
	UIImage* _placeholderImage;
	NSArray* _indicatorInfos;
	PUTilingView* __tilingView;
	PUFilmstripMediaProvider* __mediaProvider;
	PUFilmstripDataSource* __dataSource;
	double __thumbnailAspectRatio;
	UIImage* _generatedPlaceholderImage;
	CGRect _visibleRect;

}

@property (assign,nonatomic) CGRect visibleRect; 
@property (nonatomic,readonly) AVAsset * asset; 
@property (nonatomic,readonly) AVVideoComposition * videoComposition; 
@property (assign,nonatomic) BOOL useContentAspectRatio; 
@property (assign,nonatomic,__weak) id thumbnailUpdatingDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PUTilingView * _tilingView;                                                     //@synthesize _tilingView=__tilingView - In the implementation block
@property (setter=_setMediaProvider:,nonatomic,retain) PUFilmstripMediaProvider * _mediaProvider;              //@synthesize _mediaProvider=__mediaProvider - In the implementation block
@property (setter=_setDataSource:,nonatomic,retain) PUFilmstripDataSource * _dataSource;                       //@synthesize _dataSource=__dataSource - In the implementation block
@property (assign,setter=_setThumbnailAspectRatio:,nonatomic) double _thumbnailAspectRatio;                    //@synthesize _thumbnailAspectRatio=__thumbnailAspectRatio - In the implementation block
@property (nonatomic,retain) UIImage * generatedPlaceholderImage;                                              //@synthesize generatedPlaceholderImage=_generatedPlaceholderImage - In the implementation block
@property (nonatomic,readonly) AVAsset * asset;                                                                //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) AVVideoComposition * videoComposition;                                          //@synthesize videoComposition=_videoComposition - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                                       //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) BOOL generatesPlaceholderImage;                                                   //@synthesize generatesPlaceholderImage=_generatesPlaceholderImage - In the implementation block
@property (assign,nonatomic) CGRect visibleRect;                                                               //@synthesize visibleRect=_visibleRect - In the implementation block
@property (nonatomic,copy) NSArray * indicatorInfos;                                                           //@synthesize indicatorInfos=_indicatorInfos - In the implementation block
@property (assign,nonatomic) BOOL useContentAspectRatio;                                                       //@synthesize useContentAspectRatio=_useContentAspectRatio - In the implementation block
-(void)setAsset:(AVAsset *)arg1 ;
-(void)setVisibleRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)visibleRect;
-(AVAsset *)asset;
-(PUFilmstripMediaProvider *)_mediaProvider;
-(void)setIndicatorInfos:(NSArray *)arg1 ;
-(void)_invalidateDataSource;
-(void)reloadThumbnails;
-(id)tilingView:(id)arg1 tileTransitionCoordinatorForChangeFromFrame:(CGRect)arg2 toFrame:(CGRect)arg3 duration:(double)arg4 ;
-(void)setGeneratesPlaceholderImage:(BOOL)arg1 ;
-(void)setGeneratedPlaceholderImage:(UIImage *)arg1 ;
-(void)setUseContentAspectRatio:(BOOL)arg1 ;
-(void)_setThumbnailAspectRatio:(double)arg1 ;
-(void)_releaseAVObjects;
-(void)_invalidateThumbnailAspectRatio;
-(void)_updateThumbnailAspectRatioIfNeeded;
-(void)_invalidateMediaProvider;
-(BOOL)_isMediaProviderValid;
-(void)_updateDataSourceIfNeeded;
-(void)_updateMediaProviderPlaceholderImage;
-(void)_invalidateGeneratedPlaceholderImage;
-(void)_updateGeneratedPlaceholderImageIfNeeded;
-(id)_filmstripLayout;
-(BOOL)generatesPlaceholderImage;
-(NSArray *)indicatorInfos;
-(BOOL)useContentAspectRatio;
-(void)_setMediaProvider:(id)arg1 ;
-(double)_thumbnailAspectRatio;
-(UIImage *)generatedPlaceholderImage;
-(void)_updateIfNeeded;
-(PUTilingView *)_tilingView;
-(void)_setDataSource:(id)arg1 ;
-(void)layoutSubviews;
-(PUFilmstripDataSource *)_dataSource;
-(id)tilingView:(id)arg1 dataSourceConverterForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 ;
-(UIImage *)placeholderImage;
-(void)setAsset:(id)arg1 videoComposition:(id)arg2 ;
-(id)tilingView:(id)arg1 tileControllerWithIndexPath:(id)arg2 kind:(id)arg3 dataSource:(id)arg4 ;
-(void)setLivePhotoTrimScrubberThumbnail:(id)arg1 ;
-(AVVideoComposition *)videoComposition;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(id)tilingView:(id)arg1 tileTransitionCoordinatorForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 withContext:(id)arg4 ;
-(void)_setNeedsUpdate;
-(void)_updateLayoutIfNeeded;
-(void)_invalidateLayout;
@end

