/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UINavigationBarVisualProvider.h>
#import <UIKitCore/_UIBasicAnimationFactory.h>
#import <UIKitCore/_UINavigationBarGestureHandlerDelegate.h>

@protocol UIViewControllerTransitionCoordinator;
@class _UIBarBackground, _UIBarBackgroundLayoutLegacy, UIView, NSArray, UIImageView, _UINavBarPrompt, _UINavigationBarGestureHandler, NSMutableArray, _UINavigationBarLegacyContentView, UILayoutGuide, NSLayoutConstraint, UIFocusContainerGuide, NSString;

@interface _UINavigationBarVisualProviderLegacyIOS : _UINavigationBarVisualProvider <_UIBasicAnimationFactory, _UINavigationBarGestureHandlerDelegate> {

	_UIBarBackground* _backgroundView;
	_UIBarBackgroundLayoutLegacy* _backgroundViewLayout;
	UIView* _customBackgroundView;
	UIView* _currentCanvasView;
	UIView* _titleView;
	NSArray* _leftViews;
	NSArray* _rightViews;
	UIImageView* _backIndicatorView;
	_UINavBarPrompt* _prompt;
	_UINavigationBarGestureHandler* _gestureHandler;
	NSMutableArray* _slideTransitionClippingViews;
	id<UIViewControllerTransitionCoordinator> _transitionCoordinator;
	_UINavigationBarLegacyContentView* _layoutView;
	UIView* _contentView;
	UILayoutGuide* _userContentGuide;
	NSLayoutConstraint* _userContentGuideLeading;
	NSLayoutConstraint* _userContentGuideTrailing;
	UIFocusContainerGuide* _contentFocusContainerGuide;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateBackground;
-(double)_shim_shadowAlpha;
-(double)_shim_backgroundHeight;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)_shim_pressBackIndicator:(BOOL)arg1 initialPress:(BOOL)arg2 ;
-(id)preferredFocusedView;
-(void)pushAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateTopNavigationItemAnimated:(BOOL)arg1 ;
-(void)_completeTopItemTransitionWithIncomingViews:(id)arg1 outgoingViews:(id)arg2 previousLeftViews:(id)arg3 previousRightViews:(id)arg4 enableUserInteraction:(id)arg5 transitionAssistant:(id)arg6 ;
-(id)_effectiveBackIndicatorTransitionMaskImage;
-(void)prepareForPop;
-(void)_getLeftMargin:(double*)arg1 rightMargin:(double*)arg2 forNavigationItem:(id)arg3 showingBackButton:(BOOL)arg4 visualStyle:(id)arg5 ;
-(double)_backIndicatorClippingMargin;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)_layoutSubviewsFromContentView;
-(id)_shim_compatibilityBackgroundView;
-(void)_getTitleViewFrame:(CGRect*)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forPreviousItem:(id)arg4 item:(id)arg5 returnedIdealWidthOfTextContent:(double*)arg6 availableLayoutWidthForTextContent:(double*)arg7 idealBackButtonWidth:(double*)arg8 ;
-(BOOL)shouldUseHeightRangeFittingWidth;
-(void)_layoutInBounds:(CGRect)arg1 withVisualStyle:(id)arg2 ;
-(id)_shim_userContentGuide;
-(BOOL)canHandleStatusBarTouchAtPoint:(CGPoint)arg1 ;
-(void)_popForTouchAtPoint:(CGPoint)arg1 ;
-(void)_updateBackIndicatorViewTintColor;
-(void)_wrapView:(id)arg1 inClippingViewWithLeftBoundary:(double)arg2 rightBoundary:(double)arg3 leftMaskImage:(id)arg4 leftMaskIsChevron:(BOOL)arg5 rightMaskImage:(id)arg6 ;
-(void)barSizeChanged;
-(void)_shim_setDisableBlurTinting:(BOOL)arg1 ;
-(void)_shim_updateBackgroundViewIgnoringFlag;
-(void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3 ;
-(void)_shim_touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_setUpContentFocusContainerGuide;
-(BOOL)_shim_disableBlurTinting;
-(void)_setViewsAnimated:(BOOL)arg1 forTopNavigationItem:(id)arg2 backNavigationItem:(id)arg3 previousTopItem:(id)arg4 ;
-(void)_shim_touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_startPushAnimationFromOldBackItem:(id)arg1 oldTopItem:(id)arg2 newBackItem:(id)arg3 newTopItem:(id)arg4 withTransitionAssistant:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)_shim_promptText;
-(void)_updateBackIndicatorImage;
-(id)_defaultTitleFontForItem:(id)arg1 fittingHeight:(double)arg2 withScaleAdjustment:(double)arg3 ;
-(BOOL)shouldGestureHandler:(id)arg1 recognizedPopAtLocation:(CGPoint)arg2 ;
-(id)_shim_layoutView;
-(void)_startPopAnimationFromOldBackItem:(id)arg1 oldTopItem:(id)arg2 newBackItem:(id)arg3 newTopItem:(id)arg4 withTransitionAssistant:(id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)_shouldPopForTouchAtPoint:(CGPoint)arg1 ;
-(id)_shim_customHitTest:(CGPoint)arg1 forView:(id)arg2 ;
-(BOOL)_shim_wantsCustomTouchHandlingForTouches:(id)arg1 ;
-(void)prepareForPush;
-(BOOL)_shouldShowBackButtonForNavigationItem:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)_prepareTransitionFromItem:(id)arg1 toItem:(id)arg2 ;
-(id)_effectiveBackIndicatorImage;
-(double)_backTitleWidthOverTitleWidthForMatchingBackButtonView:(id)arg1 titleView:(id)arg2 withBackButtonWidth:(double)arg3 ;
-(BOOL)_shim_throwConstraintExceptions;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)_shim_30244716;
-(void)_shim_popForCarplayPressAtFakePoint:(CGPoint)arg1 ;
-(void)_shim_setUseContentView:(BOOL)arg1 ;
-(void)_handleMouseDownAtPoint:(CGPoint)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 defaultAnswer:(/*^block*/id)arg2 ;
-(void)_shim_updateUserContentGuideForTopItem:(id)arg1 backItem:(id)arg2 ;
-(BOOL)_supportsCanvasView;
-(id)_shim_displayViewsIncludingHiddenBackButtonViews:(BOOL)arg1 ;
-(void)_shim_setShadowAlpha:(double)arg1 ;
-(double)_effectiveBackIndicatorLeftMargin;
-(void)setupTopNavigationItem;
-(void)popAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_completeTransitionFromCanvasView:(id)arg1 toCanvasView:(id)arg2 updateSize:(BOOL)arg3 transitionAssistant:(id)arg4 ;
-(void)intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)teardown;
-(void)setBackButtonVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGRect)_contentViewFrameInBounds:(CGRect)arg1 style:(id)arg2 ;
-(void)updateArchivedSubviews:(id)arg1 ;
-(void)_handleMouseUpAtPoint:(CGPoint)arg1 ;
-(void)_completeNavigationTransitionWithIncomingViews:(id)arg1 outgoingViews:(id)arg2 transitionAssistant:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_shim_contentView;
-(long long)statusBarStyle;
-(long long)_shim_backdropStyle;
-(id)_navigationItemAtPoint:(CGPoint)arg1 ;
-(unsigned long long)_subviewIndexAboveBackground;
-(id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)_shim_setCustomBackgroundView:(id)arg1 ;
-(BOOL)_suppressBackIndicator;
-(id)backButtonViewAtPoint:(CGPoint)arg1 ;
-(void)updateTopNavigationItemTitleView;
-(void)_shim_touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_shim_setPromptText:(id)arg1 animated:(BOOL)arg2 ;
-(void)_shim_updateBackIndicator;
-(void)changeAppearance;
-(id)_shim_backIndicatorView;
-(id)_backButtonForBackItem:(id)arg1 topItem:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)_shim_34415965;
-(void)prepare;
-(void)gestureHandler:(id)arg1 recognizedPopAtLocation:(CGPoint)arg2 ;
-(void)_getTitleViewFrame:(CGRect*)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forPreviousItem:(id)arg4 item:(id)arg5 ;
-(void)updateBackgroundGroupName;
-(CGSize)_preferredContentSizeForItem:(id)arg1 ;
-(BOOL)_performCanvasViewTransitionFromItem:(id)arg1 toItem:(id)arg2 ;
-(CGRect)_frameForCanvasView:(id)arg1 inBounds:(CGRect)arg2 ;
-(void)_shim_touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)frameOriginForStatusBarLocatedAt:(CGPoint)arg1 ;
@end

