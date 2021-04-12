/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/

#import <libobjc.A.dylib/LAUIDelegate.h>

@protocol OS_dispatch_source, PKAuthenticatorDelegate;
@class PKAuthenticator, NSObject, NSMutableArray, LAContext, PKAuthenticatorEvaluationRequest;

@interface PKAuthenticatorEvaluationContext : NSObject <LAUIDelegate> {

	PKAuthenticator* _authenticator;
	double _evaluationMinimumTime;
	/*^block*/id _completionHandler;
	double _touchIDBeginTime;
	NSObject*<OS_dispatch_source> _liftFingerTimeout;
	BOOL _acquireUserIntent;
	unsigned long long _pearlFlags;
	NSObject*<OS_dispatch_source> _delayedBiometricMissFeedback;
	long long _coachingStatus;
	NSObject*<OS_dispatch_source> _delayedCoachingStateUpdate;
	NSMutableArray* _accessHandlers;
	BOOL _usingExternalContext;
	unsigned long long _externalContextInvalidationPolicy;
	unsigned long long _externalContextOptions;
	LAContext* _LAContext;
	unsigned long long _activeMechanisms;
	unsigned long long _completedMechanisms;
	BOOL _invalidated;
	BOOL _supported;
	BOOL _policySupported;
	BOOL _userIntentAvailable;
	BOOL _fingerPresent;
	BOOL _passcodeActive;
	BOOL _passphraseActive;
	BOOL _shouldLiftFinger;
	BOOL _fingerPresentTimeoutRequired;
	BOOL _fingerPresentTimeoutExpired;
	PKAuthenticatorEvaluationRequest* _request;
	long long _policy;
	long long _faceIDState;
	long long _coachingState;
	unsigned long long _presentationFlags;
	id<PKAuthenticatorDelegate> _delegate;

}

@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;                      //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,readonly) PKAuthenticatorEvaluationRequest * request;                 //@synthesize request=_request - In the implementation block
@property (getter=isSupported,nonatomic,readonly) BOOL supported;                          //@synthesize supported=_supported - In the implementation block
@property (getter=isPolicySupported,nonatomic,readonly) BOOL policySupported;              //@synthesize policySupported=_policySupported - In the implementation block
@property (nonatomic,readonly) long long policy;                                           //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) BOOL userIntentAvailable;                                   //@synthesize userIntentAvailable=_userIntentAvailable - In the implementation block
@property (nonatomic,readonly) BOOL fingerPresent;                                         //@synthesize fingerPresent=_fingerPresent - In the implementation block
@property (nonatomic,readonly) long long faceIDState;                                      //@synthesize faceIDState=_faceIDState - In the implementation block
@property (nonatomic,readonly) long long coachingState;                                    //@synthesize coachingState=_coachingState - In the implementation block
@property (nonatomic,readonly) BOOL biometricMatch; 
@property (nonatomic,readonly) BOOL passcodeActive;                                        //@synthesize passcodeActive=_passcodeActive - In the implementation block
@property (nonatomic,readonly) BOOL passphraseActive;                                      //@synthesize passphraseActive=_passphraseActive - In the implementation block
@property (nonatomic,readonly) BOOL shouldLiftFinger;                                      //@synthesize shouldLiftFinger=_shouldLiftFinger - In the implementation block
@property (nonatomic,readonly) BOOL fingerPresentTimeoutRequired;                          //@synthesize fingerPresentTimeoutRequired=_fingerPresentTimeoutRequired - In the implementation block
@property (nonatomic,readonly) BOOL fingerPresentTimeoutExpired;                           //@synthesize fingerPresentTimeoutExpired=_fingerPresentTimeoutExpired - In the implementation block
@property (nonatomic,readonly) unsigned long long presentationFlags;                       //@synthesize presentationFlags=_presentationFlags - In the implementation block
@property (assign,nonatomic,__weak) id<PKAuthenticatorDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<PKAuthenticatorDelegate>)delegate;
-(void)setDelegate:(id<PKAuthenticatorDelegate>)arg1 ;
-(BOOL)isInvalidated;
-(long long)policy;
-(PKAuthenticatorEvaluationRequest *)request;
-(BOOL)isSupported;
-(void)event:(long long)arg1 params:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)biometricMatch;
-(long long)coachingState;
-(void)_updateCoachingState;
-(BOOL)fingerPresent;
-(void)_setCoachingState:(long long)arg1 ;
-(BOOL)fingerPresentTimeoutRequired;
-(id)initWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 forAuthenticator:(id)arg3 ;
-(void)delayCoachingTransition:(id)arg1 ;
-(void)_createContextWithExternalizedContext:(id)arg1 ;
-(/*^block*/id)hoistCompletionHandler;
-(void)invalidateWithIntent:(long long)arg1 ;
-(void)_dismissAuthenticatorViewOfType:(long long)arg1 ;
-(void)accessLAContext:(/*^block*/id)arg1 ;
-(unsigned long long)_presentationFlagForAuthenticatorViewType:(long long)arg1 ;
-(BOOL)_delegateSupportsPasscodeDismissal;
-(BOOL)_delegateSupportsPassphraseDismissal;
-(BOOL)_delegateSupportsPasscodePresentation;
-(BOOL)_delegateSupportsPassphrasePresentation;
-(unsigned long long)_didPresentFlagForAuthenticatorViewType:(long long)arg1 custom:(BOOL)arg2 ;
-(void)_requestRemoteAuthenticatorViewControllerOfType:(long long)arg1 withClassName:(id)arg2 bundleIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_presentAuthenticatorViewOfType:(long long)arg1 withParams:(id)arg2 ;
-(void)_updateFaceIDState;
-(void)_setFaceIDState:(long long)arg1 ;
-(void)fallbackToPasscode;
-(void)_clearLiftFingerTimer;
-(void)_setLiftFingerTimer;
-(void)handlePasscodeEventWithParameters:(id)arg1 ;
-(void)handlePassphraseEventWithParameters:(id)arg1 ;
-(void)handlePearlEventWithParameters:(id)arg1 ;
-(void)handleTouchIDEventWithParameters:(id)arg1 ;
-(void)handlePushButtonEventWithParameters:(id)arg1 ;
-(void)_handleLiftFinger;
-(void)evaluateWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isPolicySupported;
-(BOOL)userIntentAvailable;
-(long long)faceIDState;
-(BOOL)passcodeActive;
-(BOOL)passphraseActive;
-(BOOL)shouldLiftFinger;
-(BOOL)fingerPresentTimeoutExpired;
-(unsigned long long)presentationFlags;
@end

