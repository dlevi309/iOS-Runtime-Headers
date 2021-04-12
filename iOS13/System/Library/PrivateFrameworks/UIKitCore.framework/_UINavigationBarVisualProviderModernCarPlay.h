/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UINavigationBarVisualProvider.h>
#import <UIKitCore/_UIButtonBarAppearanceDelegate.h>
#import <UIKitCore/_UINavigationItemChangeObserver.h>

@class _UIBarButtonItemAppearanceStorage, UIView, _CarTitleView, _UIButtonBar, _UIButtonBarButton, NSLayoutConstraint, NSArray, UIVisualEffectView, UIFocusContainerGuide, NSString, UIColor;

@interface _UINavigationBarVisualProviderModernCarPlay : _UINavigationBarVisualProvider <_UIButtonBarAppearanceDelegate, _UINavigationItemChangeObserver> {

	BOOL _compactMetrics;
	BOOL _havePrepared;
	_UIBarButtonItemAppearanceStorage* _appearanceStorage;
	UIView* _contentView;
	_CarTitleView* _titleView;
	_UIButtonBar* _leadingBar;
	_UIButtonBar* _trailingBar;
	_UIButtonBarButton* _backBarButton;
	NSLayoutConstraint* _leadingBarConstraint;
	NSLayoutConstraint* _leadingBarNoItemsConstraint;
	NSLayoutConstraint* _trailingBarConstraint;
	NSLayoutConstraint* _trailingBarNoItemsConstraint;
	NSArray* _backButtonConstraints;
	NSLayoutConstraint* _largeTitleLeadingConstraint;
	NSLayoutConstraint* _largeTitleTrailingConstraint;
	NSLayoutConstraint* _regularTitleConstraint;
	NSLayoutConstraint* _leadingBarWithTitleTrailingConstraint;
	NSLayoutConstraint* _leadingBarWithNoTitleTrailingConstraint;
	NSLayoutConstraint* _trailingBarWithTitleLeadingConstraint;
	NSLayoutConstraint* _trailingBarWithNoTitleLeadingConstraint;
	UIVisualEffectView* _backgroundView;
	UIFocusContainerGuide* _focusContainerGuide;
	NSArray* _debugViews;

}

@property (assign,nonatomic) BOOL havePrepared;                                                         //@synthesize havePrepared=_havePrepared - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                      //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) _CarTitleView * titleView;                                                 //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) _UIButtonBar * leadingBar;                                                 //@synthesize leadingBar=_leadingBar - In the implementation block
@property (nonatomic,retain) _UIButtonBar * trailingBar;                                                //@synthesize trailingBar=_trailingBar - In the implementation block
@property (nonatomic,retain) _UIButtonBarButton * backBarButton;                                        //@synthesize backBarButton=_backBarButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingBarConstraint;                                 //@synthesize leadingBarConstraint=_leadingBarConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingBarNoItemsConstraint;                          //@synthesize leadingBarNoItemsConstraint=_leadingBarNoItemsConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingBarConstraint;                                //@synthesize trailingBarConstraint=_trailingBarConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingBarNoItemsConstraint;                         //@synthesize trailingBarNoItemsConstraint=_trailingBarNoItemsConstraint - In the implementation block
@property (nonatomic,retain) NSArray * backButtonConstraints;                                           //@synthesize backButtonConstraints=_backButtonConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * largeTitleLeadingConstraint;                          //@synthesize largeTitleLeadingConstraint=_largeTitleLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * largeTitleTrailingConstraint;                         //@synthesize largeTitleTrailingConstraint=_largeTitleTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * regularTitleConstraint;                               //@synthesize regularTitleConstraint=_regularTitleConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingBarWithTitleTrailingConstraint;                //@synthesize leadingBarWithTitleTrailingConstraint=_leadingBarWithTitleTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingBarWithNoTitleTrailingConstraint;              //@synthesize leadingBarWithNoTitleTrailingConstraint=_leadingBarWithNoTitleTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingBarWithTitleLeadingConstraint;                //@synthesize trailingBarWithTitleLeadingConstraint=_trailingBarWithTitleLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingBarWithNoTitleLeadingConstraint;              //@synthesize trailingBarWithNoTitleLeadingConstraint=_trailingBarWithNoTitleLeadingConstraint - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundView;                                       //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIFocusContainerGuide * focusContainerGuide;                               //@synthesize focusContainerGuide=_focusContainerGuide - In the implementation block
@property (nonatomic,retain) NSArray * debugViews;                                                      //@synthesize debugViews=_debugViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) _UIBarButtonItemAppearanceStorage * appearanceStorage;                   //@synthesize appearanceStorage=_appearanceStorage - In the implementation block
@property (nonatomic,readonly) long long barType; 
@property (nonatomic,readonly) BOOL compactMetrics;                                                     //@synthesize compactMetrics=_compactMetrics - In the implementation block
@property (nonatomic,readonly) BOOL isRTL; 
@property (nonatomic,readonly) BOOL barWantsLetterpress; 
@property (nonatomic,readonly) UIColor * tintColor; 
@property (nonatomic,readonly) BOOL centerTextButtons; 
@property (nonatomic,readonly) double defaultEdgeSpacing; 
@property (nonatomic,readonly) double defaultTextPadding; 
@property (nonatomic,readonly) double backButtonMargin; 
@property (nonatomic,readonly) double backButtonMaximumWidth; 
-(void)teardown;
-(BOOL)isRTL;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIVisualEffectView *)backgroundView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)tintColor;
-(_UIBarButtonItemAppearanceStorage *)appearanceStorage;
-(id)backIndicatorImage;
-(id)backIndicatorMaskImage;
-(BOOL)barWantsLetterpress;
-(BOOL)centerTextButtons;
-(unsigned long long)edgesPaddingBarButtonItem:(id)arg1 ;
-(BOOL)compactMetrics;
-(long long)barType;
-(double)backButtonMargin;
-(double)defaultEdgeSpacing;
-(double)absorptionForItem:(id)arg1 ;
-(double)defaultTextPadding;
-(double)backButtonMaximumWidth;
-(long long)barMetrics;
-(_CarTitleView *)titleView;
-(void)setTitleView:(_CarTitleView *)arg1 ;
-(void)changeAppearance;
-(void)prepare;
-(void)updateTopNavigationItemAnimated:(BOOL)arg1 ;
-(void)setupTopNavigationItem;
-(void)prepareForPush;
-(void)pushAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareForPop;
-(void)popAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)animateForSearchPresentation:(BOOL)arg1 ;
-(void)presentHostedSearchWithTransitionCoordinator:(id)arg1 ;
-(void)dismissHostedSearchWithTransitionCoordinator:(id)arg1 ;
-(void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3 ;
-(BOOL)navigationItemIsTopItem:(id)arg1 ;
-(void)navigationItemUpdatedTitleContent:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)navigationItemIsBackItem:(id)arg1 ;
-(void)navigationItemUpdatedBackButtonContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationItemUpdatedLargeTitleContent:(id)arg1 ;
-(void)navigationItemUpdatedLargeTitleDisplayMode:(id)arg1 ;
-(void)navigationItemUpdatedBackgroundAppearance:(id)arg1 ;
-(void)navigationItem:(id)arg1 appearance:(id)arg2 categoriesChanged:(long long)arg3 ;
-(void)navigationItemUpdatedPromptContent:(id)arg1 ;
-(void)navigationItemUpdatedContentLayout:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationItemUpdatedLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationItemUpdatedRightBarButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationItemUpdatedSearchController:(id)arg1 oldSearchController:(id)arg2 ;
-(void)navigationItemUpdatedScrollEdgeProgress:(id)arg1 ;
-(void)navigationItemUpdatedBottomPalette:(id)arg1 oldPalette:(id)arg2 ;
-(void)navigationItemUpdatedCanvasView:(id)arg1 ;
-(void)stackDidChangeFrom:(id)arg1 ;
-(_UIButtonBar *)leadingBar;
-(void)setLeadingBar:(_UIButtonBar *)arg1 ;
-(_UIButtonBar *)trailingBar;
-(void)setTrailingBar:(_UIButtonBar *)arg1 ;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(UIFocusContainerGuide *)focusContainerGuide;
-(void)setFocusContainerGuide:(UIFocusContainerGuide *)arg1 ;
-(BOOL)havePrepared;
-(void)setHavePrepared:(BOOL)arg1 ;
-(void)_configureBackground;
-(void)__backButtonAction;
-(void)setBackBarButton:(_UIButtonBarButton *)arg1 ;
-(_UIButtonBarButton *)backBarButton;
-(void)setLeadingBarConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLeadingBarNoItemsConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTrailingBarNoItemsConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBackButtonConstraints:(NSArray *)arg1 ;
-(void)setLargeTitleLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLargeTitleTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRegularTitleConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLeadingBarWithTitleTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLeadingBarWithNoTitleTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTrailingBarWithTitleLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTrailingBarWithNoTitleLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)leadingBarConstraint;
-(NSLayoutConstraint *)leadingBarWithTitleTrailingConstraint;
-(NSLayoutConstraint *)regularTitleConstraint;
-(NSLayoutConstraint *)trailingBarWithTitleLeadingConstraint;
-(NSArray *)debugViews;
-(void)setDebugViews:(NSArray *)arg1 ;
-(void)setTrailingBarConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 direction:(unsigned long long)arg3 ;
-(void)_updateContentForTopItem:(id)arg1 backItem:(id)arg2 animated:(BOOL)arg3 direction:(unsigned long long)arg4 ;
-(NSLayoutConstraint *)leadingBarWithNoTitleTrailingConstraint;
-(NSLayoutConstraint *)trailingBarWithNoTitleLeadingConstraint;
-(NSLayoutConstraint *)leadingBarNoItemsConstraint;
-(NSLayoutConstraint *)trailingBarNoItemsConstraint;
-(NSArray *)backButtonConstraints;
-(NSLayoutConstraint *)largeTitleLeadingConstraint;
-(NSLayoutConstraint *)largeTitleTrailingConstraint;
-(void)_installGradientLayerMaskForClippingView:(id)arg1 ;
-(id)defaultFontDescriptor;
-(NSLayoutConstraint *)trailingBarConstraint;
@end

