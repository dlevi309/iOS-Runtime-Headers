/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@protocol OS_dispatch_queue, UICoordinateSpace, PKPaymentDashboardCellActionHandleable, OS_dispatch_source;
@class PKPaymentService, PKAuthenticator, PKContactlessInterfaceSession, PKPassPaymentPayStateView, NSObject, PKPeerPaymentService, PKPeerPaymentContactResolver, PKPeerPaymentAccountResolutionController, LAUIPhysicalButtonView, UIView, NSString, PKPassLibrary, PKPassPaymentApplicationView, PKPassValueAddedServiceInfoView, UIButton, NSMutableArray, UIViewController, NSNumber, PKTransitBalanceModel;

@interface PKPassPaymentContainerView : PKPassFooterContentView <PKPaymentServiceDelegate, PKAuthenticatorDelegate, PKPassPaymentPayStateViewDelegate, PKPassPaymentApplicationViewDelegate, PKContactlessInterfaceSessionDelegate, PKForegroundActiveArbiterObserver, PKUIForegroundActiveArbiterDeactivationObserver> {

	PKPaymentService* _paymentService;
	PKAuthenticator* _authenticator;
	PKContactlessInterfaceSession* _contactlessInterfaceSession;
	PKPassPaymentPayStateView* _payStateView;
	NSObject*<OS_dispatch_queue> _authorizationQueue;
	PKPeerPaymentService* _peerPaymentService;
	PKPeerPaymentContactResolver* _transactionFooterContactResolver;
	PKPeerPaymentAccountResolutionController* _peerPaymentAccountResolutionController;
	BOOL _fieldDetectShouldEmulateExpress;
	id<UICoordinateSpace> _fixedScreenCoordinateSpace;
	LAUIPhysicalButtonView* _physicalButtonView;
	UIView*<PKPaymentDashboardCellActionHandleable> _singleValueCellPrimary;
	UIView*<PKPaymentDashboardCellActionHandleable> _singleValueCellSecondary;
	UIView*<PKPaymentDashboardCellActionHandleable> _dualValueCellPrimary;
	UIView*<PKPaymentDashboardCellActionHandleable> _displayedCellPrimary;
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
	BOOL _recognizing;
	BOOL _returnToSummaryOnFingerOff;
	long long _faceIDState;
	BOOL _transitioning;
	NSMutableArray* _transitionCompletionHandlers;
	NSMutableArray* _pendingGlyphStateCompletionHandlers;
	BOOL _glyphStateDirty;
	BOOL _presentationWasForced;
	BOOL _presentationWasForFieldDetect;
	BOOL _waitingForGlyphView;
	long long _transactionSubstate;
	BOOL _holdingTerminalSubstate;
	NSObject*<OS_dispatch_source> _transactionResolutionTimer;
	NSObject*<OS_dispatch_source> _transactionTerminalResponseTimer;
	BOOL _presentingPasscode;
	BOOL _requiresPasscodeDismissal;
	UIViewController* _passcodeVC;
	SCD_Struct_PK4 _foregroundActiveState;
	unsigned _deactivationReasons;
	BOOL _isVisible;
	BOOL _waitingForPasses;
	BOOL _VASInfoViewHidden;
	BOOL _VASInfoViewWillShow;
	BOOL _VASInfoViewSuppressedTransactionUpdate;
	double _lastFieldExitTime;
	BOOL _pendingAutomaticAuthorization;
	BOOL _pendingPerformAuthorization;
	NSNumber* _pendingPresentationContextState;
	double _lastFingerOnTime;
	double _lastTransactionTime;
	NSObject*<OS_dispatch_source> _summaryAuthenticationTimer;
	BOOL _encounteredTerminalFailure;
	NSMutableArray* _valueAddedPasses;
	BOOL _didBecomeHiddenWhileAuthorized;
	PKTransitBalanceModel* _transitBalanceModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)userIntentPotentiallyRequiredForPass:(id)arg1 fieldDetect:(BOOL)arg2 ;
+(BOOL)shouldAutomaticallyAuthorizeForPass:(id)arg1 withContext:(id)arg2 ;
+(BOOL)initialUserIntentRequiredAssumptionForPass:(id)arg1 context:(id)arg2 paymentService:(id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)layoutSubviews;
-(id)_passcodeButtonTitle;
-(void)contactlessInterfaceSession:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)contactlessInterfaceSessionHasPendingServerRequest:(id)arg1 ;
-(void)contactlessInterfaceSession:(id)arg1 didEndPersistentCardEmulationWithContext:(id)arg2 ;
-(void)contactlessInterfaceSession:(id)arg1 didFinishTransactionWithContext:(id)arg2 ;
-(void)contactlessInterfaceSessionDidFailTransaction:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 ;
-(void)contactlessInterfaceSessionDidFail:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4 ;
-(void)contactlessInterfaceSessionDidStartTransaction:(id)arg1 ;
-(void)contactlessInterfaceSessionDidReceiveActivityTimeout:(id)arg1 ;
-(void)contactlessInterfaceSessionDidTimeout:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4 ;
-(void)contactlessInterfaceSessionDidTerminate:(id)arg1 ;
-(void)contactlessInterfaceSessionDidEnterField:(id)arg1 withProperties:(id)arg2 ;
-(void)contactlessInterfaceSessionDidExitField:(id)arg1 ;
-(void)contactlessInterfaceSessionDidSelectPayment:(id)arg1 ;
-(void)contactlessInterfaceSessionDidFailDeferredAuthorization:(id)arg1 ;
-(void)contactlessInterfaceSession:(id)arg1 didReceiveExpressState:(unsigned long long)arg2 ;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK4)arg2 ;
-(void)paymentServiceReceivedInterruption;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(void)_performAuthentication;
-(void)authenticatorDidEncounterMatchMiss:(id)arg1 ;
-(void)authenticatorWillRestartEvaluation:(id)arg1 ;
-(void)authenticator:(id)arg1 didTransitionToFaceIDState:(long long)arg2 ;
-(void)authenticator:(id)arg1 didTransitionToCoachingState:(long long)arg2 ;
-(void)authenticatorDidEncounterFingerOn:(id)arg1 ;
-(void)authenticatorDidEncounterFingerOff:(id)arg1 ;
-(void)authenticator:(id)arg1 didRequestUserAction:(long long)arg2 ;
-(void)presentPasscodeViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 reply:(/*^block*/id)arg3 ;
-(void)dismissPasscodeViewController;
-(BOOL)isPassAuthorized;
-(void)willBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)willBecomeHiddenAnimated:(BOOL)arg1 ;
-(void)didBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)didBecomeHiddenAnimated:(BOOL)arg1 ;
-(double)_topMargin;
-(BOOL)_isForegroundActive;
-(void)payStateViewDidUpdateLayout:(id)arg1 ;
-(void)payStateView:(id)arg1 revealingCheckmark:(BOOL)arg2 ;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateDeactivationReasons:(unsigned)arg2 ;
-(void)_updateContentPrimaryView;
-(void)_updateContentSecondaryView;
-(id)_findOrCreatePrimaryAdjustableSingleCellView;
-(id)_findOrCreatePrimaryFusedDoubleCellView;
-(id)_findOrCreateSecondaryView;
-(BOOL)_shouldDisplayPrimaryView;
-(BOOL)_shouldDisplaySecondaryView;
-(void)_configureForStyle:(long long)arg1 context:(id)arg2 ;
-(void)_commitPendingPayStateAnimated:(BOOL)arg1 ;
-(void)_endContactlessPaymentSession;
-(void)_executePendingGlyphStateCompletionHandlers:(BOOL)arg1 ;
-(void)_executeTransitionCompletionHandlers:(BOOL)arg1 ;
-(void)_resetToIdleState;
-(void)_setGlyphState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_applyPresentationPayState:(long long)arg1 ;
-(void)_endPaymentAuthorization;
-(void)_cancelHoldingTerminalTransactionSubstateIfNecessary;
-(void)_applyPayState:(long long)arg1 ;
-(BOOL)_recognizingBiometrics;
-(void)_resetActiveApplicationForPaymentPass:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_activateForPayment;
-(BOOL)_restartPaymentAuthorization;
-(void)_beginPaymentAuthorization;
-(void)_stopBiometricRecognitionAnimationWithSuccess:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_authenticationAllowed;
-(void)_emphasizeStateIfPossible:(long long)arg1 withTextOverride:(id)arg2 playSystemSound:(BOOL)arg3 ;
-(void)_setGlyphState:(long long)arg1 animated:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_startBiometricRecognitionAnimation;
-(void)_cancelBiometricRecognitionAndPromptUserAction:(long long)arg1 ;
-(void)_applyPayState:(long long)arg1 withTextOverride:(id)arg2 ;
-(BOOL)_isBackgrounded;
-(void)_cancelTerminalResponseTimeout;
-(void)_applyPaymentIndefiniteSuccessState;
-(void)_applyTerminalTransactionSubstateWithSuccess:(BOOL)arg1 reset:(BOOL)arg2 ;
-(void)_finishHoldingTerminalTransactionSubstateAfterDelay:(double)arg1 ;
-(void)_setVASInfoViewHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_presentPassWithUniqueIdentifier:(id)arg1 additionalPassUniqueIdentifiers:(id)arg2 payState:(long long)arg3 ;
-(BOOL)_shouldShowTerminalIsNotRequestingPaymentError;
-(void)_showTerminalIsNotRequestingPaymentError;
-(void)_processValueAddedServiceTransactionsForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_processPaymentTransactionForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_handleContactlessInterfaceSessionDidEnterField:(id)arg1 withProperties:(id)arg2 ;
-(id)_paymentApplicationForAutomaticAuthorizationFromPaymentApplications:(id)arg1 ;
-(void)_presentPassWithUniqueIdentifier:(id)arg1 additionalPassUniqueIdentifiers:(id)arg2 ;
-(void)_setValueAddedServicePasses:(id)arg1 ;
-(BOOL)_hasValueAddedServicePasses;
-(void)_promoteToAuthorizedStateIfPossible;
-(void)_showTerminalIsRequestingPaymentError;
-(void)_beginTerminalResponseTimeout;
-(void)_beginPaymentAuthorizationWithImmediatePasscode:(BOOL)arg1 ;
-(void)_updateAuthenticatorState;
-(void)_didAuthorizePaymentApplicationWithAuthenticationIdentifier:(unsigned long long)arg1 ;
-(void)_authorizeForTransactionWithCredential:(id)arg1 authenticationIdentifier:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_canAuthenticateWithBiometrics;
-(BOOL)_canAuthenticateWithPasscode;
-(void)_beginPasscodeOnlyAuthentication;
-(void)_cancelSummaryAuthenticationTimer;
-(void)_resetCardEmulationWithCompletion:(/*^block*/id)arg1 ;
-(void)_beginSummaryAuthenticationIfNecessary;
-(void)_resetToIdleStateAfterDelay:(double)arg1 ;
-(void)_resetToIdleStateWhileIgnoringField:(BOOL)arg1 ;
-(void)_activateForPaymentWithApplication:(id)arg1 ;
-(void)_activatePaymentApplication:(id)arg1 forPaymentPass:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_resetToIdleStateAfterDelay:(double)arg1 whileIgnoreField:(BOOL)arg2 ;
-(void)_applyPayState:(long long)arg1 withTextOverride:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_isDeactivated;
-(void)_applyLatestContentToViews;
-(id)_buttonForState:(long long)arg1 ;
-(void)_performActivationStateUpdate:(/*^block*/id)arg1 ;
-(BOOL)_isDeactivatedForReasons:(unsigned long long)arg1 ;
-(BOOL)_isBackgroundedForReasons:(unsigned long long)arg1 ;
-(void)_configureForPaymentWithPaymentPass:(id)arg1 context:(id)arg2 ;
-(void)_configureForValueAddedServiceWithPass:(id)arg1 context:(id)arg2 ;
-(id)_paymentApplicationForAutomaticAuthorization;
-(void)_applyPayState:(long long)arg1 withTextOverride:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_maintainAuthorizationAfterTransaction;
-(void)_updateApplicationsView;
-(void)_emphasizeStateIfPossible:(long long)arg1 withTextOverride:(id)arg2 ;
-(void)_transitionToState:(long long)arg1 withTextOverride:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_emphasisButtonForState:(long long)arg1 ;
-(BOOL)_isVASInfoViewVisible;
-(void)_addTransitionCompletionHandler:(/*^block*/id)arg1 ;
-(void)_transitionViewsFromPayState:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isPrimaryViewVisible;
-(BOOL)_isSecondaryViewVisible;
-(BOOL)_isSummaryViewVisible;
-(void)_updateVASInfoViewSuppressedTransactionIfNecessary;
-(void)_endTransition:(BOOL)arg1 ;
-(id)_filledButtonWithTitle:(id)arg1 ;
-(void)_passcodeAuthenticationButtonPressed:(id)arg1 ;
-(void)_addPasscodeButtonPressed:(id)arg1 ;
-(void)_prearmButtonPressed:(id)arg1 ;
-(void)_passcodeFallbackButtonPressed:(id)arg1 ;
-(void)paymentApplicationView:(id)arg1 didSelectApplication:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithPass:(id)arg1 context:(id)arg2 paymentSession:(id)arg3 paymentService:(id)arg4 ;
-(BOOL)_passContainsPaymentApplication:(id)arg1 ;
@end

