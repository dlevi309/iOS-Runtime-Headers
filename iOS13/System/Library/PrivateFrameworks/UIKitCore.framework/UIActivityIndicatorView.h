/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIColor, UIImageView, _UIActivityIndicatorMessageLabel, NSString, NSArray, _UIActivityIndicatorViewArtworkCacheKey;

@interface UIActivityIndicatorView : UIView <NSCoding> {

	BOOL _animating;
	BOOL _hidesWhenStopped;
	BOOL _restartAnimationOnNextLayout;
	BOOL _disableUpdateColorOnTraitCollectionChange;
	BOOL _hasShadow;
	BOOL _spinning;
	long long _activityIndicatorViewStyle;
	double _duration;
	UIColor* _color;
	UIImageView* _animatingImageView;
	_UIActivityIndicatorMessageLabel* _messageLabel;
	NSString* _message;
	long long _actualActivityIndicatorViewStyle;
	NSArray* _spokeImages;
	NSArray* _spokeHighlightImages;
	long long _spokeCount;
	long long _spokeFrameRatio;
	_UIActivityIndicatorViewArtworkCacheKey* _lastArtCacheKey;
	_UIActivityIndicatorViewArtworkCacheKey* _lastHighlightArtCacheKey;
	UIColor* _shadowColor;
	double _width;
	CGSize _shadowOffset;

}

@property (getter=_animatingImageView,nonatomic,readonly) UIImageView * animatingImageView;                                                      //@synthesize animatingImageView=_animatingImageView - In the implementation block
@property (getter=_messageLabel,nonatomic,readonly) _UIActivityIndicatorMessageLabel * messageLabel;                                             //@synthesize messageLabel=_messageLabel - In the implementation block
@property (setter=_setMessage:,getter=_message,nonatomic,retain) NSString * message;                                                             //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) double animationDuration;                                                                                           //@synthesize duration=_duration - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                                                                                  //@synthesize animating=_animating - In the implementation block
@property (getter=_actualActivityIndicatorViewStyle,nonatomic,readonly) long long actualActivityIndicatorViewStyle;                              //@synthesize actualActivityIndicatorViewStyle=_actualActivityIndicatorViewStyle - In the implementation block
@property (getter=_restartAnimationOnNextLayout,nonatomic,readonly) BOOL restartAnimationOnNextLayout;                                           //@synthesize restartAnimationOnNextLayout=_restartAnimationOnNextLayout - In the implementation block
@property (getter=_spokeImages,nonatomic,readonly) NSArray * spokeImages;                                                                        //@synthesize spokeImages=_spokeImages - In the implementation block
@property (getter=_spokeHighlightImages,nonatomic,readonly) NSArray * spokeHighlightImages;                                                      //@synthesize spokeHighlightImages=_spokeHighlightImages - In the implementation block
@property (getter=_spokeCount,nonatomic,readonly) long long spokeCount;                                                                          //@synthesize spokeCount=_spokeCount - In the implementation block
@property (getter=_spokeFrameRatio,nonatomic,readonly) long long spokeFrameRatio;                                                                //@synthesize spokeFrameRatio=_spokeFrameRatio - In the implementation block
@property (getter=_disableUpdateColorOnTraitCollectionChange,nonatomic,readonly) BOOL disableUpdateColorOnTraitCollectionChange;                 //@synthesize disableUpdateColorOnTraitCollectionChange=_disableUpdateColorOnTraitCollectionChange - In the implementation block
@property (getter=_lastArtCacheKey,nonatomic,readonly) _UIActivityIndicatorViewArtworkCacheKey * lastArtCacheKey;                                //@synthesize lastArtCacheKey=_lastArtCacheKey - In the implementation block
@property (getter=_lastHighlightArtCacheKey,nonatomic,readonly) _UIActivityIndicatorViewArtworkCacheKey * lastHighlightArtCacheKey;              //@synthesize lastHighlightArtCacheKey=_lastHighlightArtCacheKey - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                                                                                                //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                                                                                              //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) double width;                                                                                                       //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) BOOL hasShadow;                                                                                                     //@synthesize hasShadow=_hasShadow - In the implementation block
@property (assign) BOOL spinning;                                                                                                                //@synthesize spinning=_spinning - In the implementation block
@property (assign,nonatomic) long long activityIndicatorViewStyle;                                                                               //@synthesize activityIndicatorViewStyle=_activityIndicatorViewStyle - In the implementation block
@property (assign,nonatomic) BOOL hidesWhenStopped;                                                                                              //@synthesize hidesWhenStopped=_hidesWhenStopped - In the implementation block
@property (nonatomic,retain) UIColor * color;                                                                                                    //@synthesize color=_color - In the implementation block
+(CGSize)defaultSizeForStyle:(long long)arg1 ;
+(id)_loadResourcesForArtworkBasedStyle:(long long)arg1 ;
+(id)_imageSetNameForArtworkBasedStyle:(long long)arg1 outImageCount:(out long long*)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(double)width;
-(UIColor *)color;
-(void)setWidth:(double)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(CGSize)shadowOffset;
-(void)setShadowOffset:(CGSize)arg1 ;
-(id)_message;
-(void)_commonInit;
-(UIColor *)shadowColor;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(void)_setMessage:(id)arg1 ;
-(BOOL)isAnimating;
-(void)startAnimation;
-(id)_messageLabel;
-(void)stopAnimation;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(double)animationDuration;
-(void)setAnimationDuration:(double)arg1 ;
-(BOOL)hasShadow;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(void)_removeAllAnimations:(BOOL)arg1 ;
-(id)initWithActivityIndicatorStyle:(long long)arg1 ;
-(void)startAnimating;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(void)setAnimating:(BOOL)arg1 ;
-(void)stopAnimating;
-(BOOL)_hasShadow;
-(void)setHidesWhenStopped:(BOOL)arg1 ;
-(long long)_defaultStyle;
-(long long)_internalStyleForStyle:(long long)arg1 ;
-(long long)_actualStyleByResolvingAutoUpdatingStyle:(long long)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_updateMessageForStyle:(long long)arg1 ;
-(id)_defaultColorForStyle:(long long)arg1 ;
-(BOOL)_isShowingMessage;
-(void)_updateLayoutInfo;
-(long long)_externalStyleForStyle:(long long)arg1 ;
-(unsigned long long)_indexOfFirstImageForStartingAnimation;
-(void)_setUpAnimation;
-(BOOL)hidesWhenStopped;
-(void)_tearDownAnimation;
-(BOOL)_canCustomize;
-(long long)_spokeCount;
-(long long)_spokeFrameRatio;
-(double)_spokeWidthForGearWidth:(double)arg1 ;
-(double)_spokeLengthForGearWidth:(double)arg1 ;
-(double)_widthForGearWidth:(double)arg1 ;
-(double)_alphaValueForStep:(long long)arg1 ;
-(id)_imageForStep:(long long)arg1 withColor:(id)arg2 ;
-(BOOL)_isStatusBarStyle;
-(BOOL)_colorRequiresDynamicTinting;
-(id)_generateModernImagesForImages:(id)arg1 color:(id)arg2 ;
-(BOOL)_isArtworkBasedStyle;
-(id)_generateImagesForColor:(id)arg1 highlight:(BOOL)arg2 ;
-(void)_updateSubviewFramesWithBounds:(CGRect)arg1 ;
-(BOOL)_shouldGoToCustomStyle;
-(long long)_customStyleForStyle:(long long)arg1 ;
-(BOOL)_shouldGoBackToBaseStyle;
-(id)_artCacheKeyWithStyle:(long long)arg1 color:(id)arg2 ;
-(id)_imagesForStyle:(long long)arg1 color:(id)arg2 highlight:(BOOL)arg3 ;
-(id)_highlightColorForStyle:(long long)arg1 ;
-(CGRect)_animatingImageViewFrameForBounds:(CGRect)arg1 ;
-(CGRect)_messageLabelFrameForBounds:(CGRect)arg1 ;
-(long long)_sizeForStyle:(long long)arg1 ;
-(BOOL)_canCustomizeStyle:(long long)arg1 ;
-(BOOL)_hasClientSetColor;
-(void)setActivityIndicatorViewStyle:(long long)arg1 ;
-(long long)activityIndicatorViewStyle;
-(id)_animatingImageView;
-(long long)_actualActivityIndicatorViewStyle;
-(BOOL)_restartAnimationOnNextLayout;
-(id)_spokeImages;
-(id)_spokeHighlightImages;
-(BOOL)_disableUpdateColorOnTraitCollectionChange;
-(id)_lastArtCacheKey;
-(id)_lastHighlightArtCacheKey;
-(void)setHasShadow:(BOOL)arg1 ;
-(BOOL)spinning;
-(void)setSpinning:(BOOL)arg1 ;
@end

