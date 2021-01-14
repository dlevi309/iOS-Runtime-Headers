/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBUIBiometricResourceObserver.h>
#import <libobjc.A.dylib/SBBiometricUnlockBehaviorDelegate.h>
#import <libobjc.A.dylib/SBWalletPrearmRecognizerDelegate.h>
#import <libobjc.A.dylib/PKPassLibraryDelegate.h>
#import <libobjc.A.dylib/SBUIPasscodeBiometricMatchingAssertionFactory.h>

@protocol BSInvalidatable, SBLockScreenBiometricAuthenticationCoordinatorDelegate, SBBiometricUnlockBehavior;
@class SBUIBiometricResource, SBWalletPreArmController, SBWalletPrearmRecognizer, PKPassLibrary, _SBPendingMesaUnlockBehaviorUnlockRequest, NSMutableOrderedSet, NSHashTable, NSString;

@interface SBLockScreenBiometricAuthenticationCoordinator : NSObject <BSDescriptionProviding, SBUIBiometricResourceObserver, SBBiometricUnlockBehaviorDelegate, SBWalletPrearmRecognizerDelegate, PKPassLibraryDelegate, SBUIPasscodeBiometricMatchingAssertionFactory> {

	SBUIBiometricResource* _biometricResource;
	id<BSInvalidatable> _fingerDetectEnabledAssertion;
	id<SBLockScreenBiometricAuthenticationCoordinatorDelegate> _delegate;
	id<SBBiometricUnlockBehavior> _autoUnlockBehavior;
	SBWalletPreArmController* _walletPreArmController;
	SBWalletPrearmRecognizer* _walletPrearmRecognizer;
	BOOL _presentingWalletInterface;
	BOOL _didMatchBeforeWalletPrearmRecognizerTimeout;
	PKPassLibrary* _passLibrary;
	unsigned long long _state;
	BOOL _isAuthenticated;
	id<BSInvalidatable> _matchingWantedAssertion;
	unsigned long long _matchingWantedAssertionMode;
	BOOL _bioAuthenticatedWhileMenuButtonDown;
	_SBPendingMesaUnlockBehaviorUnlockRequest* _pendingUnlockRequest;
	NSMutableOrderedSet* _activePasscodeMatchAssertions;
	NSHashTable* _disabledAssertions;
	NSHashTable* _disabledUnlockAssertions;
	NSHashTable* _disabledAutoUnlockAssertions;

}

@property (getter=_walletPrearmRecognizer,nonatomic,readonly) SBWalletPrearmRecognizer * walletPrearmRecognizer;                                         //@synthesize walletPrearmRecognizer=_walletPrearmRecognizer - In the implementation block
@property (getter=_state,nonatomic,readonly) unsigned long long state;                                                                                   //@synthesize state=_state - In the implementation block
@property (setter=_setPassLibrary:,getter=_getPassLibrary,nonatomic,retain) PKPassLibrary * passLibrary;                                                 //@synthesize passLibrary=_passLibrary - In the implementation block
@property (setter=_setAutoUnlockBehavior:,getter=_setAutoUnlockBehavior,nonatomic,retain) id<SBBiometricUnlockBehavior> autoUnlockBehavior;              //@synthesize autoUnlockBehavior=_autoUnlockBehavior - In the implementation block
@property (assign,nonatomic,__weak) id<SBLockScreenBiometricAuthenticationCoordinatorDelegate> delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL bioAuthenticatedWhileMenuButtonDown;                                                                                   //@synthesize bioAuthenticatedWhileMenuButtonDown=_bioAuthenticatedWhileMenuButtonDown - In the implementation block
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated;                                                                                  //@synthesize isAuthenticated=_isAuthenticated - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (getter=isWalletPreArmDisabled,nonatomic,readonly) BOOL walletPreArmDisabled; 
@property (getter=isUnlockingDisabled,nonatomic,readonly) BOOL isUnlockingDisabled; 
@property (getter=isAutoUnlockingDisabled,nonatomic,readonly) BOOL autoUnlockingDisabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAuthenticated:(BOOL)arg1 ;
-(BOOL)isAuthenticated;
-(id)succinctDescription;
-(void)_updateMatchingForState:(unsigned long long)arg1 forReason:(id)arg2 ;
-(unsigned long long)_state;
-(void)_pendUnlockRequest:(id)arg1 ;
-(id)_walletPrearmRecognizer;
-(BOOL)biometricUnlockBehavior:(id)arg1 requestsUnlock:(id)arg2 withFeedback:(id)arg3 ;
-(BOOL)biometricUnlockBehavior:(id)arg1 requestsFeedback:(id)arg2 ;
-(BOOL)bioAuthenticatedWhileMenuButtonDown;
-(void)_walletPreArmDisabledDidChange:(id)arg1 ;
-(id)_setAutoUnlockBehavior;
-(void)_setState:(unsigned long long)arg1 forReason:(id)arg2 ;
-(id<SBLockScreenBiometricAuthenticationCoordinatorDelegate>)delegate;
-(id)acquireDisableWalletPreArmAssertionForReason:(id)arg1 ;
-(BOOL)isAutoUnlockingDisabled;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)passLibraryReceivedInterruption;
-(BOOL)_isMatchingEffectivelyDisabled;
-(void)biometricResource:(id)arg1 matchingAllowedDidChange:(BOOL)arg2 ;
-(void)_setupPreArmRecognizerIfPossibleForReason:(id)arg1 ;
-(void)setBioAuthenticatedWhileMenuButtonDown:(BOOL)arg1 ;
-(BOOL)_hasActivePasscodeViews;
-(void)_setAutoUnlockBehavior:(id)arg1 ;
-(void)walletPrearmRecognizer:(id)arg1 didFailToRecognizeForReason:(unsigned long long)arg2 ;
-(void)setDelegate:(id<SBLockScreenBiometricAuthenticationCoordinatorDelegate>)arg1 ;
-(NSString *)description;
-(BOOL)_stateWantsMatching:(unsigned long long)arg1 outMatchMode:(unsigned long long*)arg2 ;
-(void)_removePasscodeMatchingAssertion:(id)arg1 ;
-(id)_getPassLibrary;
-(void)_createFingerDetectAssertion;
-(id)acquireDisableUnlockAssertionForReason:(id)arg1 ;
-(void)contactlessInterfaceDidDismissFromSource:(long long)arg1 ;
-(void)_noteMenuButtonDoublePress;
-(void)_resetStateForReason:(id)arg1 ;
-(BOOL)isWalletPreArmDisabled;
-(void)_invalidateWalletPreArmRecognizer;
-(id)initWithBiometricResource:(id)arg1 walletPreArmController:(id)arg2 ;
-(void)_toggleAutoUnlockBehaviorEnabled:(BOOL)arg1 ;
-(void)_handlePassKitDismissalIfNecessaryWithReason:(id)arg1 ;
-(BOOL)_isWalletPreArmAllowed;
-(BOOL)isUnlockingDisabled;
-(void)_setPassLibrary:(id)arg1 ;
-(void)walletPrearmRecognizerDidRecognize:(id)arg1 ;
-(id)acquireMatchingAssertionWithMode:(unsigned long long)arg1 reason:(id)arg2 ;
-(BOOL)isEnabled;
-(void)_stateChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)_clearPendingUnlockRequest;
-(void)_clearFingerDetectAssertion;
-(id)succinctDescriptionBuilder;
-(id)acquireDisableAutoUnlockAssertionForReason:(id)arg1 ;
-(void)_addPasscodeMatchingAssertion:(id)arg1 ;
-(void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2 ;
-(id)acquireDisableCoordinatorAssertionForReason:(id)arg1 ;
-(void)_noteMenuButtonSinglePress;
@end

