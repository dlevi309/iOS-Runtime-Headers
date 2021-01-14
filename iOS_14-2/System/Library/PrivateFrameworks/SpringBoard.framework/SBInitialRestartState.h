/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBBootDefaults, NSString;

@interface SBInitialRestartState : NSObject <BSDescriptionProviding> {

	BOOL _isAuthenticated;
	BOOL _isInLostMode;
	BOOL _isBlocked;
	BOOL _hasPasscodeSet;
	BOOL _requiresSetup;
	BOOL _shouldNeverLock;
	BOOL _forSimulator;
	BOOL _isLoginSession;
	long long _homeButtonType;
	SBBootDefaults* _bootDefaults;

}

@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated;              //@synthesize isAuthenticated=_isAuthenticated - In the implementation block
@property (assign,getter=isInLostMode,nonatomic) BOOL inLostMode;                    //@synthesize isInLostMode=_isInLostMode - In the implementation block
@property (assign,getter=isBlocked,nonatomic) BOOL blocked;                          //@synthesize isBlocked=_isBlocked - In the implementation block
@property (assign,nonatomic) BOOL hasPasscodeSet;                                    //@synthesize hasPasscodeSet=_hasPasscodeSet - In the implementation block
@property (assign,nonatomic) BOOL requiresSetup;                                     //@synthesize requiresSetup=_requiresSetup - In the implementation block
@property (assign,nonatomic) BOOL shouldNeverLock;                                   //@synthesize shouldNeverLock=_shouldNeverLock - In the implementation block
@property (assign,getter=isLoginSession,nonatomic) BOOL loginSession;                //@synthesize isLoginSession=_isLoginSession - In the implementation block
@property (nonatomic,retain) SBBootDefaults * bootDefaults;                          //@synthesize bootDefaults=_bootDefaults - In the implementation block
@property (assign,getter=isForSimulator,nonatomic) BOOL forSimulator;                //@synthesize forSimulator=_forSimulator - In the implementation block
@property (assign,nonatomic) long long homeButtonType;                               //@synthesize homeButtonType=_homeButtonType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHomeButtonType:(long long)arg1 ;
-(void)setAuthenticated:(BOOL)arg1 ;
-(long long)homeButtonType;
-(BOOL)isBlocked;
-(BOOL)isAuthenticated;
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBBootDefaults *)bootDefaults;
-(NSString *)description;
-(BOOL)isInLostMode;
-(void)setRequiresSetup:(BOOL)arg1 ;
-(BOOL)requiresSetup;
-(void)setBlocked:(BOOL)arg1 ;
-(BOOL)hasPasscodeSet;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)shouldNeverLock;
-(id)succinctDescriptionBuilder;
-(BOOL)isLoginSession;
-(void)setHasPasscodeSet:(BOOL)arg1 ;
-(void)setInLostMode:(BOOL)arg1 ;
-(void)setShouldNeverLock:(BOOL)arg1 ;
-(void)setLoginSession:(BOOL)arg1 ;
-(void)setBootDefaults:(SBBootDefaults *)arg1 ;
-(void)setForSimulator:(BOOL)arg1 ;
-(BOOL)isForSimulator;
@end

