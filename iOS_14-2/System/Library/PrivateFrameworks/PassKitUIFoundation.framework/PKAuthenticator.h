/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

}

@property (assign,nonatomic,__weak) id<PKAuthenticatorDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long authenticationIdentifier; 
@property (nonatomic,readonly) long long evaluationState; 
@property (nonatomic,readonly) long long coachingState; 
@property (nonatomic,readonly) BOOL fingerPresent; 
@property (nonatomic,readonly) BOOL passcodeActive; 
@property (nonatomic,readonly) BOOL passphraseActive; 
@property (nonatomic,readonly) BOOL passcodeWasPresented; 
+(long long)userIntentStyle;
+(unsigned long long)currentStateForPolicy:(long long)arg1 ;
+(unsigned long long)cachedStateForPolicy:(long long)arg1 ;
+(void)removeUserIntentAvailable;
+(BOOL)isUserIntentAvailableWithStyle:(long long)arg1 ;
+(BOOL)canPerformPSD2StyleBuyForAccessControlRef:(SecAccessControlRef)arg1 ;
+(unsigned long long)currentStateForAccessControl:(SecAccessControlRef)arg1 ;
+(id)viewServiceBundleID;
+(void)resetSharedRootContextWithCompletion:(/*^block*/id)arg1 ;
+(BOOL)_isAccessibilityUserIntentEnabled;
+(unsigned long long)_currentStateForMechanisms:(id)arg1 ;
+(void)preheatAuthenticator;
-(id)init;
-(id<PKAuthenticatorDelegate>)delegate;
-(void)cancelEvaluationWithOptions:(unsigned long long)arg1 ;
-(void)evaluateRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fallbackToSystemPasscodeUI;
-(void)setDelegate:(id<PKAuthenticatorDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)invalidate;
-(BOOL)fingerPresent;
-(void)cancelEvaluation;
-(long long)coachingState;
-(id)_context;
-(unsigned long long)authenticationIdentifier;
-(void)restartEvaluation;
-(void)dealloc;
-(BOOL)_delegateSupportsPasscodePresentation;
-(BOOL)_delegateSupportsPassphrasePresentation;
-(BOOL)passcodeActive;
-(BOOL)passphraseActive;
-(long long)evaluationState;
-(id)_swapContext:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(id)_optionsForEvaluationRequest:(id)arg1 withEvaluationContext:(id)arg2 ;
-(id)_swapContext:(id)arg1 ;
-(void)_evaluateEvaluationContext:(id)arg1 ;
-(void)_handleInstructionsForRequest:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)accessExternalizedContextWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)passcodeWasPresented;
@end

