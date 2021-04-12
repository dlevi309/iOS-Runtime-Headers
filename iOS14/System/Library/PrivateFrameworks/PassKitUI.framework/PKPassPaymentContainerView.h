/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPassFooterContentView.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <libobjc.A.dylib/PKAuthenticatorDelegate.h>
#import <libobjc.A.dylib/PKPassPaymentPayStateViewDelegate.h>
#import <libobjc.A.dylib/PKPassPaymentApplicationViewDelegate.h>
#import <libobjc.A.dylib/PKContactlessInterfaceSessionDelegate.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiterObserver.h>
#import <libobjc.A.dylib/PKUIForegroundActiveArbiterDeactivationObserver.h>
#import <libobjc.A.dylib/PKTransactionAuthenticationPasscodeViewControllerDelegate.h>
#import <libobjc.A.dylib/PKLinkedApplicationObserver.h>
#import <UIKit/UITextViewDelegate.h>

@protocol OS_dispatch_queue, UICoordinateSpace, PKPaymentDashboardCellActionHandleable, OS_dispatch_source;
@class PKPaymentService, PKAuthenticator, PKContactlessInterfaceSession, PKPassPaymentPayStateView, NSObject, PKPeerPaymentService, PKPeerPaymentContactResolver, PKPeerPaymentAccountResolutionController, LAUIPhysicalButtonView, UIView, NSString, PKPassLibrary, PKPassPaymentApplicationView, PKPassValueAddedServiceInfoView, UIButton, NSMutableArray, UIViewController, NSNumber, PKTransitBalanceModel, NSData, PKAssertion, PKPaymentTransactionView, PKPaymentTransaction, UITextView, PKLinkedApplication, PKPaymentBarcodeViewController;

@interface PKPassPaymentContainerView : PKPassFooterContentView <PKPaymentServiceDelegate, PKAuthenticatorDelegate, PKPassPaymentPayStateViewDelegate, PKPassPaymentApplicationViewDelegate, PKContactlessInterfaceSessionDelegate, PKForegroundActiveArbiterObserver, PKUIForegroundActiveArbiterDeactivationObserver, PKTransactionAuthenticationPasscodeViewControllerDelegate, PKLinkedApplicationObserver, UITextViewDelegate> {

	PKPaymentService* _paymentService;
	PKAuthenticator* _authenticator;
	PKContactlessInterfaceSession* _contactlessInterfaceSession;
	PKPassPaymentPayStateView* _payStateView;
	NSObject*<OS_dispatch_queue> _authorizationQueue;
	PKPeerPaymentService* _peerPaymentService;
	PKPeerPaymentContactResolver* _transactionFooterContactResolver;
	PKPeerPaymentAccountResolutionController* _peerPaymentAccountResolutionController;
	id<UICoordinateSpace> _fixedScreenCoordinateSpace;
	LAUIPhysicalButtonView* _physicalButtonView;
	UIView*<PKPaymentDashboardCellActionHandleable> _singleValueCellPrimary;
	UIView*<PKPaymentDashboardCellActionHandleable> _singleValueCellSecondary;
	UIView*<PKPaymentDashboardCellActionHandleable> _dualValueCellPrimary;
	UIView* _displayedCellPrimary;
	unsigned long long _transactionUpdateCounter;
	NSString* _ignoringUpdatesFromTransactionIdentifier;
	PKPassLibrary* _passLibrary;
	PKPassPaymentApplicationView* _applicationsView;
	PKPassValueAddedServiceInfoView* _valueAddedServiceInfoView;
	UIButton* _actionButton;
	NSString* _pendingPayStateTextOverride;
	unsigned long long _payStateTransitionCounter;
	long long _pendingPayState;
	BOOL _pendingPayStateAnimated;
	long long _pendingPayStateGlyphState;
	BOOL _pendingPayStateGlyphStateAnimated;
	BOOL _pendingPayStateGlyphStateQueued;
	long long _currentPayState;
	unsigned long long _authenticatorState;
	BOOL _authenticating;
	BOOL _userIntentRequired;
	long long _userIntentStyle;
	long long _authenticationEvaluationState;
	BOOL _transitioning;
	NSMutableArray* _transitionCompletionHandlers;
	NSMutableArray* _pendingGlyphStateCompletionHandlers;
	BOOL _glyphStateDirty;
	BOOL _presentationWasForcedFromButton;
	BOOL _presentationWasForFieldDetect;
	BOOL _waitingForGlyphView;
	long long _transactionSubstate;
	BOOL _holdingTerminalSubstate;
	NSObject*<OS_dispatch_source> _transactionResolutionTimer;
	NSObject*<OS_dispatch_source> _transactionTerminalResponseTimer;
	BOOL _presentingPasscode;
	BOOL _requiresPasscodeDismissal;
	UIViewController* _passcodeVC;
	SCD_Struct_PK5 _foregroundActiveState;
	unsigned _deactivationReasons;
	BOOL _isVisible;
	BOOL _waitingForPasses;
	BOOL _VASInfoViewHidden;
	BOOL _VASInfoViewWillShow;
	BOOL _VASInfoViewSuppressedTransactionUpdate;
	double _lastFieldExitTime;
	BOOL _pendingAutomaticAuthorization;
	NSNumber* _pendingPresentationContextState;
	double _lastTransactionTime;
	BOOL _encounteredTerminalFailure;
	NSMutableArray* _valueAddedPasses;
	BOOL _didBecomeHiddenWhileAuthorized;
	PKTransitBalanceModel* _transitBalanceModel;
	NSString* _activeBarcodeIdentifier;
	NSData* _activeBarcodeCredential;
	PKAssertion* _userNotificationSupressionAssertion;
	PKAssertion* _expressModeSuppressionAssertion;
	NSObject*<OS_dispatch_source> _barcodeDisplayTimer;
	BOOL _transactionAuthenticationInProgress;
	BOOL _transactionAuthenticationUIActive;
	UIViewController* _activeTransactionAuthenticationViewController;
	PKPaymentTransactionView* _transactionAwardsView;
	PKPaymentTransaction* _transactionForDisplayedBarcode;
	UITextView* _bottomTextView;
	BOOL _bottomTextViewAnimating;
	BOOL _bottomTextViewNeedsUpdate;
	double _bottomTextViewDisplayedTimestamp;
	PKLinkedApplication* _linkedApplication;
	NSMutableArray* _linkedApplicationUpdateCompletionHandlers;
	BOOL _collectingBarcodeEventMetadata;
	PKPaymentBarcodeViewController* _barcodeViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)initialUserIntentRequiredAssumptionForPass:(id)arg1 context:(id)arg2 paymentService:(id)arg3 ;
+(BOOL)initialPhysicalButtonRequiredAssumptionForPass:(id)arg1 context:(id)arg2 paymentService:(id)arg3 ;
+(BOOL)_initialUserIntentRequiredAssumptionForPass:(id)arg1 context:(id)arg2 paymentService:(id)arg3 requirePhysicalButton:(BOOL)arg4 ;
+(BOOL)userIntentPotentiallyRequiredForPass:(id)arg1 fieldDetect:(BOOL)arg2 ;
+(BOOL)shouldAutomaticallyAuthorizeForPass:(id)arg1 withContext:(id)arg2 ;
-(void)_openURL:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK5)arg2 ;
-(void)_showInstallAssociatedApplicationInstructionsIfNecessary;
-(void)_collectAndSubmitBarcodeEventMetadataWithAuthenticationType:(long long)arg1 ;
-(void)_insertPaymentTransactionForActiveBarcode;
-(void)_transactionAwardsViewTapped:(id)arg1 ;
-(void)_applyLatestContentToViews;
-(void)_performActivationStateUpdate:(/*^block*/id)arg1 ;
-(BOOL)_isDeactivatedForReasons:(unsigned long long)arg1 ;
-(BOOL)_isBackgroundedForReasons:(unsigned long long)arg1 ;
-(void)linkedApplicationDidChangeState:(id)arg1 ;
-(void)_configureForPaymentWithPaymentPass:(id)arg1 context:(id)arg2 ;
-(void)_configureForValueAddedServiceWithPass:(id)arg1 context:(id)arg2 ;
-(void)_applyPayState:(long long)arg1 withTextOverride:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)_actionAfterTransaction;
-(void)_updateApplicationsView;
-(void)_emphasizeStateIfPossible:(long long)arg1 withTextOverride:(id)arg2 ;
-(void)_transitionToState:(long long)arg1 withTextOverride:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_emphasisButtonForState:(long long)arg1 ;
-(BOOL)_isVASInfoViewVisible;
-(void)_showEmphasisButtonForStateIfPossible:(long long)arg1 ;
-(void)_addTransitionCompletionHandler:(/*^block*/id)arg1 ;
-(void)_transitionViewsFromPayState:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)_showPhysicalButtonForPayState:(long long)arg1 ;
-(void)_setUserIntentRequired:(BOOL)arg1 ;
-(BOOL)_isForegroundActive;
-(void)authenticator:(id)arg1 didTransitionToEvaluationStateWithEvent:(SCD_Struct_PK4)arg2 ;
-(void)authenticator:(id)arg1 didTransitionToCoachingState:(long long)arg2 ;
-(void)presentPasscodeViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 reply:(/*^block*/id)arg3 ;
-(void)dismissPasscodeViewController;
-(void)showFullScreenBarcode;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(void)layoutSubviews;
-(BOOL)_showGlyphForPayState:(long long)arg1 ;
-(BOOL)_isPrimaryViewVisible;
-(BOOL)_isSecondaryViewVisible;
-(void)_endTransition:(BOOL)arg1 ;
-(void)_setUserIntentStyle:(long long)arg1 ;
-(void)_updatePhysicalButtonRequirement;
-(id)_passcodeButtonTitle;
-(id)_filledButtonWithTitle:(id)arg1 ;
-(void)_passcodeFallbackButtonPressed:(id)arg1 ;
-(void)_addPasscodeButtonPressed:(id)arg1 ;
-(void)_updateVASInfoViewSuppressedTransactionIfNecessary;
-(void)_performAuthenticationForTransactionIfNecessary:(id)arg1 ;
-(void)_performPaymentPINCollectionForTransaction:(id)arg1 ;
-(void)_updateContentPrimaryView;
-(void)_updateContentSecondaryView;
-(id)_findOrCreateSecondaryView;
-(id)_findOrCreatePrimaryAdjustableSingleCellView;
-(id)_findOrCreatePrimaryFusedDoubleCellView;
-(BOOL)_shouldDisplayPrimaryView;
-(BOOL)_shouldDisplaySecondaryView;
-(void)_performUserConfirmationForTransaction:(id)arg1 ;
-(void)_performApplicationRedirectForTransaction:(id)arg1 ;
-(void)_setTransactionAuthenticationInProgress:(BOOL)arg1 ;
-(void)_setTransactionAuthenticationUIActive:(BOOL)arg1 ;
-(void)_cancelTransactionAuthentication;
-(void)_dismissTransactionAuthenticationPasscodeViewController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_attributedStringForBottomTextViewFromString:(id)arg1 ;
-(void)paymentApplicationView:(id)arg1 didSelectApplication:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithPass:(id)arg1 context:(id)arg2 paymentSession:(id)arg3 paymentService:(id)arg4 ;
-(BOOL)isPassAuthorized;
-(void)willBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)willBecomeHiddenAnimated:(BOOL)arg1 ;
-(void)invalidate;
-(void)didBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)didBecomeHiddenAnimated:(BOOL)arg1 ;
-(void)_configureForStyle:(long long)arg1 context:(id)arg2 ;
-(void)_commitPendingPayStateAnimated:(BOOL)arg1 ;
-(void)_endContactlessPaymentSession;
-(void)_executePendingGlyphStateCompletionHandlers:(BOOL)arg1 ;
-(BOOL)_isDeactivated;
-(void)_executeTransitionCompletionHandlers:(BOOL)arg1 ;
-(void)_resetToIdleState;
-(void)_setGlyphState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_applyPresentationPayState:(long long)arg1 ;
-(void)_endPaymentAuthorization;
-(void)_cancelHoldingTerminalTransactionSubstateIfNecessary;
-(void)_applyPayState:(long long)arg1 ;
-(void)coachingStateDidChange;
-(void)_updateCoachingInstruction;
-(BOOL)_authenticationAllowed;
-(BOOL)_recognizingBiometrics;
-(void)_resetActiveApplicationForPaymentPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_activateForPayment;
-(BOOL)_restartPaymentAuthorization;
-(void)_beginPaymentAuthorization;
-(void)contactlessInterfaceSession:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)contactlessInterfaceSessionHasPendingServerRequest:(id)arg1 ;
-(void)contactlessInterfaceSession:(id)arg1 didEndPersistentCardEmulationWithContext:(id)arg2 ;
-(void)contactlessInterfaceSession:(id)arg1 didFinishTransactionWithContext:(id)arg2 ;
-(void)contactlessInterfaceSessionDidFailTransaction:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 ;
-(void)contactlessInterfaceSessionDidFail:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4 ;
-(void)contactlessInterfaceSessionDidStartTransaction:(id)arg1 ;
-(void)contactlessInterfaceSessionDidReceiveActivityTimeout:(id)arg1 ;
-(void)contactlessInterfaceSessionDidTerminate:(id)arg1 ;
-(void)contactlessInterfaceSessionDidTimeout:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4 ;
-(void)contactlessInterfaceSessionDidExitField:(id)arg1 ;
-(void)contactlessInterfaceSessionDidSelectPayment:(id)arg1 ;
-(void)contactlessInterfaceSessionDidFailDeferredAuthorization:(id)arg1 ;
-(void)contactlessInterfaceSession:(id)arg1 didReceiveExpressState:(unsigned long long)arg2 ;
-(void)contactlessInterfaceSessionDidEnterField:(id)arg1 withProperties:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2 ;
-(void)passcodeViewControllerDidCancel:(id)arg1 ;
-(void)passcodeViewController:(id)arg1 didGenerateEncryptedPasscode:(id)arg2 ;
-(void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)_emphasizeStateIfPossible:(long long)arg1 withTextOverride:(id)arg2 playSystemSound:(BOOL)arg3 ;
-(void)_setGlyphState:(long long)arg1 animated:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_handleReceivedBarcodePaymentTransaction:(id)arg1 ;
-(void)_cancelTerminalResponseTimeout;
-(void)_applyPaymentIndefiniteSuccessState;
-(void)_applyTerminalTransactionSubstateWithSuccess:(BOOL)arg1 reset:(BOOL)arg2 ;
-(void)_finishHoldingTerminalTransactionSubstateAfterDelay:(double)arg1 ;
-(void)_setVASInfoViewHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_shouldShowTerminalIsNotRequestingPaymentError;
-(BOOL)_isBackgrounded;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)_presentPassWithUniqueIdentifier:(id)arg1 additionalPassUniqueIdentifiers:(id)arg2 payState:(long long)arg3 ;
-(void)_showTerminalIsNotRequestingPaymentError;
-(void)_processValueAddedServiceTransactionsForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_processPaymentTransactionForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_applyPayState:(long long)arg1 withTextOverride:(id)arg2 ;
-(void)_handleContactlessInterfaceSessionDidEnterField:(id)arg1 withProperties:(id)arg2 ;
-(void)_presentPassWithUniqueIdentifier:(id)arg1 additionalPassUniqueIdentifiers:(id)arg2 ;
-(void)_setValueAddedServicePasses:(id)arg1 ;
-(BOOL)_hasValueAddedServicePasses;
-(void)_promoteToAuthorizedStateIfPossible;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateDeactivationReasons:(unsigned)arg2 ;
-(void)payStateViewDidUpdateLayout:(id)arg1 ;
-(void)payStateView:(id)arg1 revealingCheckmark:(BOOL)arg2 ;
-(void)_showTerminalIsRequestingPaymentError;
-(void)_beginTerminalResponseTimeout;
-(void)_postDidAuthorizeNotification;
-(void)_postDidDeauthorizeNotification;
-(void)_updateAuthenticatorState;
-(BOOL)_canAuthenticateWithBiometrics;
-(void)_didAuthorizePaymentApplicationWithAuthenticationIdentifier:(unsigned long long)arg1 ;
-(void)_authorizeForTransactionWithAuthenticatorEvaluationResponse:(id)arg1 authenticationIdentifier:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performAuthentication;
-(BOOL)_canAuthenticateWithPasscode;
-(void)_updateBottomTextView;
-(void)_resetCardEmulationWithCompletion:(/*^block*/id)arg1 ;
-(void)_resetTransactionAuthenticationIfNecessary;
-(void)_dismissBarcodeViewControllerIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)_cancelBarcodeDisplayTimer;
-(void)_applyPayState:(long long)arg1 withTextOverride:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_resetToIdleStateAfterDelay:(double)arg1 ;
-(void)_activateForPaymentWithApplication:(id)arg1 ;
-(void)_activatePaymentApplication:(id)arg1 forPaymentPass:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_beginBarcodeDisplayTimer;
-(id)_buttonForState:(long long)arg1 ;
-(void)dealloc;
-(double)_topMargin;
-(void)paymentServiceReceivedInterruption;
@end

