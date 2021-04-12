/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <OnBoardingKit/OBBaseWelcomeController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/_UIScrollViewLayoutObserver.h>
#import <libobjc.A.dylib/OBNavigationBarTitleTransistor.h>

@class OBHeaderView, OBContentView, OBButtonTray, UIView, UIScrollView, NSLayoutConstraint, OBBulletedList, OBNavigationBarDisplayState, UINavigationController, NSString;

@interface OBWelcomeController : OBBaseWelcomeController <UIScrollViewDelegate, _UIScrollViewLayoutObserver, OBNavigationBarTitleTransistor> {

	BOOL _darkMode;
	BOOL _scrollingDisabled;
	BOOL __shouldInlineButtontray;
	OBHeaderView* _headerView;
	OBContentView* _contentView;
	OBButtonTray* _buttonTray;
	long long _contentViewLayout;
	UIView* _bleedView;
	UIScrollView* _scrollView;
	UIView* _scrollContentView;
	UIView* _buttonTrayScrollContainerView;
	NSLayoutConstraint* _headerTopOffsetConstraint;
	NSLayoutConstraint* _contentViewTopOffsetConstraint;
	NSLayoutConstraint* _contentViewHeightConstraint;
	OBBulletedList* _bulletedList;
	unsigned long long _templateType;
	OBNavigationBarDisplayState* _cachedBarState;
	UINavigationController* _retainedNavigationController;

}

@property (assign,nonatomic) long long contentViewLayout;                                        //@synthesize contentViewLayout=_contentViewLayout - In the implementation block
@property (nonatomic,retain) UIView * bleedView;                                                 //@synthesize bleedView=_bleedView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                          //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIView * scrollContentView;                                         //@synthesize scrollContentView=_scrollContentView - In the implementation block
@property (nonatomic,retain) OBContentView * contentView;                                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) OBHeaderView * headerView;                                          //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) OBButtonTray * buttonTray;                                          //@synthesize buttonTray=_buttonTray - In the implementation block
@property (nonatomic,retain) UIView * buttonTrayScrollContainerView;                             //@synthesize buttonTrayScrollContainerView=_buttonTrayScrollContainerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * headerTopOffsetConstraint;                     //@synthesize headerTopOffsetConstraint=_headerTopOffsetConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewTopOffsetConstraint;                //@synthesize contentViewTopOffsetConstraint=_contentViewTopOffsetConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewHeightConstraint;                   //@synthesize contentViewHeightConstraint=_contentViewHeightConstraint - In the implementation block
@property (nonatomic,retain) OBBulletedList * bulletedList;                                      //@synthesize bulletedList=_bulletedList - In the implementation block
@property (assign,nonatomic) unsigned long long templateType;                                    //@synthesize templateType=_templateType - In the implementation block
@property (nonatomic,retain) OBNavigationBarDisplayState * cachedBarState;                       //@synthesize cachedBarState=_cachedBarState - In the implementation block
@property (nonatomic,retain) UINavigationController * retainedNavigationController;              //@synthesize retainedNavigationController=_retainedNavigationController - In the implementation block
@property (assign,nonatomic) BOOL _shouldInlineButtontray;                                       //@synthesize _shouldInlineButtontray=__shouldInlineButtontray - In the implementation block
@property (assign,nonatomic) BOOL darkMode;                                                      //@synthesize darkMode=_darkMode - In the implementation block
@property (assign,getter=isScrollingDisabled,nonatomic) BOOL scrollingDisabled;                  //@synthesize scrollingDisabled=_scrollingDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(OBContentView *)contentView;
-(void)setContentView:(OBContentView *)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(OBHeaderView *)headerView;
-(void)setHeaderView:(OBHeaderView *)arg1 ;
-(long long)contentViewLayout;
-(void)setContentViewLayout:(long long)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(long long)preferredUserInterfaceStyle;
-(void)_scrollViewDidLayoutSubviews:(id)arg1 ;
-(unsigned long long)templateType;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(void)setTemplateType:(unsigned long long)arg1 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4 ;
-(BOOL)contentViewUnderButtonTray;
-(BOOL)shouldInlineButtonTray;
-(OBButtonTray *)buttonTray;
-(double)contentViewsTopPaddingFromBottomOfHeader;
-(NSLayoutConstraint *)contentViewTopOffsetConstraint;
-(void)setDarkMode:(BOOL)arg1 ;
-(void)setButtonTray:(OBButtonTray *)arg1 ;
-(BOOL)darkMode;
-(UIView *)bleedView;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 ;
-(void)updateDirectionalLayoutMargins;
-(void)setupBulletedListIfNeeded;
-(OBBulletedList *)bulletedList;
-(void)addBulletedListItemWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3 ;
-(void)setContentViewTopOffsetConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBleedView:(UIView *)arg1 ;
-(void)restoreNavigationBarAppearance;
-(void)setCurrentNavigationBarDisplayState:(id)arg1 ;
-(long long)navigationBarScrollToEdgeBehavior;
-(void)setScrollingDisabled:(BOOL)arg1 ;
-(BOOL)isScrollingDisabled;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4 ;
-(id)setupHeaderViewIfNeeded:(id)arg1 detailedText:(id)arg2 icon:(id)arg3 ;
-(void)setButtonTrayScrollContainerView:(UIView *)arg1 ;
-(UIView *)buttonTrayScrollContainerView;
-(void)setScrollContentView:(UIView *)arg1 ;
-(UIView *)scrollContentView;
-(double)_contentViewHeight;
-(void)setContentViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewHeightConstraint;
-(void)_layoutButtonTray;
-(void)_updateHeaderTopOffsetConstraint;
-(BOOL)_buttonTrayInlined;
-(void)_updateButtonTrayBackdrop;
-(void)setRetainedNavigationController:(UINavigationController *)arg1 ;
-(OBNavigationBarDisplayState *)cachedBarState;
-(void)setCachedBarState:(OBNavigationBarDisplayState *)arg1 ;
-(void)updateNavigationBarAnimated:(BOOL)arg1 ;
-(BOOL)_scrollViewContentIsUnderTray;
-(void)_updateScrollViewInsets;
-(BOOL)_shouldInlineButtontray;
-(void)setBulletedList:(OBBulletedList *)arg1 ;
-(NSLayoutConstraint *)headerTopOffsetConstraint;
-(double)_headerTopOffset;
-(void)setHeaderTopOffsetConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateScrollContentViewLayoutMargins;
-(UINavigationController *)retainedNavigationController;
-(void)set_shouldInlineButtontray:(BOOL)arg1 ;
@end

