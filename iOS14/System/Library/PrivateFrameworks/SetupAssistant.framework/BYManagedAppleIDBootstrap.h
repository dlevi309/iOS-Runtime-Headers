/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/

#import <libobjc.A.dylib/AKAppleIDAuthenticationDelegate.h>
#import <libobjc.A.dylib/BYNetworkObserver.h>
#import <libobjc.A.dylib/UMUserSwitchStakeholder.h>

@protocol OS_dispatch_queue;
@class AKAppleIDAuthenticationContext, UMUserSwitchContext, NSObject, NSDictionary, NSString;

@interface BYManagedAppleIDBootstrap : NSObject <AKAppleIDAuthenticationDelegate, BYNetworkObserver, UMUserSwitchStakeholder> {

	AKAppleIDAuthenticationContext* _authContext;
	UMUserSwitchContext* _userSwitchContext;
	BOOL _shouldRetrySilentLoginUpgrade;
	int _notifyToken;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	long long _silentLoginUpgradeRetryCount;
	NSDictionary* _authenticationResults;

}

@property (nonatomic,readonly) UMUserSwitchContext * userSwitchContext; 
@property (assign,nonatomic) int notifyToken;                                             //@synthesize notifyToken=_notifyToken - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notificationQueue;              //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (assign,nonatomic) BOOL shouldRetrySilentLoginUpgrade;                          //@synthesize shouldRetrySilentLoginUpgrade=_shouldRetrySilentLoginUpgrade - In the implementation block
@property (assign,nonatomic) long long silentLoginUpgradeRetryCount;                      //@synthesize silentLoginUpgradeRetryCount=_silentLoginUpgradeRetryCount - In the implementation block
@property (nonatomic,retain) NSDictionary * authenticationResults;                        //@synthesize authenticationResults=_authenticationResults - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortLivedToken; 
@property (nonatomic,readonly) BOOL passwordChangeFlowNeedsToRun; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(BOOL)isSettingUpMultiUser;
+(id)delegateBundleIDsForManagedAccount;
+(BOOL)isManagedAppleIDSignedIn;
+(BOOL)isFirstTimeLogin;
+(BOOL)isMultiUser;
-(void)setNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setNotifyToken:(int)arg1 ;
-(id)init;
-(void)willSwitchUser;
-(UMUserSwitchContext *)userSwitchContext;
-(NSString *)shortLivedToken;
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
-(id)_authenticationContextWithAuthenticationResults:(id)arg1 ;
-(void)_modifyAuthenticationContextIfNeeded:(id)arg1 ;
-(void)_runPostStartupTasksWithAccountStore:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_registerForStartupCompletionNotificationWithTask:(/*^block*/id)arg1 ;
-(void)_createAppleAccountWithAuthenticationResults:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_languageConfigurationDictionary;
-(void)setShouldRetrySilentLoginUpgrade:(BOOL)arg1 ;
-(void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2 ;
-(void)userSwitchContextHasBeenUsed;
-(void)ingestManagedBuddyData;
-(void)runSilentLoginUpgradeIfNeededWithCompletion:(/*^block*/id)arg1 shortLivedTokenUpgradeCompletion:(/*^block*/id)arg2 ;
-(void)writeAccountConfigurationIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(int)notifyToken;
-(void)setAuthenticationResults:(NSDictionary *)arg1 ;
-(NSDictionary *)authenticationResults;
-(void)dealloc;
-(BOOL)isLoginUser;
@end

