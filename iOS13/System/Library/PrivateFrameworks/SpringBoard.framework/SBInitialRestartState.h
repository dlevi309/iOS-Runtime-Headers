/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(BOOL)isBlocked;
-(BOOL)isLoginSession;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isAuthenticated;
-(void)setAuthenticated:(BOOL)arg1 ;
-(void)setBlocked:(BOOL)arg1 ;
-(void)setRequiresSetup:(BOOL)arg1 ;
-(BOOL)requiresSetup;
-(BOOL)hasPasscodeSet;
-(SBBootDefaults *)bootDefaults;
-(void)setLoginSession:(BOOL)arg1 ;
-(void)setHasPasscodeSet:(BOOL)arg1 ;
-(BOOL)isInLostMode;
-(void)setInLostMode:(BOOL)arg1 ;
-(void)setShouldNeverLock:(BOOL)arg1 ;
-(void)setBootDefaults:(SBBootDefaults *)arg1 ;
-(void)setForSimulator:(BOOL)arg1 ;
-(BOOL)shouldNeverLock;
-(BOOL)isForSimulator;
@end

