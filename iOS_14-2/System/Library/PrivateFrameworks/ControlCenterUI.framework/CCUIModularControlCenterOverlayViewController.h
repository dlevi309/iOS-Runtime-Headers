/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@class MTMaterialView, UIScrollView, UIView, CCUIModuleCollectionView, CCUIStatusLabelViewController, CCUIHeaderPocketView, UIStatusBar, CCUIStatusBarStyleSnapshot, CCUIAnimationRunner, CCUIScrollView, UIStatusBar_Modern, UIPanGestureRecognizer, UITapGestureRecognizer, CCUIFlickGestureRecognizer, NSHashTable, CCUIOverlayTransitionState, FBSDisplayLayoutMonitor, NSUUID, CCUISensorActivityDataProvider, NSString;

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
	BOOL _showHotPocket;
	BOOL _reachabilityActive;
	unsigned long long _presentationState;
	unsigned long long _transitionState;
	id<CCUIHostStatusBarStyleProvider> _hostStatusBarStyleProvider;
	NSUUID* _currentTransitionUUID;
	CCUISensorActivityDataProvider* _sensorActivityDataProvider;

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
@property (nonatomic,retain) CCUISensorActivityDataProvider * sensorActivityDataProvider;                            //@synthesize sensorActivityDataProvider=_sensorActivityDataProvider - In the implementation block
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
+(id)_controlCenterDismissEventStream;
+(void)_addBlockForSignpost:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
+(id)_controlCenterBringupEventStream;
+(id)_controlCenterDismissOrbActionsEventStream;
+(void)_playEventStream:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)_executeBlocksForSignpost:(unsigned long long)arg1 ;
+(id)_presentationProviderForDevice;
+(void)_executeAndCleanupBlocksForAllSignposts;
+(id)_blocksBySignpost;
-(void)dismissControlCenterForContentModuleContext:(id)arg1 ;
-(UIScrollView *)overlayScrollView;
-(void)setSensorActivityDataProvider:(CCUISensorActivityDataProvider *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)dismissAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)viewWillLayoutSubviews;
-(CCUISensorActivityDataProvider *)sensorActivityDataProvider;
-(void)moduleInstancesChangedForModuleInstanceManager:(id)arg1 ;
-(void)moduleCollectionViewControllerDidUpdateModules:(id)arg1 ;
-(void)moduleCollectionViewController:(id)arg1 willDismissViewController:(id)arg2 ;
-(void)setTransitionState:(unsigned long long)arg1 ;
-(unsigned long long)presentationState;
-(UIView *)overlayContainerView;
-(id)initWithSystemAgent:(id)arg1 ;
-(CGRect)compactAvoidanceFrameForStatusBar:(id)arg1 ;
-(void)moduleInstancesLayoutChangedForModuleInstanceManager:(id)arg1 ;
-(unsigned long long)preferredScreenEdgesDeferringSystemGestures;
-(id)_statusLabelViewContainerView;
-(void)moduleCollectionViewController:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)setCurrentTransitionUUID:(NSUUID *)arg1 ;
-(void)moduleCollectionViewController:(id)arg1 willCloseExpandedModule:(id)arg2 ;
-(void)setHostStatusBarStyleProvider:(id<CCUIHostStatusBarStyleProvider>)arg1 ;
-(id)_moduleCollectionViewContainerView;
-(void)moduleCollectionViewController:(id)arg1 willOpenExpandedModule:(id)arg2 ;
-(void)_updateHotPocket:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)runTest:(id)arg1 subtests:(id)arg2 eventStream:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_reparentAndBecomeActive;
-(void)moduleCollectionViewController:(id)arg1 didAddModuleContainerViewController:(id)arg2 ;
-(BOOL)_scrollViewIsScrollable;
-(void)beginPresentationWithLocation:(CGPoint)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
-(UIEdgeInsets)overlayAdditionalEdgeInsets;
-(void)_updatePresentationForTransitionType:(unsigned long long)arg1 translation:(CGPoint)arg2 interactive:(BOOL)arg3 ;
-(void)endPresentationWithLocation:(CGPoint)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
-(void)_dismissalPanGestureRecognizerEnded:(id)arg1 ;
-(void)_updatePresentationForTransitionState:(id)arg1 withCompletionHander:(/*^block*/id)arg2 ;
-(double)overlayReachabilityHeight;
-(CCUIModuleCollectionView *)overlayModuleCollectionView;
-(void)setReachabilityActive:(BOOL)arg1 ;
-(UIStatusBar *)overlayLeadingStatusBar;
-(void)statusLabelViewControllerDidFinishStatusUpdates:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)scrollView:(id)arg1 gestureRecognizerShouldBegin:(id)arg2 ;
-(void)_handleDismissalTapGestureRecognizer:(id)arg1 ;
-(BOOL)_dismissalFlickGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)_beginDismissalAnimated:(BOOL)arg1 interactive:(BOOL)arg2 ;
-(BOOL)runTest:(id)arg1 options:(id)arg2 delegate:(id)arg3 ;
-(void)_handleDismissalFlickGestureRecognizer:(id)arg1 ;
-(BOOL)_scrollViewCanAcceptDownwardsPan;
-(void)cancelPresentationWithLocation:(CGPoint)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
-(void)_willPresentView;
-(void)_updateSensorActivityStatusForHeaderPocketView;
-(void)_endPresentationWithUUID:(id)arg1 ;
-(long long)overlayInterfaceOrientation;
-(id)_initWithSystemAgent:(id)arg1 presentationProvider:(id)arg2 ;
-(BOOL)_dismissalPanGestureRecognizerShouldBegin:(id)arg1 ;
-(void)presentAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(CGRect)overlayContainerFrame;
-(void)_updateChevronStateForTransitionState:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)_willDismissView;
-(BOOL)isReachabilityActive;
-(CCUIStatusLabelViewController *)overlayStatusLabelViewController;
-(CGRect)overlayBackgroundFrame;
-(BOOL)_dismissalFlickGestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)_dismissalFlickGestureRecognizerShouldBegin:(id)arg1 ;
-(id)compactTrailingStyleRequestForStatusBar:(id)arg1 ;
-(void)_dismissalPanGestureRecognizerFailed:(id)arg1 ;
-(void)reachabilityAnimationDidEnd;
-(void)_updateHotPocketAnimated:(BOOL)arg1 ;
-(unsigned long long)__supportedInterfaceOrientations;
-(void)setPresentationState:(unsigned long long)arg1 ;
-(id<CCUIHostStatusBarStyleProvider>)hostStatusBarStyleProvider;
-(void)didReceiveSignpost:(unsigned long long)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(CGPoint)_centerPointOfTopmostModule;
-(void)_dismissalPanGestureRecognizerChanged:(id)arg1 ;
-(unsigned long long)transitionState;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)_scrollPanGestureRecognizerCanBeginForGestureVelocity:(CGPoint)arg1 ;
-(void)_dismissalPanGestureRecognizerBegan:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_handleDismissalPanGestureRecognizer:(id)arg1 ;
-(id)_beginPresentationAnimated:(BOOL)arg1 interactive:(BOOL)arg2 ;
-(void)_dismissalPanGestureRecognizerCancelled:(id)arg1 ;
-(void)_replaceBackgroundViewContentsWithSnapshotIfNecessary:(BOOL)arg1 ;
-(void)_setupPanGestureFailureRequirements;
-(NSUUID *)currentTransitionUUID;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_cancelDismissalPanGestures;
-(BOOL)_gestureRecognizerIsActive:(id)arg1 ;
-(MTMaterialView *)overlayBackgroundView;
-(CCUIStatusBarStyleSnapshot *)overlayStatusBarStyle;
-(id)_controlCenterShowOrbActionsEventStream;
-(void)setOverlayStatusBarHidden:(BOOL)arg1 ;
-(BOOL)_scrollPanGestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_dismissalTapGestureRecognizerShouldBegin:(id)arg1 ;
-(void)updatePresentationWithLocation:(CGPoint)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
-(CCUIHeaderPocketView *)overlayHeaderView;
-(void)statusLabelViewControllerWillBeginStatusUpdates:(id)arg1 ;
-(void)_endDismissalWithUUID:(id)arg1 animated:(BOOL)arg2 ;
@end

