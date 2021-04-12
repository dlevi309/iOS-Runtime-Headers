/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/


@protocol PKAuthenticatorDelegate;
#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
@class PKAuthenticatorEvaluationContext;

@interface PKAuthenticator : NSObject {

	unsigned long long _authenticationIdentifier;
	os_unfair_lock_s _lock;
	BOOL _invalidated;
	PKAuthenticatorEvaluationContext* _context;
	id<PKAuthenticatorDelegate> _delegate;
	double _fingerPresentTimeout;

}

@property (assign,nonatomic,__weak) id<PKAuthenticatorDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double fingerPresentTimeout;                                //@synthesize fingerPresentTimeout=_fingerPresentTimeout - In the implementation block
@property (nonatomic,readonly) unsigned long long authenticationIdentifier; 
@property (nonatomic,readonly) long long faceIDState; 
@property (nonatomic,readonly) long long coachingState; 
@property (nonatomic,readonly) BOOL fingerPresent; 
@property (nonatomic,readonly) BOOL passcodeActive; 
@property (nonatomic,readonly) BOOL passphraseActive; 
@property (nonatomic,readonly) BOOL passcodeWasPresented; 
@property (nonatomic,readonly) BOOL fingerPresentTimeoutRequired; 
@property (nonatomic,readonly) BOOL fingerPresentTimeoutExpired; 
+(BOOL)canPerformPSD2StyleBuyForAccessControlRef:(SecAccessControlRef)arg1 ;
+(unsigned long long)currentStateForPolicy:(long long)arg1 ;
+(unsigned long long)cachedStateForPolicy:(long long)arg1 ;
+(void)resetSharedRootContextWithCompletion:(/*^block*/id)arg1 ;
+(id)viewServiceBundleID;
+(void)removeUserIntentAvailable;
+(unsigned long long)currentStateForAccessControl:(SecAccessControlRef)arg1 ;
+(BOOL)isUserIntentAvailable;
+(unsigned long long)_currentStateForMechanisms:(id)arg1 ;
+(void)preheatAuthenticator;
+(void)delayCoachingStateTransition;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<PKAuthenticatorDelegate>)delegate;
-(void)setDelegate:(id<PKAuthenticatorDelegate>)arg1 ;
-(id)_context;
-(id)initWithDelegate:(id)arg1 ;
-(void)cancelEvaluationWithOptions:(unsigned long long)arg1 ;
-(void)evaluateRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fallbackToSystemPasscodeUI;
-(long long)coachingState;
-(BOOL)fingerPresent;
-(void)cancelEvaluation;
-(BOOL)fingerPresentTimeoutRequired;
-(unsigned long long)authenticationIdentifier;
-(void)restartEvaluation;
-(void)setFingerPresentTimeout:(double)arg1 ;
-(void)setFingerPresentTimeout:(double)arg1 preventRestart:(BOOL)arg2 ;
-(BOOL)_delegateSupportsPasscodePresentation;
-(BOOL)_delegateSupportsPassphrasePresentation;
-(long long)faceIDState;
-(BOOL)passcodeActive;
-(BOOL)passphraseActive;
-(BOOL)fingerPresentTimeoutExpired;
-(id)_swapContext:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(id)_optionsForEvaluationRequest:(id)arg1 withEvaluationContext:(id)arg2 ;
-(id)_swapContext:(id)arg1 ;
-(void)_evaluateEvaluationContext:(id)arg1 ;
-(void)_handleInstructionsForRequest:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)accessExternalizedContextWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)passcodeWasPresented;
-(double)fingerPresentTimeout;
@end

