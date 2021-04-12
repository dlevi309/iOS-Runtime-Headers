/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UserNotificationsUIKit/NCNotificationViewController.h>
#import <libobjc.A.dylib/NCNotificationViewControllerObserving.h>
#import <libobjc.A.dylib/PLViewControllerAnimatorDelegate.h>
#import <UIKit/UIDragInteractionDelegate.h>
#import <libobjc.A.dylib/PLClickPresentationInteractionManagerDelegate.h>
#import <libobjc.A.dylib/NCBannerPresentationTransitioningDelegateObserver.h>
#import <libobjc.A.dylib/PLExpandedPlatterPresentationControllerDelegate.h>
#import <libobjc.A.dylib/NCLongLookDefaultPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PLClickPresentationInteractionPresenting.h>

@protocol UIViewControllerContextTransitioning;
@class PLClickPresentationInteractionManager, UIView, NCBannerPresentationTransitionDelegate, NCNotificationLongLookViewController, UIViewController, UITapGestureRecognizer, UIHoverGestureRecognizer, NSDate, UIScrollView, NCNotificationViewController, NSString;

@interface NCNotificationShortLookViewController : NCNotificationViewController <NCNotificationViewControllerObserving, PLViewControllerAnimatorDelegate, UIDragInteractionDelegate, PLClickPresentationInteractionManagerDelegate, NCBannerPresentationTransitioningDelegateObserver, PLExpandedPlatterPresentationControllerDelegate, NCLongLookDefaultPresentationControllerDelegate, PLClickPresentationInteractionPresenting> {

	NCBannerPresentationTransitionDelegate* _bannerPresentationTransitionDelegate;
	NCNotificationLongLookViewController* _longLookNotificationViewController;
	UIView* _contextDefiningContainerView;
	UIViewController* _contextDefiningViewController;
	UITapGestureRecognizer* _tapGesture;
	UIHoverGestureRecognizer* _hoverGestureRecognizer;
	NSDate* _tapBeginTime;
	id<UIViewControllerContextTransitioning> _scrollPresentationTransitionContext;
	CGRect _finalPresentedFrameOfViewForPreview;
	UIView* _lookViewWrapper;
	long long _trigger;
	BOOL _didScrollPresentLongLookViewController;
	PLClickPresentationInteractionManager* _clickPresentationInteractionManager;
	UIScrollView* _scrollView;

}

@property (assign,setter=_setDidScrollPresentLongLookViewController:,getter=_didScrollPresentLongLookViewController,nonatomic) BOOL didScrollPresentLongLookViewController;              //@synthesize didScrollPresentLongLookViewController=_didScrollPresentLongLookViewController - In the implementation block
@property (getter=_scrollView,nonatomic,retain) UIScrollView * scrollView;                                                                                                               //@synthesize scrollView=_scrollView - In the implementation block
@property (getter=_presentedLongLookViewController,nonatomic,readonly) NCNotificationViewController * presentedLongLookViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PLClickPresentationInteractionManager * clickPresentationInteractionManager;                                                                              //@synthesize clickPresentationInteractionManager=_clickPresentationInteractionManager - In the implementation block
@property (nonatomic,readonly) UIView * viewForPreview; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,readonly) CGRect initialPresentedFrameOfViewForPreview; 
@property (nonatomic,readonly) CGRect finalPresentedFrameOfViewForPreview; 
@property (nonatomic,readonly) CGRect finalDismissedFrameOfViewForPreview; 
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(id)_scrollView;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3 ;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(BOOL)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3 ;
-(id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3 ;
-(void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3 ;
-(id)_requiredContextIDsForDragSessionInView:(id)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setHasShadow:(BOOL)arg1 ;
-(void)setContentReplacedWithSnapshot:(BOOL)arg1 ;
-(void)_updateScrollViewContentSize;
-(void)setMaterialGroupNameBase:(id)arg1 ;
-(PLClickPresentationInteractionManager *)clickPresentationInteractionManager;
-(CGRect)initialPresentedFrameOfViewForPreview;
-(CGRect)finalPresentedFrameOfViewForPreview;
-(CGRect)finalDismissedFrameOfViewForPreview;
-(void)_configureScrollViewIfNecessary;
-(UIView *)viewForPreview;
-(void)viewControllerAnimator:(id)arg1 didEndPresentationAnimation:(BOOL)arg2 withTransitionContext:(id)arg3 ;
-(id)containerViewForClickPresentationInteractionManager:(id)arg1 ;
-(id)transitioningDelegateForClickPresentationInteractionManager:(id)arg1 ;
-(BOOL)clickPresentationInteractionManager:(id)arg1 shouldBeginInteractionWithTouchAtLocation:(CGPoint)arg2 ;
-(void)clickPresentationInteractionManager:(id)arg1 shouldFinishInteractionThatReachedForceThreshold:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)clickPresentationInteractionManagerWillBeginUserInteraction:(id)arg1 ;
-(void)clickPresentationInteractionManagerDidEndUserInteraction:(id)arg1 ;
-(void)clickPresentationInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2 ;
-(void)clickPresentationInteractionManager:(id)arg1 declinedDismissingPresentedContentWithTrigger:(long long)arg2 ;
-(BOOL)clickPresentationInteractionManagerShouldAllowLongPressGesture:(id)arg1 ;
-(id)presentedViewControllerForClickPresentationInteractionManager:(id)arg1 ;
-(BOOL)isContentExtensionVisible:(id)arg1 ;
-(id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(BOOL)arg2 ;
-(BOOL)_setNotificationRequest:(id)arg1 ;
-(BOOL)_isPresentingCustomContentProvidingViewController;
-(void)_updateWithProvidedAuxiliaryOptionsContent;
-(BOOL)isShortLook;
-(BOOL)didReceiveNotificationRequest:(id)arg1 ;
-(BOOL)dismissPresentedViewControllerAndClearNotification:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_presentedLongLookViewController;
-(unsigned long long)_maximumNumberOfPrimaryTextLinesForProvidedStaticContent;
-(unsigned long long)_maximumNumberOfPrimaryLargeTextLinesForProvidedStaticContent;
-(unsigned long long)_maximumNumberOfSecondaryTextLinesForProvidedStaticContent;
-(unsigned long long)_maximumNumberOfSecondaryLargeTextLinesForProvidedStaticContent;
-(void)_loadLookView;
-(void)_notificationViewControllerViewDidLoad;
-(void)notificationViewControllerWillPresent:(id)arg1 ;
-(void)notificationViewControllerDidPresent:(id)arg1 ;
-(void)notificationViewControllerWillDismiss:(id)arg1 ;
-(void)notificationViewControllerDidDismiss:(id)arg1 ;
-(BOOL)_shouldPadScrollViewContentSizeHeight;
-(BOOL)hasCommittedToPresentingCustomContentProvidingViewController;
-(BOOL)isNotPresentingOrHasCommittedToDismissingCustomContentProvidingViewController;
-(void)expandAndPlayMedia;
-(BOOL)shouldRestorePresentingShortLookOnDismiss;
-(void)setInteractionEnabled:(BOOL)arg1 ;
-(BOOL)isCoalescedNotificationBundle;
-(void)setCustomContentHomeAffordanceVisible:(BOOL)arg1 ;
-(void)setCustomContentHomeAffordanceGestureRecognizer:(id)arg1 ;
-(void)setNotificationContentViewHidden:(BOOL)arg1 ;
-(void)presentLongLookAnimated:(BOOL)arg1 trigger:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleHoverGestureRecognizerEvent:(id)arg1 ;
-(BOOL)wantsUseableContainerBoundsForTransitionWithDelegate:(id)arg1 ;
-(CGRect)expandedPlatterPresentationController:(id)arg1 frameForTransitionViewInPresentationSuperview:(id)arg2 ;
-(BOOL)expandedPlatterPresentationControllerShouldProvideBackground:(id)arg1 ;
-(unsigned long long)_maximumNumberOfTextLinesForProvidedStaticContentWithDefaultNumber:(unsigned long long)arg1 isPrimary:(BOOL)arg2 isLarge:(BOOL)arg3 ;
-(id)_notificationShortLookViewIfLoaded;
-(void)_updateShortLookShadow;
-(void)_presentLongLookForScrollAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentLongLookViaClickPresentationInteraction:(/*^block*/id)arg1 ;
-(id)_newClickPresentationInteractionManager;
-(BOOL)_shouldUseHapticTouch;
-(void)_handleTapOnView:(id)arg1 ;
-(void)_expandCoalescedNotificationBundle;
-(BOOL)_shouldPerformHoverHighlighting;
-(id)_longLookNotificationViewController;
-(void)_loadPresentationContainerViewIfNecessary;
-(void)_presentLongLookAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setDidScrollPresentLongLookViewController:(BOOL)arg1 ;
-(void)_handlePresentedContentDismissalWithTrigger:(long long)arg1 ;
-(CGRect)_frameForTransitionViewInScrollView;
-(void)_completeScrollPresentation;
-(BOOL)_tryDismissingShortLookInScrollView:(id)arg1 ;
-(BOOL)_didScrollPresentLongLookViewController;
@end

