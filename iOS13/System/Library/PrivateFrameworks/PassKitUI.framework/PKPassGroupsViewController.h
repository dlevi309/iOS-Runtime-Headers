/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKGroupsControllerDelegate.h>
#import <libobjc.A.dylib/PKPassGroupStackViewDatasource.h>
#import <libobjc.A.dylib/PKPassGroupStackViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiterObserver.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupDelegate.h>
#import <libobjc.A.dylib/PKPerformActionViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentAccountResolutionControllerDelegate.h>
#import <libobjc.A.dylib/PKAccountServiceAccountResolutionControllerDelegate.h>
#import <libobjc.A.dylib/PKDiscoveryDataSourceDelegate.h>
#import <libobjc.A.dylib/PKSubcredentialProvisioningFlowControllerDelegate.h>
#import <libobjc.A.dylib/_PKUIKVisibilityBackdropViewDelegate.h>
#import <libobjc.A.dylib/PKPGSVFooterViewDelegate.h>
#import <libobjc.A.dylib/PKPGSVSectionSubheaderDelegate.h>
#import <libobjc.A.dylib/PKPGSVSectionHeaderViewDelegate.h>
#import <libobjc.A.dylib/PKPassPersonalizationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKDiscoveryArticleViewControllerPresenter.h>

@protocol PKPassLibraryDataProvider;
@class PKPassGroupStackView, _PKUIKVisibilityBackdropView, PKPaymentService, NSTimer, NSMutableArray, NSArray, PKPeerPaymentService, PKPeerPaymentAccountResolutionController, PKAccountServiceAccountResolutionController, PKDiscoveryDataSource, PKGroupsController, PKDiscoveryGalleryView, NSString;

@interface PKPassGroupsViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, UIScrollViewDelegate, PKForegroundActiveArbiterObserver, PKPaymentServiceDelegate, PKPaymentSetupDelegate, PKPerformActionViewControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKDiscoveryDataSourceDelegate, PKSubcredentialProvisioningFlowControllerDelegate, _PKUIKVisibilityBackdropViewDelegate, PKPGSVFooterViewDelegate, PKPGSVSectionSubheaderDelegate, PKPGSVSectionHeaderViewDelegate, PKPassPersonalizationViewControllerDelegate, PKDiscoveryArticleViewControllerPresenter> {

	long long _invalidationStatus;
	PKPassGroupStackView* _groupStackView;
	_PKUIKVisibilityBackdropView* _headerBackground;
	_PKUIKVisibilityBackdropView* _footerBackground;
	double _headerBackgroundVisibility;
	double _footerBackgroundVisibility;
	PKPaymentService* _paymentService;
	unsigned long long _modalCardIndex;
	long long _presentationState;
	NSTimer* _allowDimmingTimer;
	NSTimer* _passViewedNotificationTimer;
	NSMutableArray* _blocksQueuedForUpdateCompletion;
	NSArray* _passUniqueIDsToExcludeFromFiltering;
	BOOL _persistentCardEmulationQueued;
	BOOL _viewAppeared;
	BOOL _viewAppearedBefore;
	BOOL _passesAreOutdated;
	BOOL _reloadingPasses;
	BOOL _backgroundMode;
	BOOL _inFailForward;
	unsigned long long _instanceFooterSuppressionCounter;
	int _expressTransactionNotificationObserver;
	id<PKPassLibraryDataProvider> _passLibraryDataProvider;
	PKPeerPaymentService* _peerPaymentService;
	PKPeerPaymentAccountResolutionController* _peerPaymentAccountResolutionController;
	PKAccountServiceAccountResolutionController* _accountServiceAccountResolutionController;
	PKDiscoveryDataSource* _discoveryDataSource;
	BOOL _inField;
	BOOL _handleFieldDetection;
	BOOL _welcomeStateEnabled;
	BOOL _externalModalPresentationAllowed;
	long long _style;
	PKGroupsController* _groupsController;
	unsigned long long _suppressedContent;
	PKDiscoveryGalleryView* _discoveryGalleryView;

}

@property (nonatomic,readonly) long long style;                                                                            //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) PKGroupsController * groupsController;                                                      //@synthesize groupsController=_groupsController - In the implementation block
@property (nonatomic,retain,readonly) PKPassGroupStackView * groupStackView; 
@property (nonatomic,readonly) BOOL presentingPass; 
@property (assign,nonatomic) unsigned long long suppressedContent;                                                         //@synthesize suppressedContent=_suppressedContent - In the implementation block
@property (assign) BOOL passesAreOutdated;                                                                                 //@synthesize passesAreOutdated=_passesAreOutdated - In the implementation block
@property (assign) BOOL handleFieldDetection;                                                                              //@synthesize handleFieldDetection=_handleFieldDetection - In the implementation block
@property (assign,getter=isWelcomeStateEnabled,nonatomic) BOOL welcomeStateEnabled;                                        //@synthesize welcomeStateEnabled=_welcomeStateEnabled - In the implementation block
@property (assign,getter=isExternalModalPresentationAllowed,nonatomic) BOOL externalModalPresentationAllowed;              //@synthesize externalModalPresentationAllowed=_externalModalPresentationAllowed - In the implementation block
@property (nonatomic,__weak,readonly) PKDiscoveryGalleryView * discoveryGalleryView;                                       //@synthesize discoveryGalleryView=_discoveryGalleryView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isPerformingAction;
+(void)beginSuppressingFooter;
+(void)endSuppressingFooter;
+(void)beginTrackingAction;
+(void)endTrackingAction;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)initWithCoder:(id)arg1 ;
-(long long)style;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(long long)preferredStatusBarStyle;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewSafeAreaInsetsDidChange;
-(BOOL)prefersStatusBarHidden;
-(void)setSuppressedContent:(unsigned long long)arg1 ;
-(unsigned long long)indexOfGroup:(id)arg1 ;
-(unsigned long long)numberOfGroups;
-(void)_localeDidChangeNotification:(id)arg1 ;
-(void)queuePersistentCardEmulation;
-(void)discoveryDataSource:(id)arg1 didUpdateArticleLayouts:(id)arg2 ;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK4)arg2 ;
-(void)paymentDeviceDidEnterFieldWithProperties:(id)arg1 ;
-(void)paymentDeviceDidExitField;
-(id)groupAtIndex:(unsigned long long)arg1 ;
-(id)groupsControllerShouldExcludePassesWithUniqueIDsFromFiltering:(id)arg1 ;
-(void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 ;
-(void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(unsigned long long)indexOfSeparationGroup;
-(void)viewTapped:(id)arg1 ;
-(void)_handlePeerPaymentAccountDidChangeNotification:(id)arg1 ;
-(void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2 ;
-(void)paymentSetupDidFinish:(id)arg1 ;
-(void)subcredentialProvisioningFlowController:(id)arg1 didFinishWithPass:(id)arg2 error:(id)arg3 ;
-(void)userCanceledPairingWithSubcredentialProvisioningFlowController:(id)arg1 ;
-(long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2 ;
-(id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1 ;
-(void)_handleProvisioningError:(id)arg1 ;
-(void)passPersonalizationViewController:(id)arg1 didFinishPersonalizingPass:(id)arg2 ;
-(unsigned long long)suppressedContent;
-(void)performActionViewControllerDidCancel:(id)arg1 ;
-(void)performActionViewControllerDidPerformAction:(id)arg1 ;
-(void)startPaymentPreflight:(id)arg1 withPaymentSetupMode:(long long)arg2 referrerIdentifier:(id)arg3 paymentNetwork:(id)arg4 transitNetworkIdentifier:(id)arg5 allowedFeatureIdentifiers:(id)arg6 ;
-(void)presentPassDetailsForHeaderView:(id)arg1 ;
-(id)passForSectionHeaderView:(id)arg1 ;
-(id)groupStackView:(id)arg1 headerForPassType:(unsigned long long)arg2 ;
-(id)groupStackView:(id)arg1 subheaderForPassType:(unsigned long long)arg2 ;
-(id)_barcodePassDetailsViewControllerForBarcodePass:(id)arg1 ;
-(id)_paymentPassDetailsViewControllerForPaymentPass:(id)arg1 ;
-(void)dismissDiscoveryArticleViewController:(id)arg1 afterActionCompleted:(BOOL)arg2 withRelevantPassUniqueIdenitifer:(id)arg3 ;
-(void)_regionConfigurationDidChangeNotification;
-(id)_peerPaymentAccountResolutionController;
-(id)initWithGroupsController:(id)arg1 ;
-(id)initWithGroupsController:(id)arg1 style:(long long)arg2 ;
-(void)_handleStatusBarChange:(id)arg1 ;
-(void)_handleFooterSupressionChange:(id)arg1 ;
-(void)_handleChildViewControllerRequestingServiceMode:(id)arg1 ;
-(void)_registerForExpressTransactionNotifications:(BOOL)arg1 ;
-(void)_updatePeerPaymentAccount;
-(void)_updateFooterSuppressionAnimated:(BOOL)arg1 ;
-(void)_applyPresentationState;
-(void)presentPassWithUniqueID:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_canPerformExternalModalPresentation;
-(BOOL)groupStackView:(id)arg1 willHaveHeaderViewForPassType:(unsigned long long)arg2 ;
-(id)_makeDiscoveryGalleryView;
-(void)reloadPasses;
-(void)allowIdleTimer;
-(void)_passViewedNotificationTimerFired;
-(id)_passPendingActivationToPresent;
-(void)_clearPassViewedNotificationTimer;
-(void)_startPassViewedNotificationTimer;
-(void)updateLockscreenIdleTimer;
-(void)forcePayment;
-(void)dismissPresentedVCsWithRequirements:(unsigned long long)arg1 animated:(BOOL)arg2 performAction:(/*^block*/id)arg3 ;
-(void)presentPassWithFieldProperties:(id)arg1 fieldMetadata:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)supportsExternalPresentation;
-(BOOL)presentingPass;
-(void)presentPassWithUniqueID:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)presentDefaultPaymentPassAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_presentWithUpdatedPasses:(/*^block*/id)arg1 ;
-(void)presentPassWithFieldProperties:(id)arg1 fieldPassUniqueIdentifiers:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)presentOnscreen:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updatePassesIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)_warnFailForward;
-(void)presentOffscreenAnimated:(BOOL)arg1 split:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)presentGroupTableAnimated:(BOOL)arg1 ;
-(void)setTableModalPresentationEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_passFromGroupsControllerWithUniqueIdentifier:(id)arg1 ;
-(void)_setupItemForExpressUpgradeMarket:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_beginSuppressingInstanceFooter;
-(void)_endSuppressingInstanceFooterWithContext:(id)arg1 ;
-(void)_presentGroupWithIndex:(unsigned long long)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)presentInstallmentPlanWithIdentifier:(id)arg1 forAccountIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentPassDetailsWithUniqueID:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_presentTransactionDetailsForTransaction:(id)arg1 paymentPass:(id)arg2 ;
-(void)presentPeerPaymentPassAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentPaymentSetupController;
-(id)_appleCardUpsellAlertWithAccount:(id)arg1 ;
-(void)presentSubcredentialPairingFlowWithConfig:(id)arg1 animated:(BOOL)arg2 ;
-(void)_invalidateForType:(long long)arg1 ;
-(void)_presentAddPassesControllerWithPasses:(id)arg1 ;
-(void)_resetToRootAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentPaymentSetupInMode:(long long)arg1 referrerIdentifier:(id)arg2 paymentNetwork:(id)arg3 transitNetworkIdentifier:(id)arg4 allowedFeatureIdentifiers:(id)arg5 ;
-(void)_updateFooterSuppressionWithContext:(id)arg1 ;
-(PKPassGroupStackView *)groupStackView;
-(void)_handleExpressNotification;
-(BOOL)isExternalModalPresentationAllowed;
-(BOOL)isInField;
-(id)featuredGroup;
-(BOOL)groupStackViewShouldShowHeaderViews:(id)arg1 ;
-(BOOL)groupStackView:(id)arg1 requiresHeaderForPassType:(unsigned long long)arg2 ;
-(id)footerForGroupStackView:(id)arg1 ;
-(void)reloadGroupsForGroupStackView:(id)arg1 ;
-(void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2 ;
-(void)groupStackViewDidBeginReordering:(id)arg1 ;
-(void)groupStackViewDidEndReordering:(id)arg1 ;
-(void)groupStackView:(id)arg1 wantsTopContentSeparatorWithVisibility:(double)arg2 animated:(BOOL)arg3 ;
-(void)groupStackView:(id)arg1 wantsBottomContentSeparatorWithVisibility:(double)arg2 animated:(BOOL)arg3 ;
-(BOOL)groupStackViewShouldAllowReordering:(id)arg1 ;
-(void)groupStackView:(id)arg1 groupDidMoveFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)groupStackView:(id)arg1 didTransitionToState:(long long)arg2 animated:(BOOL)arg3 ;
-(void)groupStackViewWantsForcedPayment:(id)arg1 ;
-(void)groupStackViewDidChangeCoachingState:(id)arg1 ;
-(void)shouldUpdateSectionSubheaderView:(id)arg1 ;
-(void)transitionToViewController:(id)arg1 ;
-(BOOL)hasDiscoveryContent;
-(void)presentPassWithUpdateUserNotificationIdentifier:(id)arg1 ;
-(void)reloadPassesWithCompletion:(/*^block*/id)arg1 ;
-(void)presentInitialState;
-(void)presentOffscreenAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)presentPileOffscreen;
-(void)presentGroupTable;
-(void)presentExpressUpgradeDetailForPassUniqueID:(id)arg1 marketIdentifier:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)presentInstallmentPlansForFeature:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentTransactionDetailsForTransactionWithIdentifier:(id)arg1 ;
-(void)presentTransactionDetailsForTransactionWithServiceIdentifier:(id)arg1 ;
-(void)presentPeerPaymentTermsAcceptance;
-(void)presentPeerPaymentVerifyIdentity;
-(void)presentPeerPaymentTopUp;
-(void)presentPeerPaymentSetupWithCurrencyAmount:(id)arg1 flowState:(unsigned long long)arg2 senderAddress:(id)arg3 ;
-(void)presentAccountServiceSchedulePayment:(id)arg1 ;
-(void)presentActionViewControllerWithUniqueID:(id)arg1 actionType:(unsigned long long)arg2 ;
-(void)presentCreditPassAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentPassDetailsAssociatedWithVirtualCardID:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentAccountServicePaymentWithReferenceIdentifier:(id)arg1 forPassWithUniqueID:(id)arg2 ;
-(void)presentSpendingSummaryForPassUniqueIdentifier:(id)arg1 type:(unsigned long long)arg2 unit:(unsigned long long)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)presentBalanceDetailsForPassUniqueIdentifier:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)showStatementForIdentifier:(id)arg1 passUniqueIdentifier:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentDailyCashForPassUniqueIdentifier:(id)arg1 dateComponents:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentDiscoveryArticleForItemWithIdentifier:(id)arg1 referrerIdentifier:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentSubcredentialInvitationWithIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)presentSubcredentialPairingFlowIfPossibleWithAppIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)setWelcomeStateEnabled:(BOOL)arg1 ;
-(void)partiallyInvalidate;
-(void)addVASPassWithIdentifier:(id)arg1 ;
-(void)presentAutomaticPresentationControllerForPassWithUniqueID:(id)arg1 ;
-(void)updateRegionSupportIfNecessary;
-(void)invitationViewController:(id)arg1 didFinishWithPass:(id)arg2 ;
-(PKGroupsController *)groupsController;
-(BOOL)passesAreOutdated;
-(void)setPassesAreOutdated:(BOOL)arg1 ;
-(BOOL)handleFieldDetection;
-(void)setHandleFieldDetection:(BOOL)arg1 ;
-(BOOL)isWelcomeStateEnabled;
-(void)setExternalModalPresentationAllowed:(BOOL)arg1 ;
-(PKDiscoveryGalleryView *)discoveryGalleryView;
@end

