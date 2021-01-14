/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/AKAppleIDAuthenticationDelegate.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, SSKeyValueStore, ACAccountStore, SSPromise, SSAccount, NSString;

@interface SSAccountStore : NSObject <AKAppleIDAuthenticationDelegate> {

	BOOL _inProcessCacheDisabled;
	NSArray* _accountsCache;
	NSObject*<OS_dispatch_queue> _accountsCacheAccessQueue;
	NSObject*<OS_dispatch_queue> _fetchAccountsQueue;
	SSKeyValueStore* _keyValueStore;
	NSObject*<OS_dispatch_queue> _metricsQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	ACAccountStore* _backingAccountStore;

}

@property (nonatomic,retain) NSArray * accountsCache;                                                  //@synthesize accountsCache=_accountsCache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accountsCacheAccessQueue;                    //@synthesize accountsCacheAccessQueue=_accountsCacheAccessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> fetchAccountsQueue;                          //@synthesize fetchAccountsQueue=_fetchAccountsQueue - In the implementation block
@property (assign,getter=isInProcessCacheDisabled,nonatomic) BOOL inProcessCacheDisabled;              //@synthesize inProcessCacheDisabled=_inProcessCacheDisabled - In the implementation block
@property (nonatomic,retain) SSKeyValueStore * keyValueStore;                                          //@synthesize keyValueStore=_keyValueStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> metricsQueue;                                //@synthesize metricsQueue=_metricsQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notificationQueue;                           //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,readonly) SSPromise * accountsPromise; 
@property (getter=isAuthenticationActive,readonly) BOOL authenticationActive; 
@property (nonatomic,readonly) ACAccountStore * backingAccountStore;                                   //@synthesize backingAccountStore=_backingAccountStore - In the implementation block
@property (nonatomic,readonly) SSAccount * demoAccount; 
@property (nonatomic,readonly) SSPromise * localAccount; 
@property (readonly) SSAccount * activeAccount; 
@property (readonly) SSAccount * activeSandboxAccount; 
@property (readonly) SSAccount * activeLockerAccount; 
@property (copy,readonly) NSArray * accounts; 
@property (copy,readonly) SSAccount * localiTunesAccount; 
@property (getter=isExpired,readonly) BOOL expired; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_refreshAccount:(id)arg1 ;
+(BOOL)unitTestModeEnabled;
+(id)_backingAccountForAccount:(id)arg1 ;
+(BOOL)_accountDictionaryRepresentsActiveAccount:(id)arg1 inKeyValueStore:(id)arg2 ;
+(void)performCookieStorageMigration;
+(void)_removeAccountFromUnitTestStore:(id)arg1 ;
+(id)defaultStore;
+(BOOL)_copyKVSDatabaseWithError:(id*)arg1 ;
+(id)_hashedDescriptionFromAccountDictionary:(id)arg1 ;
+(id)_unitTestAccountsAccessQueue;
+(BOOL)_currentProcessLinksUIKit;
+(BOOL)_isBuddyRunning;
+(BOOL)migrateToAccountsFramework;
+(id)_migrateAccountDictionary:(id)arg1 fromKeyValueStore:(id)arg2 originalActiveDSID:(id)arg3 originalActiveLockerDSID:(id)arg4 logKey:(id)arg5 error:(id*)arg6 ;
+(void)resetExpiration;
+(void)_disableAccountStoreChangedNotifications;
+(id)_createAuthenticationContextForAccount:(id)arg1 silentAuthentication:(BOOL)arg2 options:(id)arg3 ;
+(void)_enableAccountStoreChangedNotifications;
+(BOOL)URLResponseAllowsSilentAuthentication:(id)arg1 ;
+(BOOL)isExpiredForTokenType:(long long)arg1 ;
+(void)setAuthenticationStartedDate:(id)arg1 ;
+(void)resetExpirationForTokenType:(long long)arg1 ;
+(BOOL)isExpired;
+(void)_addAccountToUnitTestStore:(id)arg1 ;
+(id)_createAuthenticationController;
+(BOOL)_accountDictionaryRepresentsActiveLockerAccount:(id)arg1 inKeyValueStore:(id)arg2 ;
+(double)tokenExpirationInterval;
+(void)setUnitTestModeEnabled:(BOOL)arg1 ;
+(id)existingDefaultStore;
+(BOOL)_allowSilentPasswordAuthForAccount:(id)arg1 withOptions:(id)arg2 ;
+(void)_removeAccountDictionary:(id)arg1 fromKeyValueStore:(id)arg2 ;
+(BOOL)_shouldRemoveAccountDictionaryWithoutMigration:(id)arg1 reason:(id*)arg2 ;
+(void)_postAccountsChangedDarwinNotification;
+(BOOL)areAccountStoreChangedNotificationsDisabled;
+(void)_setActiveAccountIsManagedAppleIDPreference:(BOOL)arg1 ;
+(void)_postAccountsChangedInternalDarwinNotification;
+(void)_cleanupActiveAccountsAfterMigrationWithActiveDSID:(id)arg1 activeLockerDSID:(id)arg2 ;
+(id)_createUpdatedAccount:(id)arg1 withAuthenticationResults:(id)arg2 options:(id)arg3 ;
-(void)setNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)accounts;
-(void)saveAccount:(id)arg1 verifyCredentials:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)setActiveLockerAccount:(SSAccount *)arg1 ;
-(void)reloadAccounts;
-(id)accountWithAltDSID:(id)arg1 ;
-(void)setAccountCredits:(id)arg1 forAccountWithUniqueIdentifier:(id)arg2 ;
-(void)setKeyValueStore:(SSKeyValueStore *)arg1 ;
-(SSAccount *)activeAccount;
-(NSObject*<OS_dispatch_queue>)metricsQueue;
-(id)accountWithUniqueIdentifier:(id)arg1 scope:(long long)arg2 ;
-(id)_updateAccountWithAuthKitViaSilentPETAuth:(id)arg1 options:(id)arg2 ;
-(id)_updateAccountWithAuthKitViaSilentPasswordAuth:(id)arg1 options:(id)arg2 ;
-(void)_recordAnalyticsForMetricsDialogEvent:(id)arg1 withTopic:(id)arg2 ;
-(id)init;
-(void)setDefaultAccountName:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(SSAccount *)activeLockerAccount;
-(void)getDefaultAccountNameUsingBlock:(/*^block*/id)arg1 ;
-(void)_setCachedAccounts:(id)arg1 ;
-(id)accountWithAccountName:(id)arg1 ;
-(void)_postAuthenticationActivityNotification;
-(NSObject*<OS_dispatch_queue>)fetchAccountsQueue;
-(id)accountWithUniqueIdentifier:(id)arg1 reloadIfNecessary:(BOOL)arg2 ;
-(void)setFetchAccountsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)removeAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)accountWithAltDSID:(id)arg1 uniqueIdentifier:(id)arg2 accountName:(id)arg3 scope:(long long)arg4 ;
-(void)resetLocalAccount;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(id)_optionsForProxiedAuthenticationWithVerifyCredentialsOptions:(id)arg1 ;
-(NSArray *)accountsCache;
-(void)signOutAccount:(id)arg1 ;
-(void)removeAllAccountsWithCompletion:(/*^block*/id)arg1 ;
-(void)setInProcessCacheDisabled:(BOOL)arg1 ;
-(void)resetExpiration;
-(BOOL)saveAccount:(id)arg1 verifyCredentials:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)removeAccount:(id)arg1 error:(id*)arg2 ;
-(id)_convertPasswordToPET:(id)arg1 forAccount:(id)arg2 options:(id)arg3 ;
-(id)_shouldCreateNewAccountForAccount:(id)arg1 options:(id)arg2 ;
-(SSAccount *)demoAccount;
-(BOOL)saveAccount:(id)arg1 error:(id*)arg2 ;
-(void)setAccountsCache:(NSArray *)arg1 ;
-(id)iTunesStoreAccountTypePromise;
-(id)updateAccountWithAuthKit:(id)arg1 store:(id)arg2 options:(id)arg3 ;
-(BOOL)isExpiredForTokenType:(long long)arg1 ;
-(BOOL)isAuthenticationActive;
-(NSObject*<OS_dispatch_queue>)accountsCacheAccessQueue;
-(void)saveAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)iTunesStoreAccountType;
-(void)resetExpirationForTokenType:(long long)arg1 ;
-(id)setActiveAccount:(SSAccount *)arg1 ;
-(void)setMetricsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(SSAccount *)localiTunesAccount;
-(void)_postActiveAccountChangedNotification;
-(id)_buyParamsForBuyParamsString:(id)arg1 ;
-(BOOL)isExpired;
-(id)_updateAccountWithAuthKitViaSilentAuth:(id)arg1 options:(id)arg2 ;
-(void)signOutAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCookiesForAccount:(id)arg1 logKey:(id)arg2 ;
-(id)accountWithAltDSID:(id)arg1 uniqueIdentifier:(id)arg2 accountName:(id)arg3 ;
-(void)signOutAllAccounts;
-(SSPromise *)localAccount;
-(id)accountWithAltDSID:(id)arg1 scope:(long long)arg2 ;
-(BOOL)isInProcessCacheDisabled;
-(id)accountWithUniqueIdentifier:(id)arg1 ;
-(id)_passwordEquivalentTokenFromAlternateAccountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3 ;
-(id)_saveAccountInUnitTestMode:(id)arg1 ignoreValidationErrors:(BOOL)arg2 ;
-(void)clearCachedAccounts;
-(SSAccount *)activeSandboxAccount;
-(id)_updateAccountWithAuthKitViaPromptAuth:(id)arg1 store:(id)arg2 options:(id)arg3 ;
-(SSKeyValueStore *)keyValueStore;
-(SSPromise *)accountsPromise;
-(id)addAccount:(id)arg1 ;
-(id)accountWithAccountName:(id)arg1 scope:(long long)arg2 ;
-(id)_cachedAccounts;
-(void)setAccountsCacheAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(ACAccountStore *)backingAccountStore;
-(void)signOutAllAccountsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_postAccountStoreChangeNotification;
-(BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 ;
-(BOOL)repairAccountWithBrokenDSID:(id)arg1 ;
-(id)_saveAccount:(id)arg1 verifyCredentials:(BOOL)arg2 ;
-(void)dealloc;
@end

