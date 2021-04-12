/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/

#import <libobjc.A.dylib/AKAppleIDAuthenticationDelegate.h>
#import <libobjc.A.dylib/BYNetworkObserver.h>

@class AKAppleIDAuthenticationContext, UMUserSwitchContext, NSString;

@interface BYManagedAppleIDBootstrap : NSObject <AKAppleIDAuthenticationDelegate, BYNetworkObserver> {

	AKAppleIDAuthenticationContext* _authContext;
	UMUserSwitchContext* _userSwitchContext;
	BOOL _shouldRetrySilentLoginUpgrade;
	long long _silentLoginUpgradeRetryCount;

}

@property (nonatomic,readonly) UMUserSwitchContext * userSwitchContext; 
@property (assign,nonatomic) BOOL shouldRetrySilentLoginUpgrade;                     //@synthesize shouldRetrySilentLoginUpgrade=_shouldRetrySilentLoginUpgrade - In the implementation block
@property (assign,nonatomic) long long silentLoginUpgradeRetryCount;                 //@synthesize silentLoginUpgradeRetryCount=_silentLoginUpgradeRetryCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortLivedToken; 
@property (nonatomic,readonly) BOOL passwordChangeFlowNeedsToRun; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(BOOL)isMultiUser;
+(BOOL)isFirstTimeLogin;
+(id)delegateBundleIDsForManagedAccount;
+(BOOL)isSettingUpMultiUser;
+(BOOL)isManagedAppleIDSignedIn;
-(id)init;
-(void)dealloc;
-(BOOL)isLoginUser;
-(NSString *)shortLivedToken;
-(UMUserSwitchContext *)userSwitchContext;
-(void)postUserSwitchContextHasBeenUsed;
-(void)recoverEMCSWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldRetrySilentLoginUpgrade;
-(long long)silentLoginUpgradeRetryCount;
-(void)setSilentLoginUpgradeRetryCount:(long long)arg1 ;
-(void)_runSilentLoginUpgradeWithCompletion:(/*^block*/id)arg1 shortLivedTokenUpgradeCompletion:(/*^block*/id)arg2 ;
-(void)_upgradeShortLivedTokenCompletion:(/*^block*/id)arg1 ;
-(void)runSilentLoginUpgradeIfNeededWithCompletion:(/*^block*/id)arg1 shortLivedTokenUpgradeCompletion:(/*^block*/id)arg2 willNotCompleteBlock:(/*^block*/id)arg3 ;
-(BOOL)needsToUpgradeShortLivedToken;
-(BOOL)passwordChangeFlowNeedsToRun;
-(id)_fetchAKURLBagSynchronously;
-(void)switchToLoginWindowDueToError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_modifyAuthenticationContextIfNeeded:(id)arg1 ;
-(void)_createAppleAccountWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_languageConfigurationDictionary;
-(void)setShouldRetrySilentLoginUpgrade:(BOOL)arg1 ;
-(void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2 ;
-(void)userSwitchContextHasBeenUsed;
-(void)ingestManagedBuddyData;
-(void)runSilentLoginUpgradeIfNeededWithCompletion:(/*^block*/id)arg1 shortLivedTokenUpgradeCompletion:(/*^block*/id)arg2 ;
-(void)writeAccountConfigurationIfNeededWithCompletion:(/*^block*/id)arg1 ;
@end

