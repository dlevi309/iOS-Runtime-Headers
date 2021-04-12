/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/SBFMobileKeyBagObserver.h>
#import <libobjc.A.dylib/SBFUserAuthenticationModelDelegate.h>
#import <libobjc.A.dylib/SBFAuthenticationAssertionProviding.h>
#import <libobjc.A.dylib/SBFAuthenticationStatusProvider.h>
#import <libobjc.A.dylib/SBFPasscodeFieldChangeObserver.h>

@protocol SBFUserAuthenticationModel, SBFAuthenticationPolicy;
@class SBFMobileKeyBag, NSMutableArray, NSHashTable, NSDate, SBFAuthenticationAssertionManager, NSString, SBFAuthenticationAssertion, PCPersistentTimer, SBFSecureDisplayCoordinator, SBFMobileKeyBagState;

@interface SBFUserAuthenticationController : NSObject <SBFMobileKeyBagObserver, SBFUserAuthenticationModelDelegate, SBFAuthenticationAssertionProviding, SBFAuthenticationStatusProvider, SBFPasscodeFieldChangeObserver> {

	SBFMobileKeyBag* _keybag;
	NSMutableArray* _responders;
	NSHashTable* _observers;
	id<SBFUserAuthenticationModel> _model;
	long long _authenticationState;
	NSDate* _lastRevokedAuthenticationDate;
	SBFAuthenticationAssertionManager* _assertionManager;
	id<SBFAuthenticationPolicy> _policy;
	NSString* _lastIncorrectPasscodeAttempt;
	SBFAuthenticationAssertion* _transientAuthCheckingAssertion;
	CFRunLoopObserverRef _runLoopObserver;
	PCPersistentTimer* _unblockTimer;
	long long _cachedAuthFlag;
	SBFSecureDisplayCoordinator* _secureDisplayCoordinator;
	SBFMobileKeyBagState* _cachedExtendedState;

}

@property (setter=_setPolicy:,getter=_policy,nonatomic,retain) id<SBFAuthenticationPolicy> policy;              //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) NSDate * lastRevokedAuthenticationDate;                                          //@synthesize lastRevokedAuthenticationDate=_lastRevokedAuthenticationDate - In the implementation block
@property (nonatomic,readonly) BOOL inSecureDisplayMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isAuthenticated;
-(id)succinctDescription;
-(id)publicDescription;
-(BOOL)_boolForAuthenticationResult:(long long)arg1 ;
-(void)_refreshModelCacheIfNeeded;
-(void)_setup_runLoopObserverIfNecessary;
-(BOOL)_authenticateIfInGracePeriod;
-(long long)_evaluateAuthenticationAttempt:(id)arg1 outError:(id*)arg2 ;
-(void)deviceLockModelRequestsDeviceWipe:(id)arg1 ;
-(NSDate *)lastRevokedAuthenticationDate;
-(BOOL)_isUserAuthenticated;
-(id)createKeybagUnlockAssertionWithReason:(id)arg1 ;
-(BOOL)_isAssertionValid:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)_performNilPasscodeCheck;
-(id)initWithAssertionManager:(id)arg1 policy:(id)arg2 ;
-(BOOL)_isPermanentlyBlocked;
-(void)processAuthenticationRequest:(id)arg1 responder:(id)arg2 ;
-(BOOL)_isTemporarilyBlocked;
-(void)_notifyClientsOfAuthenticationResult:(long long)arg1 forRequest:(id)arg2 error:(id)arg3 withResponder:(id)arg4 ;
-(BOOL)inSecureDisplayMode;
-(void)_setPolicy:(id)arg1 ;
-(id)_cachedLockStateExtended;
-(long long)_evaluateBiometricAttempt:(id)arg1 ;
-(void)_setModel:(id)arg1 ;
-(BOOL)_processAuthenticationRequest:(id)arg1 responder:(id)arg2 ;
-(void)keybag:(id)arg1 extendedStateDidChange:(id)arg2 ;
-(void)_notifyAboutTemporaryBlockStatusChanged;
-(BOOL)isAuthenticatedCached;
-(id)_policy;
-(id)initWithAssertionManager:(id)arg1 policy:(id)arg2 keybag:(id)arg3 model:(id)arg4 ;
-(void)_updateSecureModeIfNecessaryForNewAuthState;
-(void)_updateAuthenticationStateForPublicReason:(id)arg1 ;
-(BOOL)_shouldRevokeAuthenticationNow;
-(void)keybagDidUnlockForTheFirstTime:(id)arg1 ;
-(void)notePasscodeEntryCancelled;
-(NSString *)description;
-(void)_addPrivateAuthenticationObserver:(id)arg1 ;
-(void)_scheduleUnblockTimer;
-(BOOL)_isInGracePeriodState;
-(void)_revokeAuthenticationImmediately:(BOOL)arg1 forPublicReason:(id)arg2 ;
-(void)_addAuthenticationAssertion:(id)arg1 ;
-(BOOL)_isInBioUnlockState;
-(void)_handleSuccessfulAuthentication:(id)arg1 responder:(id)arg2 ;
-(void)deviceLockStateMayHaveChangedForModel:(id)arg1 ;
-(void)notePasscodeEntryBegan;
-(void)removeResponder:(id)arg1 ;
-(BOOL)hasAuthenticatedAtLeastOnceSinceBoot;
-(long long)_evaluatePasscodeAttempt:(id)arg1 outError:(id*)arg2 ;
-(void)_setupPolicy:(id)arg1 ;
-(void)_unblockTimerFired;
-(void)processAuthenticationRequest:(id)arg1 ;
-(void)addAsFirstResponder:(id)arg1 ;
-(void)_setAuthState:(long long)arg1 ;
-(void)_updateAuthenticationStateImmediately:(BOOL)arg1 forPublicReason:(id)arg2 ;
-(void)revokeAuthenticationImmediatelyForPublicReason:(id)arg1 ;
-(BOOL)hasPasscodeSet;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)_addAsFirstResponder:(id)arg1 ;
-(void)_updateAuthenticationStateAndDateForLockState:(id)arg1 ;
-(void)_handleInvalidAuthentication:(id)arg1 responder:(id)arg2 ;
-(void)_noteDeviceLockStateMayHaveChangedForExternalReasons;
-(void)_clearUnblockTimer;
-(id)succinctDescriptionBuilder;
-(void)_handleFailedAuthentication:(id)arg1 error:(id)arg2 responder:(id)arg3 ;
-(void)_invalidateCachedPasscodeLockState;
-(void)_clearBlockedState;
-(void)_removeAuthResponder:(id)arg1 ;
-(void)revokeAuthenticationIfNecessaryForPublicReason:(id)arg1 ;
-(void)_removePrivateAuthenticationObserver:(id)arg1 ;
-(double)_timeUntilUnblockedSinceReferenceDate;
-(void)dealloc;
-(void)_uncachePasscodeIfNecessary;
-(void)revokeAuthenticationImmediatelyIfNecessaryForPublicReason:(id)arg1 ;
-(void)_removeAuthenticationAssertion:(id)arg1 ;
-(id)createGracePeriodAssertionWithReason:(id)arg1 ;
@end

