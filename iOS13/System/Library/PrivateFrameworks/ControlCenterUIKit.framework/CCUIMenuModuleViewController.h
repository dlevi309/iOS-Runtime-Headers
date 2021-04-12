/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>

@class UILabel, UIView, MTMaterialView, MTVisualStylingProvider, UIStackView, NSMutableArray, NSMutableDictionary, UIScrollView, UIActivityIndicatorView, UILongPressGestureRecognizer, UISelectionFeedbackGenerator, CCUIMenuModuleItemView, CCUIContentModuleContext, NSString, UIViewPropertyAnimator;

@interface CCUIMenuModuleViewController : CCUIButtonModuleViewController <UIGestureRecognizerDelegate, CCUIContentModuleContentViewController> {

	UILabel* _titleLabel;
	UIView* _transformView;
	UIView* _headerSeparatorView;
	UIView* _footerSeparatorView;
	MTMaterialView* _platterMaterialView;
	MTVisualStylingProvider* _visualStylingProvider;
	UIStackView* _menuItemsContainer;
	NSMutableArray* _menuItems;
	NSMutableDictionary* _identiferToActivityIndicatorView;
	UIScrollView* _contentScrollView;
	UIView* _darkeningBackgroundView;
	UIActivityIndicatorView* _busyIndicatorView;
	UILongPressGestureRecognizer* _pressGestureRecognizer;
	UISelectionFeedbackGenerator* _feedbackGenerator;
	BOOL _allowsMenuInteraction;
	BOOL _ignoreMenuItemAtTouchLocationAfterExpanded;
	CGPoint _touchLocationToIgnore;
	CCUIMenuModuleItemView* _footerButtonView;
	BOOL _shouldShowFooterButton;
	BOOL _busy;
	BOOL _shouldProvideOwnPlatter;
	BOOL _useTrailingCheckmarkLayout;
	BOOL _useTrailingInset;
	BOOL _useTallLayout;
	UIView* _contentView;
	unsigned long long _minimumMenuItems;
	double _visibleMenuItems;
	unsigned long long _indentation;
	CCUIContentModuleContext* _contentModuleContext;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) unsigned long long actionsCount; 
@property (nonatomic,readonly) unsigned long long menuItemCount; 
@property (nonatomic,readonly) double headerHeight; 
@property (nonatomic,readonly) UIView * contentView;                                              //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) BOOL hasFooterButton; 
@property (assign,nonatomic) unsigned long long minimumMenuItems;                                 //@synthesize minimumMenuItems=_minimumMenuItems - In the implementation block
@property (assign,nonatomic) double visibleMenuItems;                                             //@synthesize visibleMenuItems=_visibleMenuItems - In the implementation block
@property (assign,nonatomic) unsigned long long indentation;                                      //@synthesize indentation=_indentation - In the implementation block
@property (assign,getter=isBusy,nonatomic) BOOL busy;                                             //@synthesize busy=_busy - In the implementation block
@property (assign,nonatomic) BOOL shouldProvideOwnPlatter;                                        //@synthesize shouldProvideOwnPlatter=_shouldProvideOwnPlatter - In the implementation block
@property (assign,nonatomic) BOOL useTrailingCheckmarkLayout;                                     //@synthesize useTrailingCheckmarkLayout=_useTrailingCheckmarkLayout - In the implementation block
@property (assign,nonatomic) BOOL useTrailingInset;                                               //@synthesize useTrailingInset=_useTrailingInset - In the implementation block
@property (assign,nonatomic) BOOL useTallLayout;                                                  //@synthesize useTallLayout=_useTallLayout - In the implementation block
@property (assign,nonatomic,__weak) CCUIContentModuleContext * contentModuleContext;              //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
+(id)checkmarkImage;
-(void)dealloc;
-(void)removeAllActions;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isBusy;
-(UIView *)contentView;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)_updatePreferredContentSize;
-(BOOL)_canShowWhileLocked;
-(id)_titleFont;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(double)_separatorHeight;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)_handlePressGesture:(id)arg1 ;
-(void)setMenuItems:(id)arg1 ;
-(double)headerHeight;
-(double)_footerHeight;
-(unsigned long long)actionsCount;
-(unsigned long long)indentation;
-(id)viewForTouchContinuation;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(void)setGlyphImage:(id)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)_setupTitleLabel;
-(double)_maximumHeight;
-(void)setGlyphPackageDescription:(id)arg1 ;
-(double)preferredExpandedContentHeight;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)didTransitionToExpandedContentMode:(BOOL)arg1 ;
-(double)preferredExpandedContentWidth;
-(void)contentModuleWillTransitionToExpandedContentMode:(BOOL)arg1 ;
-(id)_busyIndicatorView;
-(void)addActionWithTitle:(id)arg1 subtitle:(id)arg2 glyph:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)setIndentation:(unsigned long long)arg1 ;
-(void)setUseTrailingCheckmarkLayout:(BOOL)arg1 ;
-(void)setUseTrailingInset:(BOOL)arg1 ;
-(void)_updateMenuItemsTallness;
-(void)_updateMenuItemsSeparatorVisiblity;
-(id)_menuItemFromPlaceholderIndex:(unsigned long long)arg1 ;
-(void)_setMenuItems:(id)arg1 ;
-(id)_leadingViewForMenuItem:(id)arg1 ;
-(id)_trailingViewForMenuItem:(id)arg1 ;
-(BOOL)useTrailingCheckmarkLayout;
-(id)leadingImageForMenuItem:(id)arg1 ;
-(id)leadingViewForMenuItem:(id)arg1 ;
-(id)trailingImageForMenuItem:(id)arg1 ;
-(id)trailingViewForMenuItem:(id)arg1 ;
-(double)preferredExpandedContentHeightWithWidth:(double)arg1 ;
-(void)setUseTallLayout:(BOOL)arg1 ;
-(double)headerHeightForWidth:(double)arg1 ;
-(double)_titleWidthForContainerWidth:(double)arg1 ;
-(BOOL)_shouldLimitContentSizeCategory;
-(void)_fadeViewsForExpandedState:(BOOL)arg1 ;
-(void)_setupRootView;
-(void)_layoutViewSubviews;
-(void)_layoutGlyphViewForSize:(CGSize)arg1 ;
-(void)_layoutTransformViewForSize:(CGSize)arg1 ;
-(void)_layoutTitleLabelForSize:(CGSize)arg1 ;
-(void)_layoutBusyIndicatorForSize:(CGSize)arg1 ;
-(void)_layoutHeaderSeparatorForSize:(CGSize)arg1 ;
-(void)_layoutContentViewForSize:(CGSize)arg1 ;
-(void)_layoutFooterSeparatorForSize:(CGSize)arg1 ;
-(void)_layoutFooterButtonForSize:(CGSize)arg1 ;
-(double)_desiredExpandedHeight;
-(double)scrollViewContentHeightForWidth:(double)arg1 ;
-(unsigned long long)menuItemCount;
-(void)_updateTitleFont;
-(BOOL)_shouldShowFooterSeparator;
-(double)_menuItemsHeightForWidth:(double)arg1 ;
-(BOOL)useTallLayout;
-(BOOL)_toggleSelectionForMenuItem:(id)arg1 ;
-(void)_handleActionTapped:(id)arg1 ;
-(double)_defaultMenuItemHeight;
-(double)visibleMenuItems;
-(BOOL)_shouldShowFooterChin;
-(void)setBusy:(BOOL)arg1 ;
-(void)addActionWithTitle:(id)arg1 glyph:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)menuItemForIdentifier:(id)arg1 ;
-(void)setUseIndentedLayout:(BOOL)arg1 ;
-(void)setFooterButtonTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeFooterButton;
-(BOOL)hasFooterButton;
-(void)scrollToTop:(BOOL)arg1 ;
-(double)_contentScaleForSize:(CGSize)arg1 ;
-(id)_preferredFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2 ;
-(unsigned long long)minimumMenuItems;
-(void)setMinimumMenuItems:(unsigned long long)arg1 ;
-(void)setVisibleMenuItems:(double)arg1 ;
-(BOOL)shouldProvideOwnPlatter;
-(void)setShouldProvideOwnPlatter:(BOOL)arg1 ;
-(BOOL)useTrailingInset;
-(CCUIContentModuleContext *)contentModuleContext;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
@end

