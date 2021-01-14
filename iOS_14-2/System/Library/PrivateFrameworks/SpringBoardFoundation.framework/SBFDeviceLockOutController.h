/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBFThermalConditionObserver.h>
#import <libobjc.A.dylib/SBFPrivateAuthenticationObserver.h>
#import <libobjc.A.dylib/SBFLockOutStatusProvider.h>

@protocol SBFThermalBlockProvider;
@class SBFUserAuthenticationController, NSString;

@interface SBFDeviceLockOutController : NSObject <BSDescriptionProviding, SBFThermalConditionObserver, SBFPrivateAuthenticationObserver, SBFLockOutStatusProvider> {

	id<SBFThermalBlockProvider> _thermalProvider;
	BOOL _lockedOutCached;
	unsigned long long _lastBlockedStatus;
	SBFUserAuthenticationController* _authenticationController;

}

@property (setter=_setAuthenticationController:,getter=_authenticationController,nonatomic,retain) SBFUserAuthenticationController * authenticationController;              //@synthesize authenticationController=_authenticationController - In the implementation block
@property (setter=_setThermalProvider:,getter=_thermalProvider,nonatomic,retain) id<SBFThermalBlockProvider> thermalProvider;                                               //@synthesize thermalProvider=_thermalProvider - In the implementation block
@property (assign,setter=_setLockedOutCached:,getter=_isLockedOutCached,nonatomic) BOOL lockedOutCached;                                                                    //@synthesize lockedOutCached=_lockedOutCached - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isBlocked;
-(BOOL)isThermallyBlocked;
-(id)succinctDescription;
-(id)initWithThermalController:(id)arg1 authenticationController:(id)arg2 ;
-(void)thermalBlockStatusChanged:(id)arg1 ;
-(BOOL)_isLockedOutCached;
-(void)_noteLockedOutStateMayHaveChanged:(BOOL)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_authenticationController;
-(void)_setAuthenticationController:(id)arg1 ;
-(NSString *)description;
-(void)_setThermalProvider:(id)arg1 ;
-(BOOL)isPermanentlyBlocked;
-(double)timeIntervalUntilUnblockedSinceReferenceDate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)deviceBlockStatus;
-(void)temporaryBlockStatusChanged;
-(id)succinctDescriptionBuilder;
-(void)_setLockedOutCached:(BOOL)arg1 ;
-(BOOL)isLockedOut;
-(BOOL)isTemporarilyBlocked;
-(void)_noteLockedOutReasonsMayHaveChanged;
-(void)dealloc;
-(id)_thermalProvider;
@end

