/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PHLivePhotoViewDelegate.h>

@protocol PUPhotoViewContentHelperDelegate;
@class PUBackgroundColorView, UIColor, PXVideoPlayerView, ISWrappedAVPlayer, ISAnimatedImageView, UIView, UIImage, PUPhotoDecoration, PHLivePhoto, AVAsset, PHAnimatedImage, PXTextBannerView, PXFeatureSpec, PXCollectionTileLayoutTemplate, NSString, UIImageView, PUAvalancheStackView, PHLivePhotoView, PXRoundedCornerOverlayView, PXUIAssetBadgeView, PXTitleSubtitleUILabel, ISWrappedAVAudioSession;

@interface PUPhotoViewContentHelper : NSObject <PHLivePhotoViewDelegate> {

	PUBackgroundColorView* _photoDecorationBorderView;
	PUBackgroundColorView* _photoDecorationOverlayView;
	BOOL _hasTransform;
	BOOL _hasLayerBackgroundColor;
	SCD_Struct_PU17 _delegateFlags;
	BOOL _hasPendingPlaybackRequest;
	long long _pendingPlaybackRequestStyle;
	UIColor* _layerDefaultBackgroundColor;
	struct {
		BOOL titleSubtitleUILabel;
		BOOL loopingVideoView;
		BOOL animatedImageView;
	}  _needsUpdateFlags;
	PXVideoPlayerView* _loopingVideoView;
	ISWrappedAVPlayer* _loopingVideoPlayer;
	ISAnimatedImageView* _animatedImageView;
	BOOL _isTextBannerVisible;
	BOOL _avoidsImageViewIfPossible;
	BOOL _flattensBadgeView;
	BOOL _avoidsPhotoDecoration;
	BOOL _animatingRoundedCorners;
	BOOL _useOverlay;
	BOOL _highlighted;
	BOOL _livePhotoHidden;
	BOOL _shouldPrepareForPlayback;
	BOOL _loopingPlaybackAllowed;
	BOOL _showsLivePhoto;
	BOOL _needsAvalancheStack;
	UIView* _contentView;
	long long _fillMode;
	UIImage* _photoImage;
	UIImage* _placeHolderImage;
	UIView* _transitionSnapshotView;
	PUPhotoDecoration* _photoDecoration;
	double _cornerRadius;
	unsigned long long _cornersToRound;
	UIColor* _overlayColor;
	double _contentAlpha;
	double _darkContentOverlayAlpha;
	UIColor* _backgroundColor;
	id<PUPhotoViewContentHelperDelegate> _delegate;
	PHLivePhoto* _livePhoto;
	AVAsset* _loopingVideoAsset;
	PHAnimatedImage* _animatedImage;
	CGColorRef _avalancheStackBackgroundColor;
	long long _badgeStyle;
	PXTextBannerView* _textBannerView;
	PXFeatureSpec* _featureSpec;
	PXCollectionTileLayoutTemplate* _collectionTileLayoutTemplate;
	NSString* _titleFontName;
	NSString* _title;
	NSString* _subtitle;
	UIImageView* _photoImageView;
	UIView* _darkContentOverlay;
	UIImageView* __crossfadeImageView;
	PUAvalancheStackView* _avalancheStackView;
	PHLivePhotoView* _livePhotoView;
	PXRoundedCornerOverlayView* _roundedCornerOverlayView;
	UIView* __highlightOverlayView;
	PXUIAssetBadgeView* __badgeView;
	PXTitleSubtitleUILabel* __titleSubtitleLabel;
	ISWrappedAVAudioSession* __audioSession;
	CGSize _photoSize;
	CGSize _customPaddingForBadgeElements;
	PXAssetBadgeInfo _badgeInfo;
	CGAffineTransform _imageTransform;

}

@property (nonatomic,retain) UIImageView * photoImageView;                                                                 //@synthesize photoImageView=_photoImageView - In the implementation block
@property (nonatomic,retain) UIView * darkContentOverlay;                                                                  //@synthesize darkContentOverlay=_darkContentOverlay - In the implementation block
@property (nonatomic,retain) UIImageView * _crossfadeImageView;                                                            //@synthesize _crossfadeImageView=__crossfadeImageView - In the implementation block
@property (nonatomic,retain) PUAvalancheStackView * avalancheStackView;                                                    //@synthesize avalancheStackView=_avalancheStackView - In the implementation block
@property (nonatomic,retain) PHLivePhotoView * livePhotoView;                                                              //@synthesize livePhotoView=_livePhotoView - In the implementation block
@property (nonatomic,retain) PXRoundedCornerOverlayView * roundedCornerOverlayView;                                        //@synthesize roundedCornerOverlayView=_roundedCornerOverlayView - In the implementation block
@property (setter=_setHighlightOverlayView:,nonatomic,retain) UIView * _highlightOverlayView;                              //@synthesize _highlightOverlayView=__highlightOverlayView - In the implementation block
@property (setter=_setBadgeView:,nonatomic,retain) PXUIAssetBadgeView * _badgeView;                                        //@synthesize _badgeView=__badgeView - In the implementation block
@property (setter=_setTitleSubtitleUILabel:,nonatomic,retain) PXTitleSubtitleUILabel * _titleSubtitleLabel;                //@synthesize _titleSubtitleLabel=__titleSubtitleLabel - In the implementation block
@property (setter=_setAudioSession:,nonatomic,retain) ISWrappedAVAudioSession * _audioSession;                             //@synthesize _audioSession=__audioSession - In the implementation block
@property (nonatomic,__weak,readonly) UIView * contentView;                                                                //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) long long fillMode;                                                                           //@synthesize fillMode=_fillMode - In the implementation block
@property (assign,nonatomic) CGAffineTransform imageTransform;                                                             //@synthesize imageTransform=_imageTransform - In the implementation block
@property (assign,nonatomic) CGSize photoSize;                                                                             //@synthesize photoSize=_photoSize - In the implementation block
@property (nonatomic,readonly) CGRect imageContentFrame; 
@property (nonatomic,retain) UIImage * photoImage;                                                                         //@synthesize photoImage=_photoImage - In the implementation block
@property (nonatomic,retain) UIImage * placeHolderImage;                                                                   //@synthesize placeHolderImage=_placeHolderImage - In the implementation block
@property (nonatomic,retain) UIView * transitionSnapshotView;                                                              //@synthesize transitionSnapshotView=_transitionSnapshotView - In the implementation block
@property (nonatomic,copy) PUPhotoDecoration * photoDecoration;                                                            //@synthesize photoDecoration=_photoDecoration - In the implementation block
@property (assign,getter=isImageViewEdgeAntialiasingEnabled,nonatomic) BOOL imageViewEdgeAntialiasingEnabled; 
@property (assign,nonatomic) BOOL avoidsImageViewIfPossible;                                                               //@synthesize avoidsImageViewIfPossible=_avoidsImageViewIfPossible - In the implementation block
@property (assign,nonatomic) BOOL flattensBadgeView;                                                                       //@synthesize flattensBadgeView=_flattensBadgeView - In the implementation block
@property (assign,nonatomic) BOOL avoidsPhotoDecoration;                                                                   //@synthesize avoidsPhotoDecoration=_avoidsPhotoDecoration - In the implementation block
@property (nonatomic,readonly) UIView * badgeContainerView; 
@property (nonatomic,readonly) BOOL providesVisualFeedbackOnPress; 
@property (assign,getter=isAnimatingRoundedCorners,nonatomic) BOOL animatingRoundedCorners;                                //@synthesize animatingRoundedCorners=_animatingRoundedCorners - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                                                          //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) unsigned long long cornersToRound;                                                          //@synthesize cornersToRound=_cornersToRound - In the implementation block
@property (assign,nonatomic) BOOL useOverlay;                                                                              //@synthesize useOverlay=_useOverlay - In the implementation block
@property (nonatomic,retain) UIColor * overlayColor;                                                                       //@synthesize overlayColor=_overlayColor - In the implementation block
@property (assign,nonatomic) double contentAlpha;                                                                          //@synthesize contentAlpha=_contentAlpha - In the implementation block
@property (assign,nonatomic) double darkContentOverlayAlpha;                                                               //@synthesize darkContentOverlayAlpha=_darkContentOverlayAlpha - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                                                        //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                                                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,getter=isLivePhotoHidden,nonatomic) BOOL livePhotoHidden;                                                //@synthesize livePhotoHidden=_livePhotoHidden - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoViewContentHelperDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PHLivePhoto * livePhoto;                                                                      //@synthesize livePhoto=_livePhoto - In the implementation block
@property (assign,nonatomic) BOOL shouldPrepareForPlayback;                                                                //@synthesize shouldPrepareForPlayback=_shouldPrepareForPlayback - In the implementation block
@property (nonatomic,copy) AVAsset * loopingVideoAsset;                                                                    //@synthesize loopingVideoAsset=_loopingVideoAsset - In the implementation block
@property (nonatomic,retain) PHAnimatedImage * animatedImage;                                                              //@synthesize animatedImage=_animatedImage - In the implementation block
@property (assign,nonatomic) BOOL loopingPlaybackAllowed;                                                                  //@synthesize loopingPlaybackAllowed=_loopingPlaybackAllowed - In the implementation block
@property (assign,nonatomic) BOOL showsLivePhoto;                                                                          //@synthesize showsLivePhoto=_showsLivePhoto - In the implementation block
@property (assign,nonatomic) BOOL needsAvalancheStack;                                                                     //@synthesize needsAvalancheStack=_needsAvalancheStack - In the implementation block
@property (assign,nonatomic) CGColorRef avalancheStackBackgroundColor;                                                     //@synthesize avalancheStackBackgroundColor=_avalancheStackBackgroundColor - In the implementation block
@property (assign,nonatomic) PXAssetBadgeInfo badgeInfo;                                                                   //@synthesize badgeInfo=_badgeInfo - In the implementation block
@property (assign,nonatomic) long long badgeStyle;                                                                         //@synthesize badgeStyle=_badgeStyle - In the implementation block
@property (assign,nonatomic) CGSize customPaddingForBadgeElements;                                                         //@synthesize customPaddingForBadgeElements=_customPaddingForBadgeElements - In the implementation block
@property (assign,getter=isTextBannerVisible,nonatomic) BOOL textBannerVisible;                                            //@synthesize isTextBannerVisible=_isTextBannerVisible - In the implementation block
@property (nonatomic,readonly) PXTextBannerView * textBannerView;                                                          //@synthesize textBannerView=_textBannerView - In the implementation block
@property (nonatomic,retain) PXFeatureSpec * featureSpec;                                                                  //@synthesize featureSpec=_featureSpec - In the implementation block
@property (nonatomic,retain) PXCollectionTileLayoutTemplate * collectionTileLayoutTemplate;                                //@synthesize collectionTileLayoutTemplate=_collectionTileLayoutTemplate - In the implementation block
@property (nonatomic,retain) NSString * titleFontName;                                                                     //@synthesize titleFontName=_titleFontName - In the implementation block
@property (nonatomic,retain) NSString * title;                                                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                                                          //@synthesize subtitle=_subtitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 imageSize:(CGSize)arg2 fillMode:(long long)arg3 ;
+(CGRect)_imageContentFrameForBounds:(CGRect)arg1 imageSize:(CGSize)arg2 fillMode:(long long)arg3 ;
-(void)setImageTransform:(CGAffineTransform)arg1 ;
-(double)contentAlpha;
-(CGAffineTransform)imageTransform;
-(void)startPlaybackWithStyle:(long long)arg1 ;
-(PXFeatureSpec *)featureSpec;
-(void)_removeAvalancheStackViewIfNecessary;
-(PUPhotoDecoration *)photoDecoration;
-(NSString *)titleFontName;
-(CGSize)customPaddingForBadgeElements;
-(CGColorRef)avalancheStackBackgroundColor;
-(void)setTransitionSnapshotView:(UIView *)arg1 ;
-(void)setPhotoImageView:(UIImageView *)arg1 ;
-(PXTitleSubtitleUILabel *)_titleSubtitleLabel;
-(void)stopPlayback;
-(PHLivePhotoView *)livePhotoView;
-(PXTextBannerView *)textBannerView;
-(void)setLivePhoto:(PHLivePhoto *)arg1 ;
-(PXUIAssetBadgeView *)_badgeView;
-(PHLivePhoto *)livePhoto;
-(BOOL)isAnimatingRoundedCorners;
-(void)setAvoidsPhotoDecoration:(BOOL)arg1 ;
-(void)setPhotoDecoration:(PUPhotoDecoration *)arg1 ;
-(void)setAvalancheStackBackgroundColor:(CGColorRef)arg1 ;
-(BOOL)loopingPlaybackAllowed;
-(BOOL)showsLivePhoto;
-(void)setFlattensBadgeView:(BOOL)arg1 ;
-(void)_updateBadgeView;
-(void)setPhotoSize:(CGSize)arg1 ;
-(void)setImageViewEdgeAntialiasingEnabled:(BOOL)arg1 ;
-(void)setPhotoImage:(UIImage *)arg1 ;
-(CGRect)imageContentFrame;
-(void)setDarkContentOverlayAlpha:(double)arg1 ;
-(void)setOverlayColor:(UIColor *)arg1 ;
-(void)_updateHighlight;
-(BOOL)useOverlay;
-(long long)badgeStyle;
-(void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2 ;
-(BOOL)needsAvalancheStack;
-(void)_updateRoundedCornersOverlayView;
-(BOOL)avoidsImageViewIfPossible;
-(id)init;
-(void)_updateLoopingVideoViewIfNeeded;
-(void)_updateAnimatedImageViewIfNeeded;
-(BOOL)flattensBadgeView;
-(long long)fillMode;
-(void)_setTitleSubtitleUILabel:(id)arg1 ;
-(id<PUPhotoViewContentHelperDelegate>)delegate;
-(void)setFillMode:(long long)arg1 ;
-(void)_updateTextBannerView;
-(void)setAvalancheStackView:(PUAvalancheStackView *)arg1 ;
-(void)setAvoidsImageViewIfPossible:(BOOL)arg1 ;
-(UIView *)_highlightOverlayView;
-(void)setTitleFontName:(NSString *)arg1 ;
-(void)set_crossfadeImageView:(UIImageView *)arg1 ;
-(NSString *)subtitle;
-(void)_updateTitleSubtitleUILabelIfNeeded;
-(CGRect)imageContentFrameForBounds:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setCustomPaddingForBadgeElements:(CGSize)arg1 ;
-(void)setDarkContentOverlay:(UIView *)arg1 ;
-(UIView *)badgeContainerView;
-(void)setPlaceHolderImage:(UIImage *)arg1 ;
-(void)_setAudioSession:(id)arg1 ;
-(void)_updateIfNeeded;
-(ISWrappedAVAudioSession *)_audioSession;
-(PHAnimatedImage *)animatedImage;
-(PXRoundedCornerOverlayView *)roundedCornerOverlayView;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)_setBadgeView:(id)arg1 ;
-(id)initWithContentView:(id)arg1 ;
-(void)_updateLivePhotoViewVisibility;
-(UIColor *)backgroundColor;
-(double)cornerRadius;
-(void)setShouldPrepareForPlayback:(BOOL)arg1 ;
-(void)setDelegate:(id<PUPhotoViewContentHelperDelegate>)arg1 ;
-(BOOL)avoidsPhotoDecoration;
-(void)_removePhotoImageViewIfNecessary;
-(void)setNeedsAvalancheStack:(BOOL)arg1 ;
-(void)setRoundedCornerOverlayView:(PXRoundedCornerOverlayView *)arg1 ;
-(void)setShowsLivePhoto:(BOOL)arg1 ;
-(void)setContentAlpha:(double)arg1 ;
-(UIView *)darkContentOverlay;
-(void)setAnimatedImage:(PHAnimatedImage *)arg1 ;
-(void)_invalidateAnimatedImageView;
-(AVAsset *)loopingVideoAsset;
-(BOOL)isHighlighted;
-(void)setCollectionTileLayoutTemplate:(PXCollectionTileLayoutTemplate *)arg1 ;
-(UIImageView *)_crossfadeImageView;
-(void)_invalidateTitleSubtitleUILabel;
-(BOOL)isTextBannerVisible;
-(void)setCornerRadius:(double)arg1 cornersToRound:(unsigned long long)arg2 useOverlay:(BOOL)arg3 overlayColor:(id)arg4 ;
-(void)setLivePhotoView:(PHLivePhotoView *)arg1 ;
-(void)_updateSubviewOrdering;
-(void)_invalidateBadgeView;
-(void)setTextBannerVisible:(BOOL)arg1 ;
-(PXCollectionTileLayoutTemplate *)collectionTileLayoutTemplate;
-(void)updatePhotoImageWithoutReconfiguring:(id)arg1 ;
-(void)_updateContentViewClipsToBounds;
-(void)setFeatureSpec:(PXFeatureSpec *)arg1 ;
-(BOOL)_needsUpdate;
-(unsigned long long)cornersToRound;
-(CGSize)contentViewSizeThatFits:(CGSize)arg1 ;
-(UIImage *)photoImage;
-(void)setAnimatingRoundedCorners:(BOOL)arg1 ;
-(void)setBadgeInfo:(PXAssetBadgeInfo)arg1 ;
-(void)_addAvalancheStackViewIfNecessary;
-(void)_updateLayerBackgroundColorIfNeeded;
-(void)layoutSubviewsOfContentView;
-(void)setLoopingPlaybackAllowed:(BOOL)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)_startPlaybackWhenLivePhotoAvailableWithStyle:(long long)arg1 ;
-(void)_updatePhotoDecoration;
-(BOOL)isLivePhotoHidden;
-(CGRect)photoDecorationBorderViewFrameForImageContentFrame:(CGRect)arg1 ;
-(BOOL)providesVisualFeedbackOnPress;
-(void)_updateImageView;
-(UIView *)transitionSnapshotView;
-(void)_invalidateLoopingVideoView;
-(PXAssetBadgeInfo)badgeInfo;
-(void)setCornerRadius:(double)arg1 ;
-(UIView *)contentView;
-(void)_updateLivePhotoViewPreparing;
-(UIColor *)overlayColor;
-(UIImage *)placeHolderImage;
-(void)_setHighlightOverlayView:(id)arg1 ;
-(void)setUseOverlay:(BOOL)arg1 ;
-(BOOL)shouldPrepareForPlayback;
-(void)_updateLayerCornerRadius;
-(void)_updateLivePhotoView;
-(void)animateCrossfadeToImage:(id)arg1 ;
-(PUAvalancheStackView *)avalancheStackView;
-(void)contentViewDynamicUserInterfaceTraitDidChange;
-(BOOL)isImageViewEdgeAntialiasingEnabled;
-(UIImageView *)photoImageView;
-(CGSize)photoSize;
-(void)setBadgeStyle:(long long)arg1 ;
-(void)setCornersToRound:(unsigned long long)arg1 ;
-(NSString *)title;
-(double)darkContentOverlayAlpha;
-(void)setLivePhotoHidden:(BOOL)arg1 ;
-(void)setLoopingVideoAsset:(AVAsset *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

