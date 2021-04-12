/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIButtonBarButtonVisualProvider.h>

@protocol _UIButtonBarAppearanceDelegate;
@class NSMutableDictionary, UIButton, _UIBackButtonContainerView, _UIModernBarButton, UIImageView, NSArray, UIColor, NSLayoutConstraint;

@interface _UIButtonBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider {

	NSMutableDictionary* _currentConstraints;
	NSMutableDictionary* _oldConstraints;
	UIButton* _backIndicatorButton;
	_UIBackButtonContainerView* _titleContainer;
	_UIModernBarButton* _titleButton;
	_UIModernBarButton* _imageButton;
	UIImageView* _backgroundImage;
	UIImageView* _selectedImage;
	id<_UIButtonBarAppearanceDelegate> _appearanceDelegate;
	NSArray* _barButtonTitleAttributes;
	NSArray* _finalTitleAttributes;
	UIColor* _tintColor;
	NSMutableDictionary* _backgroundImages;
	NSArray* _titleContent;
	NSMutableDictionary* _titleLookup;
	NSLayoutConstraint* _backButtonTitleMaxWidthConstraint;
	long long _systemItem;
	struct {
		unsigned imageHasBaseline : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL backButtonMaskEnabled; 
-(id)contentView;
-(id)tintColor;
-(void)_setTitle:(id)arg1 ;
-(id)pointerPreviewParameters;
-(BOOL)shouldLift;
-(id)pointerShapeInContainer:(id)arg1 ;
-(id)matchingPointerShapeForView:(id)arg1 rect:(CGRect)arg2 inContainer:(id)arg3 ;
-(void)pointerWillEnter:(id)arg1 ;
-(void)pointerWillExit:(id)arg1 ;
-(BOOL)useLocalPointerInteraction;
-(BOOL)supportsBackButtons;
-(id)backIndicatorView;
-(BOOL)buttonSelectionState:(id)arg1 forRequestedState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forSelectedState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forHighlightedState:(BOOL)arg2 ;
-(void)updateButton:(id)arg1 forEnabledState:(BOOL)arg2 ;
-(void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3 ;
-(void)updateButton:(id)arg1 appearance:(id)arg2 ;
-(void)buttonLayoutSubviews:(id)arg1 baseImplementation:(/*^block*/id)arg2 ;
-(void)button:(id)arg1 traitCollectionDidChange:(id)arg2 ;
-(void)resetButtonHasHighlighted;
-(id)contentCursorInContainer:(id)arg1 ;
-(id)_imageWithActiveStylesFromImage:(id)arg1 tintColor:(id)arg2 ;
-(void)_computeTextAttributes;
-(void)_removeTitleButton;
-(id)symbolConfigurationCompact:(BOOL)arg1 ;
-(id)backButtonBackgroundImageForState:(unsigned long long)arg1 compact:(BOOL)arg2 ;
-(id)backgroundImageForState:(unsigned long long)arg1 compact:(BOOL)arg2 ;
-(UIOffset)backButtonBackgroundVerticalAdjustmentForCompact:(BOOL)arg1 ;
-(void)_addConstraintsForBackgroundImageWithOffset:(double)arg1 isBackButton:(BOOL)arg2 resizesImage:(BOOL)arg3 ;
-(void)addActiveConstraint:(id)arg1 named:(id)arg2 ;
-(UIOffset)backgroundVerticalAdjustmentForCompact:(BOOL)arg1 ;
-(void)configureButton:(id)arg1 fromBarButtonItem:(id)arg2 ;
-(void)activateWidthMinimizer;
-(double)_defaultPaddingForInsets:(UIEdgeInsets)arg1 ;
-(void)activateHeightMinimizer;
-(void)_addHorizontalConstraintsForImageWithInsets:(UIEdgeInsets)arg1 paddingEdges:(unsigned long long)arg2 additionalPadding:(double)arg3 ;
-(void)_addVerticalConstraintsForImageWithInsets:(UIEdgeInsets)arg1 ;
-(void)_addHorizontalConstraintsForTextWithOffset:(double)arg1 additionalPadding:(UIEdgeInsets)arg2 ;
-(void)_addVerticalConstraintsForTextWithOffset:(double)arg1 ;
-(void)_addHorizontalConstraintsForContentButton:(id)arg1 titleOffset:(double)arg2 backButtonLayoutInsets:(NSDirectionalEdgeInsets)arg3 ;
-(void)_addVerticalConstraintsForBackIndicatorWithTitleOffset:(double)arg1 backButtonLayoutInsets:(NSDirectionalEdgeInsets)arg2 ;
-(id)_titleContentForTitle:(id)arg1 ;
-(void)_computeTextAttributesForBarButtonItem:(id)arg1 ;
-(void)_configureImageOrTitleFromBarButtonItem:(id)arg1 compact:(BOOL)arg2 ;
-(id)_backIndicatorImageForCompact:(BOOL)arg1 ;
-(id)_backIndicatorMaskForCompact:(BOOL)arg1 ;
-(UIEdgeInsets)_insetsForCompact:(BOOL)arg1 ;
-(double)_defaultBackIndicatorBaselineInsetCompact:(BOOL)arg1 ;
-(UIEdgeInsets)_imageInsetsForBarButtonItem:(id)arg1 compact:(BOOL)arg2 isBackButton:(BOOL)arg3 ;
-(void)_configureImageBackButtonWithImageInsets:(UIEdgeInsets)arg1 backButtonLayoutInsets:(NSDirectionalEdgeInsets)arg2 ;
-(UIOffset)backButtonTitlePositionOffsetForCompact:(BOOL)arg1 ;
-(void)_configureTextBackButtonWithTitlePositionAdjustment:(UIOffset)arg1 backButtonLayoutInsets:(NSDirectionalEdgeInsets)arg2 ;
-(void)_setupAlternateTitlesFromBarButtonItem:(id)arg1 ;
-(void)_configureBackButtonWithBackButtonLayoutInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)_configureImageWithInsets:(UIEdgeInsets)arg1 paddingEdges:(unsigned long long)arg2 additionalPadding:(double)arg3 ;
-(UIOffset)titlePositionOffsetForCompact:(BOOL)arg1 ;
-(void)_configureTextWithOffset:(UIOffset)arg1 additionalPadding:(UIEdgeInsets)arg2 ;
-(void)_configureBackgroundFromBarButtonItem:(id)arg1 isBackButton:(BOOL)arg2 ;
-(void)updateActiveConstraints:(/*^block*/id)arg1 ;
-(void)setBackButtonMaskEnabled:(BOOL)arg1 ;
-(BOOL)backButtonMaskEnabled;
-(id)textButton;
-(id)imageButton;
-(id)backgroundImageView;
@end

