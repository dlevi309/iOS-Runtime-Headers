/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <OnBoardingKit/OBBaseWelcomeController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/_UIScrollViewLayoutObserver.h>
#import <libobjc.A.dylib/OBNavigationBarTitleTransistor.h>

@class OBHeaderView, OBContentView, UIView, OBButtonTray, UIScrollView, NSLayoutConstraint, OBBulletedList, OBNavigationBarDisplayState, UINavigationController, NSString;

@interface OBWelcomeController : OBBaseWelcomeController <UIScrollViewDelegate, _UIScrollViewLayoutObserver, OBNavigationBarTitleTransistor> {

	BOOL _darkMode;
	BOOL _scrollingDisabled;
	BOOL __shouldInlineButtontray;
	BOOL _shouldAdjustScrollViewInsetForKeyboard;
	BOOL _shouldAdjustButtonTrayForKeyboard;
	BOOL _includePaddingAboveContentView;
	OBHeaderView* _headerView;
	OBContentView* _contentView;
	UIView* _secondaryContentView;
	OBButtonTray* _buttonTray;
	long long _contentViewLayout;
	UIView* _bleedView;
	UIScrollView* _scrollView;
	UIView* _scrollContentView;
	UIView* _buttonTrayScrollContainerView;
	NSLayoutConstraint* _headerTopOffsetConstraint;
	NSLayoutConstraint* _contentViewTopOffsetConstraint;
	NSLayoutConstraint* _contentViewHeightConstraint;
	NSLayoutConstraint* _secondaryContentViewTopOffsetConstraint;
	OBBulletedList* _bulletedList;
	unsigned long long _templateType;
	OBNavigationBarDisplayState* _cachedBarState;
	UINavigationController* _retainedNavigationController;
	double _availableContentViewHeight;
	CGRect _keyboardFrame;

}

@property (assign,nonatomic) long long contentViewLayout;                                               //@synthesize contentViewLayout=_contentViewLayout - In the implementation block
@property (nonatomic,retain) UIView * bleedView;                                                        //@synthesize bleedView=_bleedView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                 //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIView * scrollContentView;                                                //@synthesize scrollContentView=_scrollContentView - In the implementation block
@property (nonatomic,retain) OBContentView * contentView;                                               //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * secondaryContentView;                                             //@synthesize secondaryContentView=_secondaryContentView - In the implementation block
@property (nonatomic,retain) OBHeaderView * headerView;                                                 //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) OBButtonTray * buttonTray;                                                 //@synthesize buttonTray=_buttonTray - In the implementation block
@property (nonatomic,retain) UIView * buttonTrayScrollContainerView;                                    //@synthesize buttonTrayScrollContainerView=_buttonTrayScrollContainerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * headerTopOffsetConstraint;                            //@synthesize headerTopOffsetConstraint=_headerTopOffsetConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewTopOffsetConstraint;                       //@synthesize contentViewTopOffsetConstraint=_contentViewTopOffsetConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewHeightConstraint;                          //@synthesize contentViewHeightConstraint=_contentViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * secondaryContentViewTopOffsetConstraint;              //@synthesize secondaryContentViewTopOffsetConstraint=_secondaryContentViewTopOffsetConstraint - In the implementation block
@property (nonatomic,retain) OBBulletedList * bulletedList;                                             //@synthesize bulletedList=_bulletedList - In the implementation block
@property (assign,nonatomic) unsigned long long templateType;                                           //@synthesize templateType=_templateType - In the implementation block
@property (nonatomic,retain) OBNavigationBarDisplayState * cachedBarState;                              //@synthesize cachedBarState=_cachedBarState - In the implementation block
@property (nonatomic,retain) UINavigationController * retainedNavigationController;                     //@synthesize retainedNavigationController=_retainedNavigationController - In the implementation block
@property (assign,nonatomic) BOOL _shouldInlineButtontray;                                              //@synthesize _shouldInlineButtontray=__shouldInlineButtontray - In the implementation block
@property (assign,nonatomic) CGRect keyboardFrame;                                                      //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
@property (assign,nonatomic) BOOL shouldAdjustScrollViewInsetForKeyboard;                               //@synthesize shouldAdjustScrollViewInsetForKeyboard=_shouldAdjustScrollViewInsetForKeyboard - In the implementation block
@property (assign,nonatomic) BOOL shouldAdjustButtonTrayForKeyboard;                                    //@synthesize shouldAdjustButtonTrayForKeyboard=_shouldAdjustButtonTrayForKeyboard - In the implementation block
@property (assign,nonatomic) BOOL includePaddingAboveContentView;                                       //@synthesize includePaddingAboveContentView=_includePaddingAboveContentView - In the implementation block
@property (assign,nonatomic) double availableContentViewHeight;                                         //@synthesize availableContentViewHeight=_availableContentViewHeight - In the implementation block
@property (assign,nonatomic) BOOL darkMode;                                                             //@synthesize darkMode=_darkMode - In the implementation block
@property (assign,getter=isScrollingDisabled,nonatomic) BOOL scrollingDisabled;                         //@synthesize scrollingDisabled=_scrollingDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setHeaderView:(OBHeaderView *)arg1 ;
-(BOOL)darkMode;
-(long long)contentViewLayout;
-(UIView *)bleedView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)updateDirectionalLayoutMargins;
-(double)_headerTopOffset;
-(void)_updateHeaderTopOffsetConstraint;
-(void)_layoutButtonTray;
-(void)_floatButtonTray;
-(void)_inlineButtonTray;
-(BOOL)_buttonTrayInlined;
-(void)_updateButtonTrayBackdrop;
-(BOOL)_scrollViewContentIsUnderTray;
-(void)setupBulletedListIfNeeded;
-(OBBulletedList *)bulletedList;
-(void)_animatePushTransitionForViews:(id)arg1 transitionSubtype:(id)arg2 ;
-(void)setIncludePaddingAboveContentView:(BOOL)arg1 ;
-(void)setShouldAdjustScrollViewInsetForKeyboard:(BOOL)arg1 ;
-(void)setShouldAdjustButtonTrayForKeyboard:(BOOL)arg1 ;
-(void)setContentViewLayout:(long long)arg1 ;
-(void)setBleedView:(UIView *)arg1 ;
-(void)restoreNavigationBarAppearance;
-(void)setCurrentNavigationBarDisplayState:(id)arg1 ;
-(CGRect)keyboardFrame;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_setupScrollView;
-(void)setScrollContentView:(UIView *)arg1 ;
-(UIView *)scrollContentView;
-(long long)navigationBarScrollToEdgeBehavior;
-(void)setScrollingDisabled:(BOOL)arg1 ;
-(BOOL)isScrollingDisabled;
-(id)setupHeaderViewIfNeeded:(id)arg1 detailedText:(id)arg2 icon:(id)arg3 ;
-(UIView *)buttonTrayScrollContainerView;
-(double)_contentViewHeight;
-(void)setButtonTrayScrollContainerView:(UIView *)arg1 ;
-(void)_inlineButtonTrayIfNeeded;
-(void)_updateScrollViewInsets;
-(void)_registerForKeyboardNotifications;
-(void)setRetainedNavigationController:(UINavigationController *)arg1 ;
-(OBNavigationBarDisplayState *)cachedBarState;
-(void)setCachedBarState:(OBNavigationBarDisplayState *)arg1 ;
-(void)setBulletedList:(OBBulletedList *)arg1 ;
-(void)updateNavigationBarAnimated:(BOOL)arg1 ;
-(double)contentViewsTopPaddingFromBottomOfHeader;
-(NSLayoutConstraint *)contentViewTopOffsetConstraint;
-(void)_unregisterForKeyboardNotifications;
-(NSLayoutConstraint *)contentViewHeightConstraint;
-(void)setContentViewTopOffsetConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_setupNavigationBarBleed;
-(UIView *)secondaryContentView;
-(void)setSecondaryContentViewTopOffsetConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)secondaryContentViewTopOffsetConstraint;
-(BOOL)includePaddingAboveContentView;
-(BOOL)_landscapeiPhone;
-(NSLayoutConstraint *)headerTopOffsetConstraint;
-(void)setHeaderTopOffsetConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)_shouldInlineButtontray;
-(BOOL)shouldAdjustButtonTrayForKeyboard;
-(BOOL)shouldAdjustScrollViewInsetForKeyboard;
-(id)_currentContainerView;
-(void)_updateScrollContentViewLayoutMargins;
-(void)_handleKeyboardPresentation:(id)arg1 ;
-(void)setKeyboardFrame:(CGRect)arg1 ;
-(UINavigationController *)retainedNavigationController;
-(double)availableContentViewHeight;
-(void)setSecondaryContentView:(UIView *)arg1 ;
-(void)set_shouldInlineButtontray:(BOOL)arg1 ;
-(void)setAvailableContentViewHeight:(double)arg1 ;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(OBButtonTray *)buttonTray;
-(unsigned long long)templateType;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(long long)preferredUserInterfaceStyle;
-(void)setTemplateType:(unsigned long long)arg1 ;
-(void)setContentView:(OBContentView *)arg1 ;
-(void)setButtonTray:(OBButtonTray *)arg1 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(OBHeaderView *)headerView;
-(void)loadView;
-(OBContentView *)contentView;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(void)_scrollViewDidLayoutSubviews:(id)arg1 ;
-(void)addBulletedListItemWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4 ;
-(void)setDarkMode:(BOOL)arg1 ;
-(BOOL)contentViewUnderButtonTray;
-(BOOL)shouldInlineButtonTray;
@end

