/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIAccessibilityContentSizeCategoryImageAdjusting.h>
#import <UIKit/UIAccessibilityContentSizeCategoryImageAdjustingInternal.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UIFloatingContentViewDelegate.h>
#import <UIKit/UIButtonControl.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol UIButtonVisualElement;
@class UIImageView, _UIFloatingContentView, UIVisualEffectView, UILabel, UITapGestureRecognizer, UIView, _UIButtonMaskAnimationView, UIFont, NSArray, UIMenu, UIColor, NSString, _UICursorEffect, UIImage, UIImageSymbolConfiguration, NSAttributedString;

@interface UIButton : UIControl <UIAccessibilityContentSizeCategoryImageAdjusting, UIAccessibilityContentSizeCategoryImageAdjustingInternal, UIGestureRecognizerDelegate, _UIFloatingContentViewDelegate, UIButtonControl, NSCoding> {

	unsigned long long _externalFlatEdge;
	CFDictionaryRef _contentLookup;
	UIEdgeInsets _contentEdgeInsets;
	UIEdgeInsets _titleEdgeInsets;
	UIEdgeInsets _imageEdgeInsets;
	UIImageView* _backgroundView;
	_UIFloatingContentView* _floatingContentView;
	UIVisualEffectView* _contentBackdropView;
	UIImageView* _imageView;
	UILabel* _titleView;
	BOOL _initialized;
	unsigned long long _lastDrawingControlState;
	UITapGestureRecognizer* _selectGestureRecognizer;
	struct {
		unsigned reversesTitleShadowWhenHighlighted : 1;
		unsigned adjustsImageWhenHighlighted : 1;
		unsigned adjustsImageWhenDisabled : 1;
		unsigned autosizeToFit : 1;
		unsigned disabledDimsImage : 1;
		unsigned showsTouchWhenHighlighted : 1;
		unsigned buttonType : 8;
		unsigned role : 8;
		unsigned shouldHandleScrollerMouseEvent : 1;
		unsigned titleFrozen : 1;
		unsigned resendTraitToImageViews : 2;
		unsigned animateNextHighlightChange : 1;
		unsigned blurEnabled : 1;
		unsigned visualEffectViewEnabled : 1;
		unsigned suppressAccessibilityUnderline : 1;
		unsigned requiresLayoutForPropertyChange : 1;
		unsigned needsTitleViewDefaultColorUpdate : 1;
		unsigned adjustsImageSizeForAccessibilityContentSizeCategory : 1;
		unsigned disableAutomaticTitleAnimations : 1;
		unsigned overridesRectAccessors : 1;
		unsigned overridesLegacyCursorDelegateSelectors : 1;
	}  _buttonFlags;
	UIView* _effectiveContentView;
	_UIButtonMaskAnimationView* _maskAnimationView;
	UIView* _selectionView;
	UIFont* _lazyTitleViewFont;
	BOOL _lazyTitleViewFontIsDefaultForIdiom;
	NSArray* _contentConstraints;
	/*^block*/id _menuProvider;
	/*^block*/id _pointerStyleProvider;
	UIMenu* _menu;
	UIView*<UIButtonVisualElement> __visualElement;
	long long __imageContentMode;
	UIColor* __plainButtonBackgroundColor;
	/*^block*/id _cursorStyleProvider;
	UIEdgeInsets _internalTitlePaddingInsets;

}

@property (assign,nonatomic) BOOL adjustsImageSizeForAccessibilityContentSizeCategory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=_setContentConstraints:,nonatomic,copy) NSArray * _contentConstraints;                                                                             //@synthesize contentConstraints=_contentConstraints - In the implementation block
@property (assign,setter=_setInternalTitlePaddingInsets:,nonatomic) UIEdgeInsets _internalTitlePaddingInsets;                                                        //@synthesize internalTitlePaddingInsets=_internalTitlePaddingInsets - In the implementation block
@property (setter=_setVisualElement:,nonatomic,retain) UIView*<UIButtonVisualElement> _visualElement;                                                                //@synthesize _visualElement=__visualElement - In the implementation block
@property (assign,setter=_setImageContentMode:,nonatomic) long long _imageContentMode;                                                                               //@synthesize _imageContentMode=__imageContentMode - In the implementation block
@property (assign,setter=_setContentBackgroundHidden:,getter=_isContentBackgroundHidden,nonatomic) BOOL contentBackgroundHidden; 
@property (setter=_setPlainButtonBackgroundColor:,getter=_plainButtonBackgroundColor,nonatomic,retain) UIColor * _plainButtonBackgroundColor;                        //@synthesize _plainButtonBackgroundColor=__plainButtonBackgroundColor - In the implementation block
@property (nonatomic,copy) id cursorStyleProvider;                                                                                                                   //@synthesize cursorStyleProvider=_cursorStyleProvider - In the implementation block
@property (setter=_setPreferredCursorEffect:,nonatomic,copy) _UICursorEffect * _preferredCursorEffect; 
@property (assign,setter=_setDisableAutomaticTitleAnimations:,getter=_disableAutomaticTitleAnimations,nonatomic) BOOL _disableAutomaticTitleAnimations; 
@property (nonatomic,retain,readonly) UIColor * _currentImageColor; 
@property (assign,setter=_setWantsAccessibilityUnderline:,nonatomic) BOOL _wantsAccessibilityUnderline; 
@property (setter=_setExternalFlatEdge:) unsigned long long _externalFlatEdge; 
@property (assign,setter=_setOn:,nonatomic) BOOL _isOn; 
@property (setter=_setMenuProvider:,nonatomic,copy) id _menuProvider;                                                                                                //@synthesize menuProvider=_menuProvider - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets; 
@property (assign,nonatomic) UIEdgeInsets titleEdgeInsets; 
@property (assign,nonatomic) BOOL reversesTitleShadowWhenHighlighted; 
@property (assign,nonatomic) UIEdgeInsets imageEdgeInsets; 
@property (assign,nonatomic) BOOL adjustsImageWhenHighlighted; 
@property (assign,nonatomic) BOOL adjustsImageWhenDisabled; 
@property (assign,nonatomic) BOOL showsTouchWhenHighlighted; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,readonly) long long buttonType; 
@property (assign,nonatomic) long long role; 
@property (assign,getter=isPointerInteractionEnabled,nonatomic) BOOL pointerInteractionEnabled; 
@property (nonatomic,copy) id pointerStyleProvider;                                                                                                                  //@synthesize pointerStyleProvider=_pointerStyleProvider - In the implementation block
@property (nonatomic,copy) UIMenu * menu;                                                                                                                            //@synthesize menu=_menu - In the implementation block
@property (nonatomic,readonly) NSString * currentTitle; 
@property (nonatomic,readonly) UIColor * currentTitleColor; 
@property (nonatomic,readonly) UIColor * currentTitleShadowColor; 
@property (nonatomic,readonly) UIImage * currentImage; 
@property (nonatomic,readonly) UIImage * currentBackgroundImage; 
@property (nonatomic,readonly) UIImageSymbolConfiguration * currentPreferredSymbolConfiguration; 
@property (nonatomic,readonly) NSAttributedString * currentAttributedTitle; 
@property (nonatomic,readonly) UILabel * titleLabel; 
@property (nonatomic,readonly) UIImageView * imageView; 
+(void)_setVisuallyHighlighted:(BOOL)arg1 forViews:(id)arg2 initialPress:(BOOL)arg3 highlightBlock:(/*^block*/id)arg4 ;
+(id)_defaultSymbolConfigurationForType:(long long)arg1 andState:(unsigned long long)arg2 compact:(BOOL)arg3 ;
+(void)_setVisuallyHighlighted:(BOOL)arg1 forViews:(id)arg2 initialPress:(BOOL)arg3 baseAlpha:(double)arg4 ;
+(id)_defaultBackgroundImageNameForType:(long long)arg1 andState:(unsigned long long)arg2 compact:(BOOL)arg3 ;
+(void)_setVisuallyHighlighted:(BOOL)arg1 forViews:(id)arg2 initialPress:(BOOL)arg3 ;
+(id)_defaultNormalTitleColor;
+(id)_defaultBackgroundImageForType:(long long)arg1 andState:(unsigned long long)arg2 ;
+(id)_defaultTitleColorForState:(unsigned long long)arg1 button:(id)arg2 isTintColor:(BOOL*)arg3 ;
+(id)_defaultImageColorForState:(unsigned long long)arg1 button:(id)arg2 ;
+(id)_systemButtonWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
+(id)systemButtonWithPrimaryAction:(id)arg1 ;
+(id)_defaultBackgroundImageColorForType:(long long)arg1 andState:(unsigned long long)arg2 ;
+(BOOL)_allowsUnsupportedMacIdiomBehavior;
+(void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)arg1 ;
+(id)buttonWithType:(long long)arg1 ;
+(id)_selectedIndicatorImage;
+(id)_defaultNormalTitleShadowColor;
+(double)_defaultNeighborSpacingForAxis:(long long)arg1 ;
+(BOOL)_buttonTypeIsModernUI:(long long)arg1 ;
+(BOOL)_buttonTypeIsSystemProvided:(long long)arg1 ;
+(BOOL)_buttonTypeIsiOSSystemProvided:(long long)arg1 ;
+(id)systemButtonWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
+(id)_defaultSymbolConfigurationForType:(long long)arg1 andState:(unsigned long long)arg2 ;
+(id)_defaultImageForType:(long long)arg1 andState:(unsigned long long)arg2 withConfiguration:(id)arg3 ;
+(id)buttonWithType:(long long)arg1 primaryAction:(id)arg2 ;
+(id)_defaultImageNameForType:(long long)arg1 andState:(unsigned long long)arg2 ;
+(id)_defaultImageColorForType:(long long)arg1 andState:(unsigned long long)arg2 ;
-(UILabel *)titleLabel;
-(CGRect)_selectedIndicatorBounds;
-(BOOL)canBecomeFocused;
-(BOOL)_isModernButton;
-(UIMenu *)menu;
-(id)_effectiveContentView;
-(BOOL)_isOn;
-(long long)lineBreakMode;
-(id)_imageView;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(CGSize)_intrinsicSizeForTitle:(id)arg1 attributedTitle:(id)arg2 image:(id)arg3 backgroundImage:(id)arg4 titlePaddingInsets:(UIEdgeInsets*)arg5 ;
-(id)_font;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(id)_externalTitleColorForState:(unsigned long long)arg1 isTintColor:(BOOL*)arg2 ;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(void)_setTitleFrozen:(BOOL)arg1 ;
-(BOOL)_isCarPlaySystemTypeButton;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)_setOn:(BOOL)arg1 ;
-(id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2 ;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(id)viewForLastBaselineLayout;
-(BOOL)_supportsMacIdiom;
-(UIEdgeInsets)_pathTitleEdgeInsets;
-(void)tintColorDidChange;
-(void)_deriveTitleRect:(CGRect*)arg1 imageRect:(CGRect*)arg2 fromContentRect:(CGRect)arg3 calculatePositionForEmptyTitle:(BOOL)arg4 ;
-(unsigned long long)defaultAccessibilityTraits;
-(UIEdgeInsets)_pathImageEdgeInsets;
-(double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(id)arg2 nextToNeighbor:(id)arg3 edge:(int)arg4 attribute:(long long)arg5 multiplier:(double)arg6 ;
-(void)setAdjustsImageSizeForAccessibilityContentSizeCategory:(BOOL)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2 ;
-(BOOL)adjustsImageSizeForAccessibilityContentSizeCategory;
-(BOOL)_shouldAdjustToTraitCollection;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(id)viewForFirstBaselineLayout;
-(UIImageView *)imageView;
-(UIEdgeInsets)alignmentRectInsets;
-(id)_imageForState:(unsigned long long)arg1 applyingConfiguration:(BOOL)arg2 usesImageForNormalState:(BOOL*)arg3 ;
-(void)setFont:(id)arg1 ;
-(void)setMenu:(UIMenu *)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)_titleRectForContentRect:(CGRect)arg1 calculatePositionForEmptyTitle:(BOOL)arg2 ;
-(BOOL)_likelyToHaveTitle;
-(void)_setFont:(id)arg1 isDefaultForIdiom:(BOOL)arg2 ;
-(BOOL)scalesLargeContentImage;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(id)_backgroundView;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)setPreferredSymbolConfiguration:(id)arg1 forImageInState:(unsigned long long)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setRole:(long long)arg1 ;
-(id)_attributedTitleForState:(unsigned long long)arg1 adjustedToTraitCollection:(id)arg2 ;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)_layoutBackgroundImageView;
-(BOOL)_shouldUpdatePressedness;
-(void)_layoutImageAndTitleViews;
-(void)_setBackground:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)_applyAppropriateTouchInsetsForButton;
-(void)_setupDrawingStyleForState:(unsigned long long)arg1 ;
-(id)_newImageViewWithFrame:(CGRect)arg1 ;
-(void)_setupPressednessForState:(unsigned long long)arg1 ;
-(id)_createPreparedImageViewWithFrame:(CGRect)arg1 ;
-(id)_externalUnfocusedBorderColor;
-(long long)_buttonType;
-(BOOL)_isiOSSystemProvidedButton;
-(BOOL)_visualEffectViewEnabled;
-(void)_setDrawingStroke:(double)arg1 forState:(unsigned long long)arg2 ;
-(long long)_drawingStyleForStroke:(double)arg1 ;
-(long long)_externalDrawingStyleForState:(unsigned long long)arg1 ;
-(void)_setVisualEffectViewEnabled:(BOOL)arg1 backgroundColor:(id)arg2 ;
-(void)_enumerateContentWithBlock:(/*^block*/id)arg1 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)_externalImageColorForState:(unsigned long long)arg1 ;
-(BOOL)_hasImageForProperty:(id)arg1 ;
-(BOOL)isAccessibilityElementByDefault;
-(void)_setFont:(id)arg1 ;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_applyCarPlaySystemButtonCustomizations;
-(id)_shapeInContainer:(id)arg1 proposal:(/*^block*/id)arg2 ;
-(UIColor *)currentTitleShadowColor;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)_createPointerInteraction;
-(void)_updateContextMenuEnabled;
-(void)setBounds:(CGRect)arg1 ;
-(NSArray *)_contentConstraints;
-(BOOL)reversesTitleShadowWhenHighlighted;
-(void)setReversesTitleShadowWhenHighlighted:(BOOL)arg1 ;
-(BOOL)_disableAutomaticTitleAnimations;
-(UIColor *)_currentImageColor;
-(id)image;
-(UIImageSymbolConfiguration *)currentPreferredSymbolConfiguration;
-(id)_currentImageWithResolvedConfiguration;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(BOOL)_alwaysHandleScrollerMouseEvent;
-(void)_setMenuProvider:(/*^block*/id)arg1 ;
-(void)_setShouldHandleScrollerMouseEvent:(BOOL)arg1 ;
-(void)setShowPressFeedback:(BOOL)arg1 ;
-(void)crossfadeToImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setLetterpressStyle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setDrawingStyle:(long long)arg1 forState:(unsigned long long)arg2 ;
-(long long)_drawingStyleForState:(unsigned long long)arg1 ;
-(BOOL)_shouldDefaultToTemplatesForImageViewBackground:(BOOL)arg1 ;
-(BOOL)_isContentBackgroundHidden;
-(void)setPointerStyleProvider:(id)arg1 ;
-(void)_setContentBackgroundHidden:(BOOL)arg1 ;
-(_UICursorEffect *)_preferredCursorEffect;
-(void)_setFrame:(CGRect)arg1 deferLayout:(BOOL)arg2 ;
-(void)_setImageColor:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)_setAttributedTitle:(id)arg1 forStates:(unsigned long long)arg2 ;
-(id)_letterpressStyleForState:(unsigned long long)arg1 ;
-(void)_setPreferredCursorEffect:(id)arg1 ;
-(UIEdgeInsets)_internalTitlePaddingInsets;
-(void)_setInternalTitlePaddingInsets:(UIEdgeInsets)arg1 ;
-(long long)_imageContentMode;
-(UIColor *)_plainButtonBackgroundColor;
-(void)_setPlainButtonBackgroundColor:(id)arg1 ;
-(id)cursorStyleProvider;
-(id)_floatingContentView;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)_setDisableAutomaticTitleAnimations:(BOOL)arg1 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)pointerStyleProvider;
-(void)layoutSubviews;
-(void)updateConstraints;
-(long long)_lineBreakMode;
-(void)setFrame:(CGRect)arg1 ;
-(id)_shapeInContainer:(id)arg1 ;
-(id)_pointerEffectPreviewParameters;
-(id)_pointerEffectWithPreview:(id)arg1 ;
-(BOOL)_pointerInteractionCanBeAssisted;
-(id)largeContentImage;
-(void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setWantsAccessibilityUnderline:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)_highlightCornerRadius;
-(id)_titleView;
-(BOOL)_accessibilityShouldActivateOnHUDLift;
-(BOOL)_isInCarPlay;
-(NSString *)currentTitle;
-(id)_newLabelWithFrame:(CGRect)arg1 ;
-(CGSize)_roundSize:(CGSize)arg1 ;
-(void)setImageEdgeInsets:(UIEdgeInsets)arg1 ;
-(BOOL)_blurEnabled;
-(void)_refreshVisualElementForTraitCollection:(id)arg1 populatingAPIProperties:(BOOL)arg2 ;
-(id)visualElementForTraitCollection:(id)arg1 ;
-(void)_setButtonType:(long long)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(BOOL)isSpringLoaded;
-(void)setSpringLoaded:(BOOL)arg1 ;
-(double)_scaleFactorForImage;
-(void)setTitleShadowColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)backgroundImageForState:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitleShadowColor:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)setContentHorizontalAlignment:(long long)arg1 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)setAdjustsImageWhenHighlighted:(BOOL)arg1 ;
-(id)_menuProvider;
-(BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long*)arg1 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(BOOL)arg4 ;
-(void)setAutosizesToFit:(BOOL)arg1 ;
-(void)_uikit_applyValueFromTraitStorage:(id)arg1 forKeyPath:(id)arg2 ;
-(id)_viewForLoweringBaselineLayoutAttribute:(int)arg1 ;
-(id)_encodableSubviews;
-(UIEdgeInsets)contentEdgeInsets;
-(id)_defaultImageForState:(unsigned long long)arg1 withConfiguration:(id)arg2 ;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setContent:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setLineBreakMode:(long long)arg1 ;
-(void)_setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIImage *)currentImage;
-(id)imageForState:(unsigned long long)arg1 ;
-(BOOL)_isTitleFrozen;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(void)_updateImageView;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(id)largeContentTitle;
-(void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
-(void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)titleColorForState:(unsigned long long)arg1 ;
-(BOOL)_canHaveTitle;
-(void)_titleViewLabelMetricsChanged;
-(id)_setupBackgroundView;
-(id)_titleColorForState:(unsigned long long)arg1 suppressTintColorFollowing:(BOOL*)arg2 ;
-(UIEdgeInsets)imageEdgeInsets;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(id)titleForState:(unsigned long long)arg1 ;
-(void)_setTitleColor:(id)arg1 forStates:(unsigned long long)arg2 ;
-(id)_contentForState:(unsigned long long)arg1 ;
-(long long)role;
-(id)_selectionIndicatorView;
-(void)_setShadowColor:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)_setContentConstraints:(id)arg1 ;
-(id)titleShadowColorForState:(unsigned long long)arg1 ;
-(void)_setDefaultFontForIdiom;
-(id)attributedTitleForState:(unsigned long long)arg1 ;
-(BOOL)_isSystemProvidedButton;
-(CGPoint)pressFeedbackPosition;
-(BOOL)_usesVisualElement;
-(void)setShowsTouchWhenHighlighted:(BOOL)arg1 ;
-(id)_archivableContent:(id*)arg1 ;
-(void)_reducedTransparencyDidChange:(id)arg1 ;
-(void)setShowsMenuAsPrimaryAction:(BOOL)arg1 ;
-(void)_setVisualElement:(id)arg1 ;
-(void)_commonInitForPrimaryAction:(id)arg1 ;
-(void)_setBlurEnabled:(BOOL)arg1 ;
-(void)_takeContentFromArchivableContent:(id)arg1 ;
-(void)_setupTitleView;
-(BOOL)_fontIsDefaultForIdiom;
-(BOOL)_shouldHaveFloatingAppearance;
-(id)_imageColorForState:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 primaryAction:(id)arg2 ;
-(id)_borderColorForState:(unsigned long long)arg1 ;
-(void)_uninstallSelectGestureRecognizer;
-(void)_updateTitleView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateEffectsForImageView:(id)arg1 background:(BOOL)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_installSelectGestureRecognizer;
-(BOOL)_hasHighlightColor;
-(CGSize)_titleShadowOffset;
-(void)_invalidateContentConstraints;
-(CGSize)_baselineOffsetsAtSize:(CGSize)arg1 ;
-(void)_refreshVisualElementForTraitCollection:(id)arg1 ;
-(UIView*<UIButtonVisualElement>)_visualElement;
-(BOOL)autosizesToFit;
-(long long)buttonType;
-(id)_pointerEffect;
-(id)_externalFocusedTitleColor;
-(void)_setTitleShadowOffset:(CGSize)arg1 ;
-(void)_setImageContentMode:(long long)arg1 ;
-(void)setTitleColor:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)setAdjustsImageWhenDisabled:(BOOL)arg1 ;
-(BOOL)_isEffectivelyDisabledExternalButton;
-(void)_selectGestureChanged:(id)arg1 ;
-(CGRect)_clippedHighlightBounds;
-(void)_setImageColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setTitleEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setNeedsLayout;
-(void)setTitle:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)setImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)setContentVerticalAlignment:(long long)arg1 ;
-(void)setDisabledDimsImage:(BOOL)arg1 ;
-(double)_drawingStrokeForState:(unsigned long long)arg1 ;
-(id)_contentBackdropView;
-(BOOL)_isExternalRoundedRectButtonWithPressednessState;
-(BOOL)_highlightsBackgroundImage;
-(double)_selectedIndicatorAlpha;
-(id)_selectedIndicatorViewWithImage:(id)arg1 ;
-(unsigned long long)_externalFlatEdge;
-(BOOL)_textNeedsCompositingModeWhenSelected;
-(BOOL)_imageNeedsCompositingModeWhenSelected;
-(CGRect)_highlightBoundsForDrawingStyle;
-(BOOL)_selectorOverridden:(SEL)arg1 ;
-(void)_prepareMaskAnimationViewIfNecessary;
-(id)_transitionAnimationWithKeyPath:(id)arg1 ;
-(void)_updateMaskState;
-(double)_borderWidthForState:(unsigned long long)arg1 bounds:(CGRect)arg2 ;
-(id)_shadowColorForState:(unsigned long long)arg1 ;
-(void)_pointerWillExit:(id)arg1 ;
-(void)_setupImageView;
-(id)_titleForState:(unsigned long long)arg1 ;
-(id)_allButtonContent;
-(UIEdgeInsets)titleEdgeInsets;
-(id)_viewForBaselineLayout;
-(void)_willMoveToWindow:(id)arg1 ;
-(id)_fadeOutAnimationWithKeyPath:(id)arg1 ;
-(void)_beginTitleAnimation;
-(id)title;
-(void)_invalidateForPropertyChange;
-(id)_externalBorderColorForState:(unsigned long long)arg1 ;
-(void)_setTitle:(id)arg1 forStates:(unsigned long long)arg2 ;
-(BOOL)_wantsAccessibilityUnderline;
-(id)_defaultFontForIdiom:(long long)arg1 ;
-(void)setBackgroundImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)_setImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(id)_backgroundForState:(unsigned long long)arg1 usesBackgroundForNormalState:(BOOL*)arg2 ;
-(id)_preferredConfigurationForState:(unsigned long long)arg1 ;
-(id)preferredSymbolConfigurationForImageInState:(unsigned long long)arg1 ;
-(UIEdgeInsets)_combinedContentPaddingInsets;
-(void)_updateSelectionViewForState:(unsigned long long)arg1 ;
-(id)_attributedTitleForState:(unsigned long long)arg1 ;
-(CGSize)_effectiveSizeForImage:(id)arg1 ;
-(void)dealloc;
-(id)font;
-(void)_setContentHuggingPriorities:(CGSize)arg1 ;
-(id)_titleOrImageViewForBaselineLayout;
-(void)_setupTitleViewRequestingLayout:(BOOL)arg1 ;
-(CGRect)_highlightRectForImageRect:(CGRect)arg1 ;
-(id)_layoutDebuggingTitle;
-(CGRect)_highlightRectForTextRect:(CGRect)arg1 ;
-(double)_drawingStrokeForStyle:(long long)arg1 ;
-(void)_pointerWillEnter:(id)arg1 ;
-(BOOL)showsTouchWhenHighlighted;
-(void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
-(BOOL)adjustsImageWhenHighlighted;
-(void)_setExternalFlatEdge:(unsigned long long)arg1 ;
-(void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(BOOL)adjustsImageWhenDisabled;
-(CGRect)backgroundRectForBounds:(CGRect)arg1 ;
-(BOOL)_wantsContentBackdropView;
-(void)setTitleShadowOffset:(CGSize)arg1 ;
-(void)_refreshVisualElement;
-(BOOL)_hasDrawingStyle;
-(void)_updateContentBackdropView;
-(void)setCursorStyleProvider:(id)arg1 ;
-(void)_updateTitleViewStyleEffectConfiguration;
-(CGRect)_highlightBounds;
-(BOOL)_shouldSkipNormalLayoutForSakeOfTemplateLayout;
-(BOOL)_requiresLayoutForPropertyChange;
-(UIColor *)currentTitleColor;
-(void)_layoutContentBackdropView;
-(UIImage *)currentBackgroundImage;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)titleShadowOffset;
-(void)_updateBackgroundImageView;
-(NSAttributedString *)currentAttributedTitle;
@end
