/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <VideosUI/VideosExtrasCarouselCollectionViewCell.h>

@class VideosExtrasConstrainedArtworkContainerView, UIView, UILabel, NSLayoutConstraint, NSString, VideosExtrasZoomingImageInteractiveTransitionSourceContext, UIPinchGestureRecognizer, IKLockupElement;

@interface VideosExtrasLockupCollectionViewCell : UICollectionViewCell <VideosExtrasCarouselCollectionViewCell> {

	CGSize _artworkSize;
	VideosExtrasConstrainedArtworkContainerView* _artworkContainerView;
	UIView* _textContainerView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _descriptionLabel;
	unsigned long long _itemIndex;
	NSLayoutConstraint* _artworkContainerWidthConstraint;
	NSLayoutConstraint* _artworkContainerHeightConstraint;
	NSLayoutConstraint* _subtitleBaselineConstraint;
	NSLayoutConstraint* _descriptionBaselineConstraint;
	NSString* _zoomingImageTransitionIdentifier;
	VideosExtrasZoomingImageInteractiveTransitionSourceContext* _interactiveTransitionSourceContext;
	BOOL _allowsPinchingThumbnailImageForInteractiveZoomingImageTransition;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	IKLockupElement* _lockup;

}

@property (assign,nonatomic,__weak) IKLockupElement * lockup;              //@synthesize lockup=_lockup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updateConstraints;
-(unsigned long long)itemIndex;
-(void)setItemIndex:(unsigned long long)arg1 ;
-(void)setTitleText:(id)arg1 ;
-(id)titleText;
-(id)descriptionText;
-(void)setDescriptionText:(id)arg1 ;
-(id)subtitleText;
-(void)setSubtitleText:(id)arg1 ;
-(id)thumbnailImage;
-(void)setThumbnailImage:(id)arg1 ;
-(void)_handlePinchGesture:(id)arg1 ;
-(IKLockupElement *)lockup;
-(void)setLockup:(IKLockupElement *)arg1 ;
-(id)titleTextStyle;
-(id)subtitleTextStyle;
-(void)prepareZoomingImageTransitionWithContext:(id)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg1 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2 ;
-(void)setZoomingImageTransitionIdentifier:(id)arg1 ;
-(id)descriptionTextStyle;
-(void)setThumbnailImagePlaceholder:(id)arg1 ;
-(void)setThumbnailOverlayImage:(id)arg1 ;
-(void)setThumbnailMaxSize:(CGSize)arg1 ;
-(CGSize)thumbnailMaxSize;
-(void)setThumbnailBorderColor:(id)arg1 ;
-(void)setThumbnailImageAccessibilityText:(id)arg1 ;
-(void)setAllowsPinchingThumbnailImageForInteractiveZoomingImageTransition:(BOOL)arg1 ;
@end

