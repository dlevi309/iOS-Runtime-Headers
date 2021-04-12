/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (getter=isExpired,readonly) BOOL expired; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultStore;
+(BOOL)isExpired;
+(id)_createAuthenticationController;
+(BOOL)unitTestModeEnabled;
+(void)resetExpirationForTokenType:(long long)arg1 ;
+(BOOL)isExpiredForTokenType:(long long)arg1 ;
+(id)_unitTestAccountsAccessQueue;
+(double)tokenExpirationInterval;
+(BOOL)_copyKVSDatabaseWithError:(id*)arg1 ;
+(BOOL)_shouldRemoveAccountDictionaryWithoutMigration:(id)arg1 reason:(id*)arg2 ;
+(void)_removeAccountDictionary:(id)arg1 fromKeyValueStore:(id)arg2 ;
+(id)_hashedDescriptionFromAccountDictionary:(id)arg1 ;
+(id)_migrateAccountDictionary:(id)arg1 fromKeyValueStore:(id)arg2 originalActiveDSID:(id)arg3 originalActiveLockerDSID:(id)arg4 logKey:(id)arg5 error:(id*)arg6 ;
+(void)_cleanupActiveAccountsAfterMigrationWithActiveDSID:(id)arg1 activeLockerDSID:(id)arg2 ;
+(void)_postAccountsChangedInternalDarwinNotification;
+(void)_postAccountsChangedDarwinNotification;
+(void)_removeAccountFromUnitTestStore:(id)arg1 ;
+(BOOL)areAccountStoreChangedNotificationsDisabled;
+(id)_backingAccountForAccount:(id)arg1 ;
+(void)resetExpiration;
+(void)_setActiveAccountIsManagedAppleIDPreference:(BOOL)arg1 ;
+(void)_addAccountToUnitTestStore:(id)arg1 ;
+(void)_disableAccountStoreChangedNotifications;
+(void)_enableAccountStoreChangedNotifications;
+(BOOL)_accountDictionaryRepresentsActiveAccount:(id)arg1 inKeyValueStore:(id)arg2 ;
+(BOOL)_accountDictionaryRepresentsActiveLockerAccount:(id)arg1 inKeyValueStore:(id)arg2 ;
+(id)_createAuthenticationContextForAccount:(id)arg1 silentAuthentication:(BOOL)arg2 options:(id)arg3 ;
+(BOOL)_currentProcessLinksUIKit;
+(BOOL)_isBuddyRunning;
+(id)_createUpdatedAccount:(id)arg1 withAuthenticationResults:(id)arg2 options:(id)arg3 ;
+(BOOL)_allowSilentPasswordAuthForAccount:(id)arg1 withOptions:(id)arg2 ;
+(id)_refreshAccount:(id)arg1 ;
+(BOOL)URLResponseAllowsSilentAuthentication:(id)arg1 ;
+(id)existingDefaultStore;
+(BOOL)migrateToAccountsFramework;
+(void)setAuthenticationStartedDate:(id)arg1 ;
+(void)performCookieStorageMigration;
+(void)setUnitTestModeEnabled:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(SSKeyValueStore *)keyValueStore;
-(void)setKeyValueStore:(SSKeyValueStore *)arg1 ;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(void)reloadAccounts;
-(NSArray *)accounts;
-(BOOL)isExpired;
-(NSObject*<OS_dispatch_queue>)metricsQueue;
-(void)setMetricsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)addAccount:(id)arg1 ;
-(id)_cachedAccounts;
-(SSPromise *)localAccount;
-(BOOL)saveAccount:(id)arg1 error:(id*)arg2 ;
-(SSAccount *)activeAccount;
-(NSArray *)accountsCache;
-(void)setAccountsCache:(NSArray *)arg1 ;
-(void)setNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 ;
-(id)_saveAccount:(id)arg1 verifyCredentials:(BOOL)arg2 ;
-(SSAccount *)demoAccount;
-(BOOL)saveAccount:(id)arg1 verifyCredentials:(BOOL)arg2 error:(id*)arg3 ;
-(id)iTunesStoreAccountType;
-(id)setActiveLockerAccount:(SSAccount *)arg1 ;
-(id)updateAccountWithAuthKit:(id)arg1 store:(id)arg2 options:(id)arg3 ;
-(ACAccountStore *)backingAccountStore;
-(void)clearCachedAccounts;
-(void)resetExpirationForTokenType:(long long)arg1 ;
-(BOOL)isExpiredForTokenType:(long long)arg1 ;
-(id)accountWithUniqueIdentifier:(id)arg1 ;
-(void)_setCachedAccounts:(id)arg1 ;
-(BOOL)repairAccountWithBrokenDSID:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)fetchAccountsQueue;
-(id)accountWithAltDSID:(id)arg1 uniqueIdentifier:(id)arg2 accountName:(id)arg3 scope:(long long)arg4 ;
-(id)accountWithAltDSID:(id)arg1 scope:(long long)arg2 ;
-(id)accountWithUniqueIdentifier:(id)arg1 scope:(long long)arg2 ;
-(id)accountWithAccountName:(id)arg1 scope:(long long)arg2 ;
-(id)iTunesStoreAccountTypePromise;
-(NSObject*<OS_dispatch_queue>)accountsCacheAccessQueue;
-(id)_lookupLocalAccountPromise;
-(id)_createLocalAccountPromise;
-(void)setInProcessCacheDisabled:(BOOL)arg1 ;
-(void)removeAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetExpiration;
-(void)saveAccount:(id)arg1 verifyCredentials:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)signOutAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCookiesForAccount:(id)arg1 logKey:(id)arg2 ;
-(id)_shouldCreateNewAccountForAccount:(id)arg1 options:(id)arg2 ;
-(id)_updateAccountWithAuthKitViaSilentPETAuth:(id)arg1 options:(id)arg2 ;
-(id)_updateAccountWithAuthKitViaSilentPasswordAuth:(id)arg1 options:(id)arg2 ;
-(id)_updateAccountWithAuthKitViaSilentAuth:(id)arg1 options:(id)arg2 ;
-(id)_updateAccountWithAuthKitViaPromptAuth:(id)arg1 store:(id)arg2 options:(id)arg3 ;
-(BOOL)isInProcessCacheDisabled;
-(SSPromise *)accountsPromise;
-(id)_saveAccountInUnitTestMode:(id)arg1 ignoreValidationErrors:(BOOL)arg2 ;
-(id)_buyParamsForBuyParamsString:(id)arg1 ;
-(void)_recordAnalyticsForMetricsDialogEvent:(id)arg1 withTopic:(id)arg2 ;
-(id)_convertPasswordToPET:(id)arg1 forAccount:(id)arg2 options:(id)arg3 ;
-(id)_passwordEquivalentTokenFromAlternateAccountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3 ;
-(SSAccount *)activeLockerAccount;
-(void)signOutAllAccountsWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)accountWithAccountName:(id)arg1 ;
-(id)accountWithAltDSID:(id)arg1 ;
-(id)accountWithAltDSID:(id)arg1 uniqueIdentifier:(id)arg2 accountName:(id)arg3 ;
-(SSAccount *)activeSandboxAccount;
-(void)resetLocalAccount;
-(id)accountWithUniqueIdentifier:(id)arg1 reloadIfNecessary:(BOOL)arg2 ;
-(void)getDefaultAccountNameUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isAuthenticationActive;
-(BOOL)removeAccount:(id)arg1 error:(id*)arg2 ;
-(void)removeAllAccountsWithCompletion:(/*^block*/id)arg1 ;
-(void)saveAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDefaultAccountName:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)signOutAccount:(id)arg1 ;
-(void)_postAccountStoreChangeNotification;
-(void)_postActiveAccountChangedNotification;
-(void)_postAuthenticationActivityNotification;
-(id)_optionsForProxiedAuthenticationWithVerifyCredentialsOptions:(id)arg1 ;
-(void)setAccountCredits:(id)arg1 forAccountWithUniqueIdentifier:(id)arg2 ;
-(id)setActiveAccount:(SSAccount *)arg1 ;
-(void)signOutAllAccounts;
-(void)setAccountsCacheAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFetchAccountsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

