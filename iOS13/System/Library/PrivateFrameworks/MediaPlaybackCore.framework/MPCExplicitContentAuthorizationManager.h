/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol MPCExplicitContentAuthorizationDelegate;
@class NSError, ICAgeVerificationState;

@interface MPCExplicitContentAuthorizationManager : NSObject {

	id<MPCExplicitContentAuthorizationDelegate> _delegate;
	long long _status;
	NSError* _authorizationError;
	ICAgeVerificationState* _lastKnownAgeVerificationState;

}

@property (nonatomic,readonly) long long authorizationReason; 
@property (assign,nonatomic) long long status;                                                         //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSError * authorizationError;                                               //@synthesize authorizationError=_authorizationError - In the implementation block
@property (nonatomic,copy) ICAgeVerificationState * lastKnownAgeVerificationState;                     //@synthesize lastKnownAgeVerificationState=_lastKnownAgeVerificationState - In the implementation block
@property (assign,nonatomic,__weak) id<MPCExplicitContentAuthorizationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedManager;
-(id<MPCExplicitContentAuthorizationDelegate>)delegate;
-(void)setDelegate:(id<MPCExplicitContentAuthorizationDelegate>)arg1 ;
-(id)_init;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(BOOL)isItemAuthorized:(id)arg1 shouldAskForAuthorization:(BOOL)arg2 ;
-(BOOL)isItemAuthorized:(id)arg1 ;
-(id)_retrieveAgeVerificationStateForUserIdentity:(id)arg1 ;
-(void)_updateAuthorizationStatusWithAuthorizationState:(id)arg1 forItem:(id)arg2 ;
-(NSError *)authorizationError;
-(id)_explicitContentErrorWithUnderlyingError:(id)arg1 message:(id)arg2 ;
-(long long)authorizationReason;
-(BOOL)_shouldAskPlaybackAuthorizationForItem:(id)arg1 reason:(long long)arg2 ;
-(BOOL)_askPlaybackAuthorizationForItem:(id)arg1 reason:(long long)arg2 ;
-(void)_setupWithAgeVerificationState:(id)arg1 ;
-(void)_setupWithAgeGateForItem:(id)arg1 ;
-(void)setAuthorizationError:(NSError *)arg1 ;
-(ICAgeVerificationState *)lastKnownAgeVerificationState;
-(void)setLastKnownAgeVerificationState:(ICAgeVerificationState *)arg1 ;
@end

