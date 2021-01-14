/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_loadResourcesForArtworkBasedStyle:(long long)arg1 ;
+(CGSize)defaultSizeForStyle:(long long)arg1 ;
+(id)_imageSetNameForArtworkBasedStyle:(long long)arg1 outImageCount:(out long long*)arg2 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)_setMessage:(id)arg1 ;
-(double)animationDuration;
-(void)setShadowColor:(UIColor *)arg1 ;
-(id)_message;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)tintColorDidChange;
-(double)width;
-(void)startAnimation;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(UIColor *)shadowColor;
-(UIColor *)color;
-(CGSize)shadowOffset;
-(void)setWidth:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_removeAllAnimations:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(BOOL)spinning;
-(BOOL)_isShowingMessage;
-(long long)_sizeForStyle:(long long)arg1 ;
-(void)setHidesWhenStopped:(BOOL)arg1 ;
-(long long)_spokeCount;
-(id)_defaultColorForStyle:(long long)arg1 ;
-(long long)_internalStyleForStyle:(long long)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_setUpAnimation;
-(long long)_actualStyleByResolvingAutoUpdatingStyle:(long long)arg1 ;
-(void)_updateMessageForStyle:(long long)arg1 ;
-(void)_updateLayoutInfo;
-(long long)_externalStyleForStyle:(long long)arg1 ;
-(void)setHasShadow:(BOOL)arg1 ;
-(unsigned long long)_indexOfFirstImageForStartingAnimation;
-(id)_spokeImages;
-(BOOL)hidesWhenStopped;
-(void)_tearDownAnimation;
-(long long)_spokeFrameRatio;
-(double)_spokeWidthForGearWidth:(double)arg1 ;
-(double)_spokeLengthForGearWidth:(double)arg1 ;
-(double)_widthForGearWidth:(double)arg1 ;
-(double)_alphaValueForStep:(long long)arg1 ;
-(id)_imageForStep:(long long)arg1 withColor:(id)arg2 ;
-(BOOL)_isStatusBarStyle;
-(BOOL)_colorRequiresDynamicTinting;
-(BOOL)_isArtworkBasedStyle;
-(id)_generateModernImagesForImages:(id)arg1 color:(id)arg2 ;
-(BOOL)_shouldGoToCustomStyle;
-(id)_generateImagesForColor:(id)arg1 highlight:(BOOL)arg2 ;
-(void)_updateSubviewFramesWithBounds:(CGRect)arg1 ;
-(long long)_customStyleForStyle:(long long)arg1 ;
-(BOOL)_shouldGoBackToBaseStyle;
-(BOOL)_hasClientSetColor;
-(void)layoutSubviews;
-(id)_artCacheKeyWithStyle:(long long)arg1 color:(id)arg2 ;
-(id)_imagesForStyle:(long long)arg1 color:(id)arg2 highlight:(BOOL)arg3 ;
-(id)_highlightColorForStyle:(long long)arg1 ;
-(CGRect)_animatingImageViewFrameForBounds:(CGRect)arg1 ;
-(CGRect)_messageLabelFrameForBounds:(CGRect)arg1 ;
-(long long)activityIndicatorViewStyle;
-(BOOL)_useCustomStyleForLegacyStyles;
-(void)setActivityIndicatorViewStyle:(long long)arg1 ;
-(id)_animatingImageView;
-(long long)_actualActivityIndicatorViewStyle;
-(BOOL)_restartAnimationOnNextLayout;
-(id)_spokeHighlightImages;
-(id)_lastArtCacheKey;
-(BOOL)_disableUpdateColorOnTraitCollectionChange;
-(id)_lastHighlightArtCacheKey;
-(void)setFrame:(CGRect)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(void)stopAnimation;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isHighlighted;
-(BOOL)_hasShadow;
-(void)setSpinning:(BOOL)arg1 ;
-(id)_messageLabel;
-(void)startAnimating;
-(id)initWithActivityIndicatorStyle:(long long)arg1 ;
-(long long)_defaultStyle;
-(id)initWithCoder:(id)arg1 ;
-(void)stopAnimating;
-(void)_commonInit;
-(BOOL)hasShadow;
-(void)setStyle:(long long)arg1 ;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isAnimating;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
@end

