/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKNavigationController.h>
#import <libobjc.A.dylib/PKPassGroupViewDelegate.h>
#import <libobjc.A.dylib/PKPassFooterViewDelegate.h>
#import <libobjc.A.dylib/PKSecureElementObserver.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/PKPassDeleteHandler.h>
#import <libobjc.A.dylib/PKPassDeleteAnimationControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>
#import <libobjc.A.dylib/PKSpendingSummaryViewControllerDelegate.h>
#import <libobjc.A.dylib/PKDashboardPassViewControllerDelegate.h>
#import <libobjc.A.dylib/PKDashboardDelegate.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiterObserver.h>
#import <libobjc.A.dylib/PKPassGroupViewReceiver.h>
#import <libobjc.A.dylib/PKDiscoveryArticleViewControllerPresenter.h>

@protocol PKPassGroupViewDelegate, PKPassGroupViewReceiver, PKDashboardPassViewControllerDelegate;
@class PKNavigationDashboardAnimatedTransitioningHandler, PKGroup, PKSecureElement, PKGroupsController, UIView, PKAnimatedNavigationBarTitleView, PKPGSVTransitionInterstitialView, PKPassDeleteAnimationController, PKPass, UIPanGestureRecognizer, _UIDynamicValueAnimation, PKPassthroughView, PKPassFooterView, PKPassPresentationContext, PKDashboardPassViewController, PKPassGroupView, NSString;

@interface PKNavigationDashboardPassViewController : PKNavigationController <PKPassGroupViewDelegate, PKPassFooterViewDelegate, PKSecureElementObserver, UIViewControllerTransitioningDelegate, PKPassDeleteHandler, PKPassDeleteAnimationControllerDelegate, UIGestureRecognizerDelegate, CNAvatarViewDelegate, PKSpendingSummaryViewControllerDelegate, PKDashboardPassViewControllerDelegate, PKDashboardDelegate, PKForegroundActiveArbiterObserver, PKPassGroupViewReceiver, PKDiscoveryArticleViewControllerPresenter> {

	PKNavigationDashboardAnimatedTransitioningHandler* _transitioningHandler;
	PKGroup* _group;
	PKSecureElement* _secureElement;
	PKGroupsController* _groupsController;
	id<PKPassGroupViewDelegate> _formerGroupViewDelegate;
	UIView* _snapshotView;
	PKAnimatedNavigationBarTitleView* _titleView;
	PKPGSVTransitionInterstitialView* _leadingInterstitialItemView;
	PKPGSVTransitionInterstitialView* _trailingInterstitialItemView;
	PKPassDeleteAnimationController* _deleteAnimationController;
	PKPass* _passBeingDeleted;
	BOOL _passDeletionInitiated;
	double _presentationDuration;
	BOOL _isPresentedWithAnimationTransitioner;
	BOOL _isDismissedWithAnimationTransitioner;
	double _offsetBeforeDrag;
	CGPoint _positionBeforeDrag;
	UIPanGestureRecognizer* _panGestureRecognizer;
	double _dismissVelocity;
	BOOL _dismissedByDragging;
	CGPoint _lastPreferredOffset;
	BOOL _groupViewNeedsToBeMovedWithContentOffset;
	_UIDynamicValueAnimation* _offsetAnimation;
	PKPassthroughView* _passthroughView;
	PKPassthroughView* _portalledPassthroughView;
	PKPassFooterView* _passFooterView;
	BOOL _passGroupViewAcquired;
	BOOL _passFooterViewVisible;
	unsigned _passFooterViewOutstandingAnimations;
	unsigned _passFooterViewVisibilityToken;
	BOOL _shouldPauseDynamicCard;
	BOOL _dashboardIsVisible;
	BOOL _shouldUpdateSnapshotView;
	BOOL _snapshotViewIsHidden;
	unsigned char _visibilityState;
	SCD_Struct_PK5 _activeState;
	PKPassPresentationContext* _context;
	BOOL _isPendingVCPresentation;
	BOOL _footerSuppressed;
	BOOL _passGroupViewIsInCollectionView;
	BOOL _invalidated;
	id<PKPassGroupViewReceiver> _receiver;
	id<PKDashboardPassViewControllerDelegate> _passDashboardDelegate;
	PKDashboardPassViewController* _dashboardVC;
	UIView* _leadingItemView;
	UIView* _trailingItemView;
	PKPassGroupView* _passGroupView;
	double _topMargin;

}

@property (nonatomic,retain) PKDashboardPassViewController * dashboardVC;                                         //@synthesize dashboardVC=_dashboardVC - In the implementation block
@property (nonatomic,readonly) UIView * leadingItemView;                                                          //@synthesize leadingItemView=_leadingItemView - In the implementation block
@property (nonatomic,readonly) UIView * trailingItemView;                                                         //@synthesize trailingItemView=_trailingItemView - In the implementation block
@property (nonatomic,readonly) PKPassGroupView * passGroupView;                                                   //@synthesize passGroupView=_passGroupView - In the implementation block
@property (assign,nonatomic) BOOL passGroupViewIsInCollectionView;                                                //@synthesize passGroupViewIsInCollectionView=_passGroupViewIsInCollectionView - In the implementation block
@property (nonatomic,readonly) _UIDynamicValueAnimation * offsetAnimation;                                        //@synthesize offsetAnimation=_offsetAnimation - In the implementation block
@property (assign,getter=isInvalidated,nonatomic) BOOL invalidated;                                               //@synthesize invalidated=_invalidated - In the implementation block
@property (assign,nonatomic) double topMargin;                                                                    //@synthesize topMargin=_topMargin - In the implementation block
@property (assign,nonatomic) BOOL footerSuppressed;                                                               //@synthesize footerSuppressed=_footerSuppressed - In the implementation block
@property (getter=isFrontmostPassAuthorized,nonatomic,readonly) BOOL frontmostPassAuthorized; 
@property (assign,nonatomic,__weak) id<PKPassGroupViewReceiver> receiver;                                         //@synthesize receiver=_receiver - In the implementation block
@property (assign,nonatomic,__weak) id<PKDashboardPassViewControllerDelegate> passDashboardDelegate;              //@synthesize passDashboardDelegate=_passDashboardDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setTransitionDuration:(double)arg1 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK5)arg2 ;
-(id<PKPassGroupViewReceiver>)receiver;
-(BOOL)isInvalidated;
-(id)init;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setReceiver:(id<PKPassGroupViewReceiver>)arg1 ;
-(void)setTopMargin:(double)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(long long)modalPresentationStyle;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)summaryTypeDidChange;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(void)_reportEventForPassIfNecessary:(id)arg1 ;
-(double)topMargin;
-(void)doneTapped:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(void)viewDidLoad;
-(void)_updateSnapshotView;
-(PKDashboardPassViewController *)dashboardVC;
-(void)noteTransitionCompleted;
-(PKPassGroupView *)passGroupView;
-(void)groupViewIsAvailable:(id)arg1 ;
-(UIView *)leadingItemView;
-(UIView *)trailingItemView;
-(CGPoint)preferredContentOffset;
-(void)leadingHeaderViewInterstitialIsAvailable:(id)arg1 ;
-(void)trailingHeaderViewInterstitialIsAvailable:(id)arg1 ;
-(void)insertGroupView;
-(void)relinquishGroupView;
-(void)setPassGroupViewIsInCollectionView:(BOOL)arg1 ;
-(void)hideTitleView;
-(_UIDynamicValueAnimation *)offsetAnimation;
-(void)deleteAnimationController:(id)arg1 didComplete:(BOOL)arg2 ;
-(void)deleteAnimationControllerWillBeginDeleteAnimation:(id)arg1 ;
-(void)infoTapped:(id)arg1 ;
-(void)presentSearch;
-(void)_handleScrollViewPanGroupGesture:(id)arg1 ;
-(void)_updateNavigationBarWithPassAppeared:(BOOL)arg1 ;
-(void)_ensureCardPresence;
-(void)_updatePausedState;
-(void)_startReportingSessionForPassIfNecessary;
-(void)_endReportingSessionForPassIfNecessary;
-(BOOL)canRequestPaymentForPass:(id)arg1 ;
-(void)dashboardPassViewController:(id)arg1 didRequestPaymentForPass:(id)arg2 fromButton:(BOOL)arg3 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_updateTopViewController:(id)arg1 ;
-(void)_handlePanGroupGesture:(id)arg1 ;
-(void)_updatePassFooterViewIfNecessary;
-(id)_cardIndexPath;
-(void)_dismissIfPossible;
-(long long)groupViewContentModeForFrontmostPassWhenPiled:(id)arg1 withDefaultContentMode:(long long)arg2 ;
-(unsigned long long)groupViewPassesSuppressedContent:(id)arg1 ;
-(void)_updatePassFooterViewWithReload:(BOOL)arg1 ;
-(id)_createPassFooterConfigurationForPassView:(id)arg1 ;
-(void)invalidate;
-(double)_alphaForPassthroughView;
-(id)_dynamicAnimationForUpperBoundaryWithStart:(double)arg1 upperBoundary:(double)arg2 lowerBoundary:(double)arg3 initialVelocity:(double)arg4 ;
-(void)acquireGroupView:(id)arg1 ;
-(void)presentPassDetailsAnimated:(BOOL)arg1 action:(unsigned long long)arg2 ;
-(id)_barcodePassDetailsViewControllerForBarcodePass:(id)arg1 ;
-(id)_paymentPassDetailsViewControllerForPaymentPass:(id)arg1 ;
-(void)_canPresentCreditDetailsViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)presentSearchWithCompletion:(/*^block*/id)arg1 ;
-(void)_updatePassFooterView;
-(void)loadView;
-(void)dismissDiscoveryArticleViewController:(id)arg1 afterActionCompleted:(BOOL)arg2 withRelevantPassUniqueIdenitifer:(id)arg3 ;
-(void)groupViewTapped:(id)arg1 ;
-(BOOL)groupViewShouldAllowPanning:(id)arg1 ;
-(void)groupView:(id)arg1 didUpdatePassView:(id)arg2 ;
-(void)groupView:(id)arg1 deleteButtonPressedForPass:(id)arg2 ;
-(void)groupView:(id)arg1 frontmostPassViewDidChange:(id)arg2 withContext:(id)arg3 ;
-(void)secureElementDidEnterRestrictedMode:(id)arg1 ;
-(void)secureElementDidLeaveRestrictedMode:(id)arg1 ;
-(void)groupView:(id)arg1 faceViewFrameDidChangeForFrontmostPassView:(id)arg2 ;
-(long long)groupViewContentModeForFrontmostPassWhenStacked:(id)arg1 ;
-(void)passFooterViewDidChangePhysicalButtonRequirement:(id)arg1 ;
-(void)passFooterViewDidChangeCoachingState:(id)arg1 ;
-(BOOL)isPassFooterViewInGroup:(id)arg1 ;
-(unsigned long long)suppressedContentForPassFooter:(id)arg1 ;
-(void)setDashboardVC:(PKDashboardPassViewController *)arg1 ;
-(void)contentDidScroll;
-(BOOL)shouldOverrideContentOffset;
-(id)initWithPassGroupView:(id)arg1 groupsController:(id)arg2 groupViewReceiver:(id)arg3 context:(id)arg4 ;
-(BOOL)isFrontmostPassAuthorized;
-(void)setFooterSuppressed:(BOOL)arg1 ;
-(void)presentSpendingSummaryWithType:(unsigned long long)arg1 unit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentBalanceDetailsWithCompletion:(/*^block*/id)arg1 ;
-(void)showStatement:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentDailyCashForComponents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentTransaction:(id)arg1 forPaymentPass:(id)arg2 ;
-(void)presentInstallmentPlan:(id)arg1 ;
-(BOOL)footerSuppressed;
-(id<PKDashboardPassViewControllerDelegate>)passDashboardDelegate;
-(void)setPassDashboardDelegate:(id<PKDashboardPassViewControllerDelegate>)arg1 ;
-(BOOL)passGroupViewIsInCollectionView;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
@end

