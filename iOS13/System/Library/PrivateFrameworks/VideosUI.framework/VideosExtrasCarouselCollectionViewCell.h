/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <VideosUI/VideosExtrasCarouselCollectionViewCell.h>

@protocol VideosExtrasCarouselCollectionViewCell <VideosExtrasZoomingImageTransitionParticipant>
@required
-(unsigned long long)itemIndex;
-(void)setItemIndex:(unsigned long long)arg1;
-(void)setTitleText:(id)arg1;
-(id)titleText;
-(id)descriptionText;
-(void)setDescriptionText:(id)arg1;
-(id)subtitleText;
-(void)setSubtitleText:(id)arg1;
-(id)thumbnailImage;
-(void)setThumbnailImage:(id)arg1;
-(id)titleTextStyle;
-(id)subtitleTextStyle;
-(void)setZoomingImageTransitionIdentifier:(id)arg1;
-(id)descriptionTextStyle;
-(void)setThumbnailImagePlaceholder:(id)arg1;
-(void)setThumbnailOverlayImage:(id)arg1;
-(void)setThumbnailMaxSize:(CGSize)arg1;
-(CGSize*)thumbnailMaxSize;
-(void)setThumbnailBorderColor:(id)arg1;
-(void)setThumbnailImageAccessibilityText:(id)arg1;
-(void)setAllowsPinchingThumbnailImageForInteractiveZoomingImageTransition:(BOOL)arg1;

@end


@class VideosExtrasConstrainedArtworkContainerView, NSLayoutConstraint, NSArray, MPUContentSizeLayoutConstraint, UIView, UILabel, VideosExtrasZoomingImageInteractiveTransitionSourceContext, UIPinchGestureRecognizer, NSString;

@interface VideosExtrasCarouselCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate, VideosExtrasCarouselCollectionViewCell> {

	BOOL _allowsPinchingThumbnailImageForInteractiveZoomingImageTransition;
	VideosExtrasConstrainedArtworkContainerView* _thumbnailImageContainerView;
	NSLayoutConstraint* _thumbnailImageContainerViewHeightConstraint;
	NSArray* _thumbnailImageContainerViewConstraints;
	MPUContentSizeLayoutConstraint* _subtitleBaselineConstraint;
	MPUContentSizeLayoutConstraint* _descriptionLabelBaselineConstraint;
	UIView* _textContainer;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _descriptionLabel;
	unsigned long long _itemIndex;
	VideosExtrasZoomingImageInteractiveTransitionSourceContext* _interactiveTransitionSourceContext;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	NSString* _zoomingImageTransitionIdentifier;
	CGSize _windowSize;

}

@property (nonatomic,retain) VideosExtrasConstrainedArtworkContainerView * thumbnailImageContainerView;                                    //@synthesize thumbnailImageContainerView=_thumbnailImageContainerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * thumbnailImageContainerViewHeightConstraint;                                             //@synthesize thumbnailImageContainerViewHeightConstraint=_thumbnailImageContainerViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSArray * thumbnailImageContainerViewConstraints;                                                             //@synthesize thumbnailImageContainerViewConstraints=_thumbnailImageContainerViewConstraints - In the implementation block
@property (nonatomic,retain) MPUContentSizeLayoutConstraint * subtitleBaselineConstraint;                                                  //@synthesize subtitleBaselineConstraint=_subtitleBaselineConstraint - In the implementation block
@property (nonatomic,retain) MPUContentSizeLayoutConstraint * descriptionLabelBaselineConstraint;                                          //@synthesize descriptionLabelBaselineConstraint=_descriptionLabelBaselineConstraint - In the implementation block
@property (nonatomic,retain) UIView * textContainer;                                                                                       //@synthesize textContainer=_textContainer - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                                                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                                                                   //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic) unsigned long long itemIndex;                                                                                 //@synthesize itemIndex=_itemIndex - In the implementation block
@property (nonatomic,retain) VideosExtrasZoomingImageInteractiveTransitionSourceContext * interactiveTransitionSourceContext;              //@synthesize interactiveTransitionSourceContext=_interactiveTransitionSourceContext - In the implementation block
@property (nonatomic,retain) UIPinchGestureRecognizer * pinchGestureRecognizer;                                                            //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL allowsPinchingThumbnailImageForInteractiveZoomingImageTransition;                                        //@synthesize allowsPinchingThumbnailImageForInteractiveZoomingImageTransition=_allowsPinchingThumbnailImageForInteractiveZoomingImageTransition - In the implementation block
@property (nonatomic,copy) NSString * zoomingImageTransitionIdentifier;                                                                    //@synthesize zoomingImageTransitionIdentifier=_zoomingImageTransitionIdentifier - In the implementation block
@property (assign,nonatomic) CGSize windowSize;                                                                                            //@synthesize windowSize=_windowSize - In the implementation block
@property (nonatomic,readonly) double thumbnailImageContainerHeight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)prepareForReuse;
-(UIView *)textContainer;
-(void)setTextContainer:(UIView *)arg1 ;
-(UILabel *)titleLabel;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(unsigned long long)itemIndex;
-(void)setItemIndex:(unsigned long long)arg1 ;
-(void)setTitleText:(id)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(void)setPinchGestureRecognizer:(UIPinchGestureRecognizer *)arg1 ;
-(id)titleText;
-(id)descriptionText;
-(void)setDescriptionText:(id)arg1 ;
-(id)subtitleText;
-(void)setSubtitleText:(id)arg1 ;
-(id)thumbnailImage;
-(void)setThumbnailImage:(id)arg1 ;
-(CGSize)windowSize;
-(void)_handlePinchGesture:(id)arg1 ;
-(id)titleTextStyle;
-(void)setWindowSize:(CGSize)arg1 ;
-(void)setSubtitleBaselineConstraint:(MPUContentSizeLayoutConstraint *)arg1 ;
-(MPUContentSizeLayoutConstraint *)subtitleBaselineConstraint;
-(id)subtitleTextStyle;
-(void)prepareZoomingImageTransitionWithContext:(id)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg1 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2 ;
-(VideosExtrasZoomingImageInteractiveTransitionSourceContext *)interactiveTransitionSourceContext;
-(NSString *)zoomingImageTransitionIdentifier;
-(void)setInteractiveTransitionSourceContext:(VideosExtrasZoomingImageInteractiveTransitionSourceContext *)arg1 ;
-(void)setZoomingImageTransitionIdentifier:(NSString *)arg1 ;
-(NSLayoutConstraint *)thumbnailImageContainerViewHeightConstraint;
-(double)thumbnailImageContainerHeight;
-(VideosExtrasConstrainedArtworkContainerView *)thumbnailImageContainerView;
-(MPUContentSizeLayoutConstraint *)descriptionLabelBaselineConstraint;
-(void)setDescriptionLabelBaselineConstraint:(MPUContentSizeLayoutConstraint *)arg1 ;
-(id)descriptionTextStyle;
-(NSArray *)thumbnailImageContainerViewConstraints;
-(void)setThumbnailImagePlaceholder:(id)arg1 ;
-(void)setThumbnailOverlayImage:(id)arg1 ;
-(void)_updateThumbnailArtworkViewBorder;
-(void)_setupThumbnailImageContainerViewWithConstraintsAccumulator:(id)arg1 ;
-(void)_setupTitleLabelWithConstraintsAccumulator:(id)arg1 ;
-(void)_setupSubtitleLabelWithConstraintsAccumulator:(id)arg1 ;
-(void)_setupDescriptionLabelWithConstraintsAccumulator:(id)arg1 ;
-(void)setThumbnailImageContainerViewConstraints:(NSArray *)arg1 ;
-(void)setThumbnailImageContainerViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setThumbnailImageContainerView:(VideosExtrasConstrainedArtworkContainerView *)arg1 ;
-(void)setThumbnailMaxSize:(CGSize)arg1 ;
-(CGSize)thumbnailMaxSize;
-(void)setThumbnailBorderColor:(id)arg1 ;
-(void)setThumbnailImageAccessibilityText:(id)arg1 ;
-(void)setAllowsPinchingThumbnailImageForInteractiveZoomingImageTransition:(BOOL)arg1 ;
-(id)thumbnailImagePlaceholder;
-(id)thumbnailImageAccessibilityText;
-(id)lockupElement;
-(double)_descriptionLabelTopInset;
-(BOOL)allowsPinchingThumbnailImageForInteractiveZoomingImageTransition;
@end

