/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXDisplayAsset;
@class PXUIMediaProvider, NSArray, NSError, UIView, UIImage, PXImageRequester, PXRoundProgressView, PXLoadingFailureBadgeView, NSString;

@interface PXDisplayAssetUIView : UIView <PXReusableObject, PXChangeObserver> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	BOOL _displayLoadingIndicator;
	BOOL _isDisplayingFullQualityContent;
	BOOL _animatedContentEnabled;
	id<PXDisplayAsset> _asset;
	long long _playbackStyle;
	PXUIMediaProvider* _mediaProvider;
	NSArray* _placeholderImageFilters;
	double _placeholderTransitionDuration;
	NSError* _error;
	UIView* _contentView;
	UIImage* _image;
	PXImageRequester* _imageRequester;
	PXRoundProgressView* _progressView;
	PXLoadingFailureBadgeView* _failureView;
	double _imageProgress;
	double _loadingProgress;
	CGSize _targetSize;
	CGRect _contentBounds;
	CGRect _contentsRect;

}

@property (nonatomic,retain) id<PXDisplayAsset> asset;                                                 //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                                   //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) CGSize targetSize;                                                        //@synthesize targetSize=_targetSize - In the implementation block
@property (assign,nonatomic) CGRect contentBounds;                                                     //@synthesize contentBounds=_contentBounds - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                          //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGRect contentsRect;                                                      //@synthesize contentsRect=_contentsRect - In the implementation block
@property (nonatomic,retain) PXImageRequester * imageRequester;                                        //@synthesize imageRequester=_imageRequester - In the implementation block
@property (nonatomic,retain) PXRoundProgressView * progressView;                                       //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) PXLoadingFailureBadgeView * failureView;                                  //@synthesize failureView=_failureView - In the implementation block
@property (nonatomic,retain) NSError * error;                                                          //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) double imageProgress;                                                   //@synthesize imageProgress=_imageProgress - In the implementation block
@property (nonatomic,readonly) double loadingProgress;                                                 //@synthesize loadingProgress=_loadingProgress - In the implementation block
@property (nonatomic,readonly) long long playbackStyle;                                                //@synthesize playbackStyle=_playbackStyle - In the implementation block
@property (nonatomic,retain) PXUIMediaProvider * mediaProvider;                                        //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,copy) NSArray * placeholderImageFilters;                                          //@synthesize placeholderImageFilters=_placeholderImageFilters - In the implementation block
@property (assign,nonatomic) double placeholderTransitionDuration;                                     //@synthesize placeholderTransitionDuration=_placeholderTransitionDuration - In the implementation block
@property (assign,nonatomic) BOOL displayLoadingIndicator;                                             //@synthesize displayLoadingIndicator=_displayLoadingIndicator - In the implementation block
@property (assign,nonatomic) BOOL isDisplayingFullQualityContent;                                      //@synthesize isDisplayingFullQualityContent=_isDisplayingFullQualityContent - In the implementation block
@property (nonatomic,readonly) CGRect currentContentsRect; 
@property (nonatomic,readonly) UIImage * currentImage; 
@property (assign,getter=isAnimatedContentEnabled,nonatomic) BOOL animatedContentEnabled;              //@synthesize animatedContentEnabled=_animatedContentEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewPool;
+(void)checkInView:(id)arg1 ;
+(id)checkOutViewForAsset:(id)arg1 ;
+(id)checkOutViewForAsset:(id)arg1 withPlaybackStyle:(long long)arg2 ;
-(CGRect)contentBounds;
-(void)setMediaProvider:(PXUIMediaProvider *)arg1 ;
-(CGSize)targetSize;
-(void)updateContent;
-(void)becomeReusable;
-(void)setAsset:(id<PXDisplayAsset>)arg1 ;
-(PXUIMediaProvider *)mediaProvider;
-(void)setTargetSize:(CGSize)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(CGRect)contentsRect;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PXDisplayAsset>)asset;
-(PXLoadingFailureBadgeView *)failureView;
-(void)imageProgressDidChange;
-(void)placeholderImageFiltersDidChange;
-(void)contentsRectDidChange;
-(void)setContentBounds:(CGRect)arg1 ;
-(BOOL)isDisplayingFullQualityContent;
-(void)isDisplayingFullQualityContentDidChange;
-(double)imageProgress;
-(void)invalidateLoadingProgress;
-(double)placeholderTransitionDuration;
-(CGRect)currentContentsRect;
-(void)setNeedsUpdateContent;
-(void)setAnimatedContentEnabled:(BOOL)arg1 ;
-(void)setPlaceholderTransitionDuration:(double)arg1 ;
-(void)setImageProgress:(double)arg1 ;
-(void)animatedContentEnabledDidChange;
-(void)contentModeDidChange;
-(void)placeholderTransitionDurationDidChange;
-(void)_updateProgressView;
-(void)_updateFailureView;
-(void)_loadContentView;
-(BOOL)displayLoadingIndicator;
-(void)setDisplayLoadingIndicator:(BOOL)arg1 ;
-(void)setIsDisplayingFullQualityContent:(BOOL)arg1 ;
-(BOOL)isAnimatedContentEnabled;
-(void)setFailureView:(PXLoadingFailureBadgeView *)arg1 ;
-(void)_updateIfNeeded;
-(void)setError:(NSError *)arg1 ;
-(void)prepareForReuse;
-(PXImageRequester *)imageRequester;
-(void)setImageRequester:(PXImageRequester *)arg1 ;
-(void)imageDidChange;
-(UIImage *)image;
-(NSError *)error;
-(void)setContentsRect:(CGRect)arg1 ;
-(double)loadingProgress;
-(void)layoutSubviews;
-(long long)playbackStyle;
-(void)didMoveToWindow;
-(void)setPlaceholderImageFilters:(NSArray *)arg1 ;
-(NSArray *)placeholderImageFilters;
-(void)setProgressView:(PXRoundProgressView *)arg1 ;
-(PXRoundProgressView *)progressView;
-(UIImage *)currentImage;
-(UIView *)contentView;
-(void)_updateTargetSize;
-(void)setContentMode:(long long)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

