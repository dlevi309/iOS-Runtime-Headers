/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <ControlCenterUI/CCUIModularControlCenterViewController.h>
#import <libobjc.A.dylib/CCUIPPTSignpostListener.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CCUIScrollViewDelegate.h>
#import <libobjc.A.dylib/CCUIStatusLabelViewControllerDelegate.h>
#import <libobjc.A.dylib/CCUIOverlayViewProvider.h>
#import <libobjc.A.dylib/CCUIOverlayMetricsProvider.h>
#import <libobjc.A.dylib/CCUIStatusBarDelegate.h>

@protocol CCUIOverlayPresentationProvider, CCUIHostStatusBarStyleProvider;
@class MTMaterialView, UIScrollView, UIView, CCUIModuleCollectionView, CCUIStatusLabelViewController, CCUIHeaderPocketView, UIStatusBar, CCUIStatusBarStyleSnapshot, CCUIAnimationRunner, CCUIScrollView, UIStatusBar_Modern, UIPanGestureRecognizer, UITapGestureRecognizer, CCUIFlickGestureRecognizer, NSHashTable, CCUIOverlayTransitionState, FBSDisplayLayoutMonitor, NSUUID, NSString;

@interface CCUIModularControlCenterOverlayViewController : CCUIModularControlCenterViewController <CCUIPPTSignpostListener, UIGestureRecognizerDelegate, CCUIScrollViewDelegate, CCUIStatusLabelViewControllerDelegate, CCUIOverlayViewProvider, CCUIOverlayMetricsProvider, CCUIStatusBarDelegate> {

	id<CCUIOverlayPresentationProvider> _presentationProvider;
	CCUIAnimationRunner* _primaryAnimationRunner;
	CCUIAnimationRunner* _secondaryAnimationRunner;
	MTMaterialView* _backgroundView;
	CCUIHeaderPocketView* _headerPocketView;
	CCUIScrollView* _scrollView;
	UIView* _containerView;
	UIStatusBar_Modern* _compactLeadingStatusBar;
	BOOL _presentationPanGestureActive;
	UIPanGestureRecognizer* _headerPocketViewDismissalPanGesture;
	UITapGestureRecognizer* _headerPocketViewDismissalTapGesture;
	CCUIFlickGestureRecognizer* _collectionViewDismissalFlickGesture;
	UIPanGestureRecognizer* _collectionViewDismissalPanGesture;
	UITapGestureRecognizer* _collectionViewDismissalTapGesture;
	UIPanGestureRecognizer* _collectionViewScrollPanGesture;
	NSHashTable* _blockingGestureRecognizers;
	CCUIOverlayTransitionState* _previousTransitionState;
	CCUIStatusBarStyleSnapshot* _hostStatusBarStyleSnapshot;
	FBSDisplayLayoutMonitor* _layoutMonitor;
	BOOL _reachabilityActive;
	unsigned long long _presentationState;
	unsigned long long _transitionState;
	id<CCUIHostStatusBarStyleProvider> _hostStatusBarStyleProvider;
	NSUUID* _currentTransitionUUID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long presentationState;                                                   //@synthesize presentationState=_presentationState - In the implementation block
@property (assign,nonatomic) unsigned long long transitionState;                                                     //@synthesize transitionState=_transitionState - In the implementation block
@property (nonatomic,copy) NSUUID * currentTransitionUUID;                                                           //@synthesize currentTransitionUUID=_currentTransitionUUID - In the implementation block
@property (assign,nonatomic,__weak) id<CCUIModularControlCenterOverlayViewControllerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<CCUIHostStatusBarStyleProvider> hostStatusBarStyleProvider;                   //@synthesize hostStatusBarStyleProvider=_hostStatusBarStyleProvider - In the implementation block
@property (assign,getter=isReachabilityActive,nonatomic) BOOL reachabilityActive;                                    //@synthesize reachabilityActive=_reachabilityActive - In the implementation block
@property (nonatomic,readonly) MTMaterialView * overlayBackgroundView; 
@property (nonatomic,readonly) UIScrollView * overlayScrollView; 
@property (nonatomic,readonly) UIView * overlayContainerView; 
@property (nonatomic,readonly) CCUIModuleCollectionView * overlayModuleCollectionView; 
@property (nonatomic,readonly) CCUIStatusLabelViewController * overlayStatusLabelViewController; 
@property (nonatomic,readonly) CCUIHeaderPocketView * overlayHeaderView; 
@property (nonatomic,readonly) UIStatusBar * overlayLeadingStatusBar; 
@property (nonatomic,readonly) CGRect overlayBackgroundFrame; 
@property (nonatomic,readonly) CGRect overlayContainerFrame; 
@property (nonatomic,readonly) long long overlayInterfaceOrientation; 
@property (nonatomic,copy,readonly) CCUIStatusBarStyleSnapshot * overlayStatusBarStyle; 
@property (nonatomic,readonly) double overlayReachabilityHeight; 
+(id)_controlCenterBringupEventStream;
+(id)_controlCenterDismissEventStream;
+(void)_executeAndCleanupBlocksForAllSignposts;
+(void)_addBlockForSignpost:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
+(id)_blocksBySignpost;
+(void)_executeBlocksForSignpost:(unsigned long long)arg1 ;
+(id)_presentationProviderForDevice;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(unsigned long long)preferredScreenEdgesDeferringSystemGestures;
-(unsigned long long)__supportedInterfaceOrientations;
-(void)setReachabilityActive:(BOOL)arg1 ;
-(unsigned long long)presentationState;
-(void)setPresentationState:(unsigned long long)arg1 ;
-(unsigned long long)transitionState;
-(void)setTransitionState:(unsigned long long)arg1 ;
-(void)dismissControlCenterForContentModuleContext:(id)arg1 ;
-(UIView *)overlayContainerView;
-(UIScrollView *)overlayScrollView;
-(id)initWithSystemAgent:(id)arg1 ;
-(BOOL)isReachabilityActive;
-(void)moduleCollectionViewController:(id)arg1 willOpenExpandedModule:(id)arg2 ;
-(void)moduleCollectionViewController:(id)arg1 willCloseExpandedModule:(id)arg2 ;
-(void)moduleCollectionViewController:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)moduleCollectionViewController:(id)arg1 willDismissViewController:(id)arg2 ;
-(void)moduleCollectionViewController:(id)arg1 didAddModuleContainerViewController:(id)arg2 ;
-(void)moduleInstancesChangedForModuleInstanceManager:(id)arg1 ;
-(long long)overlayInterfaceOrientation;
-(double)overlayReachabilityHeight;
-(CCUIHeaderPocketView *)overlayHeaderView;
-(CGRect)overlayBackgroundFrame;
-(MTMaterialView *)overlayBackgroundView;
-(CGRect)overlayContainerFrame;
-(CCUIModuleCollectionView *)overlayModuleCollectionView;
-(CCUIStatusBarStyleSnapshot *)overlayStatusBarStyle;
-(UIStatusBar *)overlayLeadingStatusBar;
-(CCUIStatusLabelViewController *)overlayStatusLabelViewController;
-(void)setOverlayStatusBarHidden:(BOOL)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)runTest:(id)arg1 subtests:(id)arg2 eventStream:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)presentAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)runTest:(id)arg1 options:(id)arg2 delegate:(id)arg3 ;
-(void)didReceiveSignpost:(unsigned long long)arg1 ;
-(id)_statusLabelViewContainerView;
-(id)_moduleCollectionViewContainerView;
-(void)_reparentAndBecomeActive;
-(id)_initWithSystemAgent:(id)arg1 presentationProvider:(id)arg2 ;
-(void)_updateHotPocket:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_beginPresentationAnimated:(BOOL)arg1 interactive:(BOOL)arg2 ;
-(void)_endPresentationWithUUID:(id)arg1 ;
-(void)_updatePresentationForTransitionState:(id)arg1 withCompletionHander:(/*^block*/id)arg2 ;
-(void)setCurrentTransitionUUID:(NSUUID *)arg1 ;
-(id<CCUIHostStatusBarStyleProvider>)hostStatusBarStyleProvider;
-(NSUUID *)currentTransitionUUID;
-(void)_cancelDismissalPanGestures;
-(id)_beginDismissalAnimated:(BOOL)arg1 interactive:(BOOL)arg2 ;
-(void)_endDismissalWithUUID:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateHotPocketAnimated:(BOOL)arg1 ;
-(void)_updateChevronStateForTransitionState:(id)arg1 ;
-(void)_setupPanGestureFailureRequirements;
-(void)_handleDismissalPanGestureRecognizer:(id)arg1 ;
-(void)_handleDismissalTapGestureRecognizer:(id)arg1 ;
-(void)_handleDismissalFlickGestureRecognizer:(id)arg1 ;
-(BOOL)_dismissalFlickGestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_dismissalTapGestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_dismissalPanGestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_dismissalFlickGestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)_dismissalFlickGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)_scrollPanGestureRecognizerShouldBegin:(id)arg1 ;
-(void)_willPresentView;
-(void)_willDismissView;
-(void)updatePresentationWithLocation:(CGPoint)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
-(void)_updatePresentationForTransitionType:(unsigned long long)arg1 translation:(CGPoint)arg2 interactive:(BOOL)arg3 ;
-(BOOL)_scrollViewIsScrollable;
-(BOOL)_scrollPanGestureRecognizerCanBeginForGestureVelocity:(CGPoint)arg1 ;
-(BOOL)_scrollViewCanAcceptDownwardsPan;
-(BOOL)_gestureRecognizerIsActive:(id)arg1 ;
-(void)_dismissalPanGestureRecognizerBegan:(id)arg1 ;
-(void)_dismissalPanGestureRecognizerChanged:(id)arg1 ;
-(void)_dismissalPanGestureRecognizerEnded:(id)arg1 ;
-(void)_dismissalPanGestureRecognizerCancelled:(id)arg1 ;
-(void)_dismissalPanGestureRecognizerFailed:(id)arg1 ;
-(BOOL)scrollView:(id)arg1 gestureRecognizerShouldBegin:(id)arg2 ;
-(void)statusLabelViewControllerWillBeginStatusUpdates:(id)arg1 ;
-(void)statusLabelViewControllerDidFinishStatusUpdates:(id)arg1 ;
-(id)compactTrailingStyleRequestForStatusBar:(id)arg1 ;
-(CGRect)compactAvoidanceFrameForStatusBar:(id)arg1 ;
-(UIEdgeInsets)overlayAdditionalEdgeInsets;
-(void)beginPresentationWithLocation:(CGPoint)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
-(void)endPresentationWithLocation:(CGPoint)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
-(void)cancelPresentationWithLocation:(CGPoint)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
-(void)setHostStatusBarStyleProvider:(id<CCUIHostStatusBarStyleProvider>)arg1 ;
@end

