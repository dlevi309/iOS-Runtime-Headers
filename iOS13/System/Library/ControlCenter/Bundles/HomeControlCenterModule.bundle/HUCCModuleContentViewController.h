/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
*/

#import <HomeControlCenterModule/HomeControlCenterModule-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HUCCGridViewControllerDelegate.h>
#import <libobjc.A.dylib/HUCCModuleViewDelegate.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>

@protocol HUCCModuleContentViewControllerDelegate, HUOpenURLHandling;
@class UIViewPropertyAnimator, HUCCWarningLabelView, HUCCGridViewController, HUCCPageItemManager, HUCCModuleView, NSString;

@interface HUCCModuleContentViewController : UIViewController <HUCCGridViewControllerDelegate, HUCCModuleViewDelegate, HFItemManagerDelegate, CCUIContentModuleContentViewController> {

	BOOL _hasAnyAccessoriesOrScenes;
	BOOL _accessAllowedForCurrentLockState;
	BOOL _collapsed;
	BOOL _hasAlreadyPreloadedItems;
	id<HUCCModuleContentViewControllerDelegate> _delegate;
	id<HUOpenURLHandling> _URLHandler;
	unsigned long long _expandingState;
	unsigned long long _contentViewState;
	HUCCWarningLabelView* _warningLabelView;
	HUCCGridViewController* _serviceGridViewController;
	HUCCGridViewController* _actionSetGridViewController;
	HUCCPageItemManager* _pageItemManager;
	unsigned long long _activePage;
	HUCCGridViewController* _activePageViewController;

}

@property (nonatomic,retain) HUCCModuleView * view; 
@property (assign,nonatomic) unsigned long long expandingState;                                        //@synthesize expandingState=_expandingState - In the implementation block
@property (assign,nonatomic) unsigned long long contentViewState;                                      //@synthesize contentViewState=_contentViewState - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                                        //@synthesize collapsed=_collapsed - In the implementation block
@property (nonatomic,retain) HUCCWarningLabelView * warningLabelView;                                  //@synthesize warningLabelView=_warningLabelView - In the implementation block
@property (nonatomic,retain) HUCCGridViewController * serviceGridViewController;                       //@synthesize serviceGridViewController=_serviceGridViewController - In the implementation block
@property (nonatomic,retain) HUCCGridViewController * actionSetGridViewController;                     //@synthesize actionSetGridViewController=_actionSetGridViewController - In the implementation block
@property (nonatomic,retain) HUCCPageItemManager * pageItemManager;                                    //@synthesize pageItemManager=_pageItemManager - In the implementation block
@property (assign,nonatomic) unsigned long long activePage;                                            //@synthesize activePage=_activePage - In the implementation block
@property (nonatomic,retain) HUCCGridViewController * activePageViewController;                        //@synthesize activePageViewController=_activePageViewController - In the implementation block
@property (assign,nonatomic) BOOL hasAnyAccessoriesOrScenes;                                           //@synthesize hasAnyAccessoriesOrScenes=_hasAnyAccessoriesOrScenes - In the implementation block
@property (assign,nonatomic) BOOL hasAlreadyPreloadedItems;                                            //@synthesize hasAlreadyPreloadedItems=_hasAlreadyPreloadedItems - In the implementation block
@property (assign,nonatomic,__weak) id<HUCCModuleContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL accessAllowedForCurrentLockState;                                    //@synthesize accessAllowedForCurrentLockState=_accessAllowedForCurrentLockState - In the implementation block
@property (nonatomic,retain) id<HUOpenURLHandling> URLHandler;                                         //@synthesize URLHandler=_URLHandler - In the implementation block
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
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id<HUCCModuleContentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HUCCModuleContentViewControllerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_updateContentView;
-(BOOL)isCollapsed;
-(void)setCollapsed:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(double)preferredExpandedContentHeight;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)didTransitionToExpandedContentMode:(BOOL)arg1 ;
-(BOOL)canDismissPresentedContent;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)displayWillTurnOff;
-(double)preferredExpandedContentWidth;
-(id<HUOpenURLHandling>)URLHandler;
-(void)setActivePage:(unsigned long long)arg1 ;
-(unsigned long long)activePage;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)setURLHandler:(id<HUOpenURLHandling>)arg1 ;
-(void)setAccessAllowedForCurrentLockState:(BOOL)arg1 ;
-(void)setPageItemManager:(HUCCPageItemManager *)arg1 ;
-(HUCCPageItemManager *)pageItemManager;
-(void)_preferredPageDidChange;
-(void)_pageSwitchButtonPressed:(id)arg1 ;
-(void)setWarningLabelView:(HUCCWarningLabelView *)arg1 ;
-(HUCCWarningLabelView *)warningLabelView;
-(void)_updatePageSwitchButtonText;
-(void)_updatePageSwitchButtonHiddenState;
-(unsigned long long)expandingState;
-(void)_updateSizeSubclassForViewSize:(CGSize)arg1 ;
-(BOOL)hasAlreadyPreloadedItems;
-(id)_pageViewControllerForActivePage;
-(void)setHasAlreadyPreloadedItems:(BOOL)arg1 ;
-(HUCCGridViewController *)serviceGridViewController;
-(HUCCGridViewController *)actionSetGridViewController;
-(HUCCGridViewController *)activePageViewController;
-(unsigned long long)contentViewState;
-(void)setActivePageViewController:(HUCCGridViewController *)arg1 ;
-(BOOL)accessAllowedForCurrentLockState;
-(BOOL)hasAnyAccessoriesOrScenes;
-(void)setContentViewState:(unsigned long long)arg1 ;
-(void)setHasAnyAccessoriesOrScenes:(BOOL)arg1 ;
-(void)setExpandingState:(unsigned long long)arg1 ;
-(void)_updatePageVisibility;
-(BOOL)isDeviceUnlockedForGridViewController:(id)arg1 ;
-(id)prepareForActionRequiringDeviceUnlockForGridViewController:(id)arg1 ;
-(void)homeButtonPressedForModuleView:(id)arg1 ;
-(void)setServiceGridViewController:(HUCCGridViewController *)arg1 ;
-(void)setActionSetGridViewController:(HUCCGridViewController *)arg1 ;
@end

