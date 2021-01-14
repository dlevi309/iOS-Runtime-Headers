/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <BannerKit/BannerKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/BNPanGestureProxyDelegate.h>
#import <libobjc.A.dylib/BNPresentedBannerAnimationCustomizing.h>
#import <libobjc.A.dylib/BNPresentingPrivate.h>

@protocol BNPresentable, BNPanGestureProxyPrivate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitionCoordinator, BNLayoutManaging, BNConsidering, BNPosting, BNPresentingDelegate;
@class BNTieredArray, NSMutableSet, UIPanGestureRecognizer, NSString, NSArray;

@interface BNContentViewController : UIViewController <UIGestureRecognizerDelegate, BNPanGestureProxyDelegate, BNPresentedBannerAnimationCustomizing, BNPresentingPrivate> {

	BNTieredArray* _presentables;
	NSMutableSet* _presentingPresentables;
	NSMutableSet* _dismissingPresentables;
	NSMutableSet* _transitioningDelegates;
	UIPanGestureRecognizer* _panGesture;
	id<BNPresentable> _presentableForActiveGesture;
	CGRect _presentedFrameForPresentableForActiveGesture;
	id<BNPanGestureProxyPrivate> _panGestureProxyForActivePresentable;
	id<UIViewControllerAnimatedTransitioning> _activeBannerTransitionAnimator;
	id<UIViewControllerTransitionCoordinator> _activeTransitionCoordinator;
	id<BNLayoutManaging> _layoutManager;
	id<BNConsidering> _authority;
	id<BNPosting> _poster;
	id<BNPresentingDelegate> _delegate;

}

@property (nonatomic,readonly) id<BNLayoutManaging> layoutManager;                  //@synthesize layoutManager=_layoutManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<BNPresentingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<BNConsidering> authority;                         //@synthesize authority=_authority - In the implementation block
@property (assign,nonatomic,__weak) id<BNPosting> poster;                           //@synthesize poster=_poster - In the implementation block
@property (nonatomic,copy,readonly) NSArray * topPresentables; 
@property (nonatomic,copy,readonly) NSArray * presentedPresentables; 
+(void)initialize;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id<BNPosting>)poster;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(id)_presentableForScrollEvent:(id)arg1 ;
-(id)_newBannerTransitionContextForPresenting:(BOOL)arg1 viewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)dismissPresentablesWithIdentification:(id)arg1 reason:(id)arg2 animated:(BOOL)arg3 userInfo:(id)arg4 ;
-(BOOL)_resetActiveTransitionCoordinator:(id)arg1 ;
-(void)_dismissPresentable:(id)arg1 withReason:(id)arg2 animated:(BOOL)arg3 userInfo:(id)arg4 ;
-(void)_removePresentable:(id)arg1 ;
-(void)_insertPresentable:(id)arg1 beneathPresentable:(id)arg2 withTransitioningDelegate:(id)arg3 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(CGRect)_insetFrame:(CGRect)arg1 forViewController:(id)arg2 ;
-(id<BNPresentingDelegate>)delegate;
-(id)_dismissPresentablesWithIdentification:(id)arg1 reason:(id)arg2 animated:(BOOL)arg3 userInfo:(id)arg4 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)_presentablesWithIdentification:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldFenceAnimationsForPresentable:(id)arg1 ;
-(void)_handlePan:(id)arg1 ;
-(CGRect)_presentedFrame:(BOOL)arg1 forViewController:(id)arg2 withContainerBounds:(CGRect)arg3 overshoot:(BOOL)arg4 ;
-(id<BNLayoutManaging>)layoutManager;
-(void)setPoster:(id<BNPosting>)arg1 ;
-(CGRect)_presentedFrameForViewController:(id)arg1 withContentFrame:(CGRect)arg2 afterContentWithFrame:(CGRect)arg3 ;
-(id)initWithAuthority:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)_resetPresentableForActiveGesture:(id)arg1 ;
-(CGPoint)gestureRecognizerProxy:(id)arg1 visualTranslationInCoordinateSpace:(id)arg2 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)_layoutManager;
-(id)_presentableForGestureInView:(id)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(id)dismissPresentablesWithIdentification:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 ;
-(CGPoint)_locationOfScrollEvent:(id)arg1 inContainerViewForGesture:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<BNPresentingDelegate>)arg1 ;
-(void)presentPresentable:(id)arg1 withOptions:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(NSArray *)presentedPresentables;
-(BOOL)_isTouchOutsideDismissalEnabledForPresentable:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(CGPoint)gestureRecognizerProxy:(id)arg1 velocityInCoordinateSpace:(id)arg2 ;
-(id<BNConsidering>)authority;
-(id)_presentableForTouch:(id)arg1 ;
-(CGPoint)gestureRecognizerProxy:(id)arg1 locationForTouch:(id)arg2 inCoordinateSpace:(id)arg3 ;
-(CGRect)_dismissedFrameForViewController:(id)arg1 withContainerBounds:(CGRect)arg2 ;
-(BOOL)_resetActiveBannerTransitionAnimator:(id)arg1 ;
-(void)_addPresentable:(id)arg1 withTransitioningDelegate:(id)arg2 incrementingTier:(BOOL)arg3 ;
-(CGPoint)gestureRecognizerProxy:(id)arg1 translationInCoordinateSpace:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_isDraggingDismissalEnabledForPresentable:(id)arg1 ;
-(CGRect)_presentedFrameForViewController:(id)arg1 withContainerBounds:(CGRect)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)sizeTransitionAnimationSettingsForPresentable:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2 ;
-(void)loadView;
-(BOOL)_isPresentableHUD:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(CGPoint)_translationInContainerViewForGesture:(id)arg1 ;
-(CGRect)_outsetFrame:(CGRect)arg1 forViewController:(id)arg2 ;
-(BOOL)_isLocalDraggingEnabledForPresentable:(id)arg1 ;
-(CGPoint)_locationOfTouch:(id)arg1 inContainerViewForGesture:(id)arg2 ;
-(id)_topPresentable;
-(BOOL)_isDraggingInteractionEnabledForPresentable:(id)arg1 ;
-(long long)_effectTierForPresentable:(id)arg1 ;
-(CGRect)_presentedFrameForPresentable:(id)arg1 withContainerBounds:(CGRect)arg2 ;
-(CGPoint)_velocityInContainerViewForGesture:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(CGRect)_dismissedFrameWithPaddingForViewController:(id)arg1 withContainerBounds:(CGRect)arg2 ;
-(NSArray *)topPresentables;
-(void)_insertPresentable:(id)arg1 beneathPresentable:(id)arg2 withTransitioningDelegate:(id)arg3 incrementingTier:(BOOL)arg4 ;
-(BOOL)_isDraggingEnabledForPresentable:(id)arg1 ;
-(BOOL)shouldOverlapPresentable:(id)arg1 withPresentable:(id)arg2 ;
-(id)userInterfaceStyleTransitionAnimationSettingsForPresentable:(id)arg1 forTransitionToStyle:(long long)arg2 ;
@end

