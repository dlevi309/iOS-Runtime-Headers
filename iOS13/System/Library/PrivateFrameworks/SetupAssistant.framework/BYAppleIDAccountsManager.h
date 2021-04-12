/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@class AALoginPluginManager, AAStorableLoginContext, AASetupAssistantService;

@interface BYAppleIDAccountsManager : NSObject {

	AALoginPluginManager* _appleIDLoginPluginManager;
	AAStorableLoginContext* _storedLoginContext;
	AASetupAssistantService* _aaService;

}

@property (setter=setAAService:,nonatomic,retain) AASetupAssistantService * aaService;              //@synthesize aaService=_aaService - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)preloadDefaultLoginParametersWithBundleIDs:(id)arg1 ;
-(id)initForDelegateBundleIDs:(id)arg1 ;
-(void)enableDataClassesForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loginDelegateAccountsWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 skipiTunes:(BOOL)arg4 onlyAppleIDPlugin:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)performSilentICDPUpgrade;
-(void)runPostRestoreRenewCredentialsIfNeeded;
-(AASetupAssistantService *)aaService;
-(id)storedLoginContext;
-(void)clearStoredLoginContext;
-(void)repeatedlyAttemptPostRestoreRenewForAccount:(id)arg1 loginContext:(id)arg2 numberOfAttemptsAllowed:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)attemptPostRestoreRenewForAccount:(id)arg1 loginContext:(id)arg2 allowFollowUp:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setAAService:(id)arg1 ;
@end

