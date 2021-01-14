/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIButtonBarButtonVisualProvider.h>

@protocol _UIButtonBarAppearanceDelegate;
@class NSMutableDictionary, UIButton, _UIBackButtonMaskView, _UIModernBarButton, UIImageView, NSArray, UIColor, NSLayoutConstraint;

@interface _UIButtonBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider {

	NSMutableDictionary* _currentConstraints;
	NSMutableDictionary* _oldConstraints;
	UIButton* _backIndicatorButton;
	_UIBackButtonMaskView* _backButtonMask;
	_UIModernBarButton* _titleButton;
	_UIModernBarButton* _imageButton;
	UIImageView* _backgroundView;
	id<_UIButtonBarAppearanceDelegate> _appearanceDelegate;
	NSArray* _barButtonTitleAttributes;
	NSArray* _finalTitleAttributes;
	UIColor* _tintColor;
	NSMutableDictionary* _backgroundImages;
	NSArray* _titleContent;
	NSMutableDictionary* _titleLookup;
	NSLayoutConstraint* _backButtonTitleMaxWidthConstraint;
	/*^block*/id _menuProvider;
	long long _systemItem;
	struct {
		unsigned imageHasBaseline : 1;
		unsigned backButtonMaskEnabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
	}  _flags;

}
-(void)_setTitle:(id)arg1 ;
-(id)backgroundImageView;
-(void)_addHorizontalConstraintsForTextWithOffset:(double)arg1 additionalPadding:(UIEdgeInsets)arg2 ;
-(void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3 ;
-(id)contentCursorInContainer:(id)arg1 ;
-(id)matchingPointerShapeForView:(id)arg1 rect:(CGRect)arg2 inContainer:(id)arg3 ;
-(void)_updateViewsForMaskingEnabled;
-(double)_defaultPaddingForInsets:(UIEdgeInsets)arg1 ;
-(void)activateHeightMinimizer;
-(BOOL)shouldLift;
-(void)_addVerticalConstraintsForTextWithOffset:(double)arg1 ;
-(BOOL)supportsBackButtons;
-(UIOffset)titlePositionOffsetForCompact:(BOOL)arg1 ;
-(void)buttonLayoutSubviews:(id)arg1 baseImplementation:(/*^block*/id)arg2 ;
-(id)backButtonBackgroundImageForState:(unsigned long long)arg1 compact:(BOOL)arg2 ;
-(id)_backIndicatorMaskSymbolConfigurationForCompact:(BOOL)arg1 ;
-(id)backIndicatorView;
-(BOOL)useLocalPointerInteraction;
-(UIEdgeInsets)_imageInsetsForBarButtonItem:(id)arg1 compact:(BOOL)arg2 isBackButton:(BOOL)arg3 ;
-(void)activateWidthMinimizer;
-(id)_backIndicatorMaskForCompact:(BOOL)arg1 ;
-(BOOL)buttonSelectionState:(id)arg1 forRequestedState:(BOOL)arg2 ;
-(void)_computeTextAttributes;
-(BOOL)shouldButtonAdjustToTraitCollection:(id)arg1 ;
-(void)pointerWillExit:(id)arg1 ;
-(id)symbolConfigurationCompact:(BOOL)arg1 ;
-(id)pointerPreviewParameters;
-(void)updateButton:(id)arg1 forHighlightedState:(BOOL)arg2 ;
-(UIOffset)backButtonBackgroundVerticalAdjustmentForCompact:(BOOL)arg1 ;
-(void)configureButton:(id)arg1 fromBarButtonItem:(id)arg2 ;
-(void)_addVerticalConstraintsForBackIndicatorWithTitleOffset:(double)arg1 bottomOffset:(double)arg2 useBaselineAlignment:(BOOL)arg3 ;
-(void)_configureBackButtonMask;
-(void)_computeTextAttributesForBarButtonItem:(id)arg1 ;
-(void)_setupAlternateTitles;
-(void)updateButton:(id)arg1 appearance:(id)arg2 ;
-(id)buttonContextMenuInteractionConfiguration;
-(id)buttonContextMenuStyleFromDefaultStyle:(id)arg1 ;
-(void)traitCollectionChangedInSubtreeFrom:(id)arg1 to:(id)arg2 ;
-(void)addActiveConstraint:(id)arg1 named:(id)arg2 ;
-(void)_configureImageOrTitleCompact:(BOOL)arg1 ;
-(BOOL)backButtonMaskEnabled;
-(void)resetButtonHasHighlighted;
-(id)alignmentViewForStaticNavBarButtonTrailing;
-(void)_configureBackButtonWithBackButtonLayoutInsets:(NSDirectionalEdgeInsets)arg1 useBaselineAlignment:(BOOL)arg2 ;
-(UIOffset)backgroundVerticalAdjustmentForCompact:(BOOL)arg1 ;
-(void)pointerWillEnter:(id)arg1 ;
-(void)_addVerticalConstraintsForImageWithInsets:(UIEdgeInsets)arg1 ;
-(void)updateActiveConstraints:(/*^block*/id)arg1 ;
-(id)backgroundImageForState:(unsigned long long)arg1 compact:(BOOL)arg2 ;
-(void)_configureTextBackButtonWithTitlePositionAdjustment:(UIOffset)arg1 backButtonLayoutInsets:(NSDirectionalEdgeInsets)arg2 useBaselineAlignment:(BOOL)arg3 ;
-(UIOffset)backButtonTitlePositionOffsetForCompact:(BOOL)arg1 ;
-(void)_configureTextWithOffset:(UIOffset)arg1 additionalPadding:(UIEdgeInsets)arg2 ;
-(UIEdgeInsets)_insetsForCompact:(BOOL)arg1 ;
-(id)textButton;
-(void)_removeTitleButton;
-(id)_backIndicatorImageForCompact:(BOOL)arg1 ;
-(id)_backIndicatorSymbolConfigurationForCompact:(BOOL)arg1 ;
-(void)_addHorizontalConstraintsForContentButton:(id)arg1 titleOffset:(double)arg2 backButtonLayoutInsets:(NSDirectionalEdgeInsets)arg3 ;
-(double)_defaultBackIndicatorBaselineInsetCompact:(BOOL)arg1 ;
-(void)updateButton:(id)arg1 forSelectedState:(BOOL)arg2 ;
-(id)contentView;
-(void)_configureImageBackButtonWithImageInsets:(UIEdgeInsets)arg1 backButtonLayoutInsets:(NSDirectionalEdgeInsets)arg2 useBaselineAlignment:(BOOL)arg3 ;
-(BOOL)canUpdateMenuInPlace;
-(void)_addHorizontalConstraintsForImageWithInsets:(UIEdgeInsets)arg1 paddingEdges:(unsigned long long)arg2 additionalPadding:(double)arg3 ;
-(id)pointerShapeInContainer:(id)arg1 ;
-(void)_configureImageWithInsets:(UIEdgeInsets)arg1 paddingEdges:(unsigned long long)arg2 additionalPadding:(double)arg3 ;
-(void)setBackButtonMaskEnabled:(BOOL)arg1 ;
-(void)_prepareBackgroundViewFromBarButtonItem:(id)arg1 isBackButton:(BOOL)arg2 ;
-(void)_addConstraintsForBackgroundViewWithOffset:(double)arg1 isBackButton:(BOOL)arg2 resizesImage:(BOOL)arg3 ;
-(void)updateButton:(id)arg1 forEnabledState:(BOOL)arg2 ;
-(id)tintColor;
-(id)buttonContextMenuTargetedPreview;
-(id)_titleContentForTitle:(id)arg1 ;
-(CGPoint)menuAnchorPoint;
-(void)updateMenu;
-(id)buttonSpringLoadedInteractionEffect;
-(id)alignmentViewForStaticNavBarButtonLeading;
-(id)imageButton;
@end

