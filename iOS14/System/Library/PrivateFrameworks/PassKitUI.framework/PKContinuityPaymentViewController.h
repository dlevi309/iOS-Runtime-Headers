/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKAuthenticatorDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationFooterViewDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationStateMachineDelegate.h>

@protocol PKPaymentAuthorizationHostProtocol;
@class UIVisualEffectView, UIView, LAUIPhysicalButtonView, UILabel, UIStackView, PKContinuityPaymentCardSummaryView, PKPaymentAuthorizationFooterView, PKContinuityPaymentFaviconView, UIViewController, NSArray, PKAuthenticator, PKPaymentAuthorizationStateMachine, NSTimer, PKRemotePaymentRequest, NSString;

@interface PKContinuityPaymentViewController : UIViewController <PKAuthenticatorDelegate, PKPaymentAuthorizationFooterViewDelegate, PKPaymentAuthorizationStateMachineDelegate> {

	UIVisualEffectView* _backdropView;
	UIView* _dimmingBackgroundView;
	UIView* _compactRegion;
	LAUIPhysicalButtonView* _physicalButtonView;
	UILabel* _requestingDeviceLabel;
	UILabel* _requestingSiteLabel;
	UILabel* _priceLabel;
	UIView* _priceView;
	UIStackView* _summaryContainerView;
	PKContinuityPaymentCardSummaryView* _cardView;
	PKPaymentAuthorizationFooterView* _authorizationView;
	PKContinuityPaymentFaviconView* _faviconImage;
	UIViewController* _passcodeViewController;
	UIViewController* _passphraseViewController;
	BOOL _viewAppeared;
	BOOL _userIntentRequired;
	long long _userIntentStyle;
	long long _internalAuthenticationEvaluationState;
	BOOL _idleStateIsPasscode;
	long long _coachingState;
	long long _internalCoachingState;
	NSArray* _activeConstraints;
	NSArray* _defaultConstraints;
	NSArray* _compactConstraints;
	BOOL _authenticating;
	PKAuthenticator* _authenticator;
	PKPaymentAuthorizationStateMachine* _stateMachine;
	NSTimer* _timeoutTimer;
	BOOL _attemptedTimeout;
	id<PKPaymentAuthorizationHostProtocol> _delegate;
	PKRemotePaymentRequest* _remoteRequest;

}

@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationHostProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PKRemotePaymentRequest * remoteRequest;                            //@synthesize remoteRequest=_remoteRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)init;
-(id)initWithRemotePaymentRequest:(id)arg1 ;
-(BOOL)paymentPass:(id*)arg1 paymentApplication:(id*)arg2 fromAID:(id)arg3 ;
-(void)_updateUserIntentStyle;
-(void)_updateCardView;
-(void)setProgressState:(long long)arg1 string:(id)arg2 animated:(BOOL)arg3 ;
-(void)_resetAndScheduleTimeout;
-(void)_updateActiveConstraints;
-(id<PKPaymentAuthorizationHostProtocol>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setProgressState:(long long)arg1 string:(id)arg2 animated:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_updateUserIntentRequired;
-(void)_updateCoachingState;
-(void)_setUserIntentRequired:(BOOL)arg1 ;
-(void)_updateProgressStateIfAuthenticatingWithBiometricFailure:(BOOL)arg1 ;
-(long long)_progressStateForAuthenticationWithBiometricFailure:(BOOL)arg1 ;
-(void)_suspendAuthentication;
-(void)_resumeAuthenticationWithPreviousError:(id)arg1 ;
-(void)_didFailWithFatalError:(id)arg1 ;
-(void)_didSucceedWithAuthorizationStateParam:(id)arg1 ;
-(void)_didFailWithError:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1 ;
-(BOOL)paymentAuthorizationStateMachine:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 withParam:(id)arg4 ;
-(void)_processClientCallback:(id)arg1 ;
-(void)_invalidPaymentDataWithParam:(id)arg1 ;
-(long long)_authenticatorPolicy;
-(void)_startEvaluationWithHasInitialAuthenticatorState:(BOOL)arg1 initialAuthenticatorState:(unsigned long long)arg2 ;
-(void)_setAuthenticating:(BOOL)arg1 ;
-(id)_evaluationRequestWithHasInitialAuthenticatorState:(BOOL)arg1 initialAuthenticatorState:(unsigned long long)arg2 ;
-(void)_updatePendingTransaction:(id)arg1 withAuthorizationStateParam:(id)arg2 ;
-(void)_setPasscodeViewController:(id)arg1 ;
-(void)_cancelPassphrasePressed;
-(void)_setPassphraseViewController:(id)arg1 ;
-(void)authenticator:(id)arg1 didTransitionToEvaluationStateWithEvent:(SCD_Struct_PK4)arg2 ;
-(void)authenticator:(id)arg1 didTransitionToCoachingState:(long long)arg2 ;
-(void)presentPasscodeViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 reply:(/*^block*/id)arg3 ;
-(void)dismissPasscodeViewController;
-(void)presentPassphraseViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 reply:(/*^block*/id)arg3 ;
-(void)dismissPassphraseViewController;
-(void)authorizationFooterViewPasscodeButtonPressed:(id)arg1 ;
-(void)authorizationFooterViewDidChangeConstraints:(id)arg1 ;
-(void)updatePaymentWithClientUpdate:(id)arg1 ;
-(PKRemotePaymentRequest *)remoteRequest;
-(void)setDelegate:(id<PKPaymentAuthorizationHostProtocol>)arg1 ;
-(void)_timeoutFired;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)cancelPressed:(id)arg1 ;
-(void)invalidate;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)_didCancel;
-(void)dealloc;
@end

