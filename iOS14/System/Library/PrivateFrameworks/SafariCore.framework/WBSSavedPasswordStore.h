/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSArray, WBSKeychainCredentialNotificationMonitor, NSObject, NSSet;

@interface WBSSavedPasswordStore : NSObject {

	NSMutableDictionary* _domainToUsers;
	NSArray* _savedPasswords;
	WBSKeychainCredentialNotificationMonitor* _keychainMonitor;
	id _keychainNotificationRegistrationToken;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _hasPasswordsEligibleForAutoFill;

}

@property (nonatomic,readonly) NSArray * savedPasswords; 
@property (nonatomic,readonly) NSArray * savedPasswordsExcludingNeverSaveMarkerPasswords; 
@property (nonatomic,readonly) BOOL hasPasswordsEligibleForAutoFill;                                                      //@synthesize hasPasswordsEligibleForAutoFill=_hasPasswordsEligibleForAutoFill - In the implementation block
@property (nonatomic,readonly) NSSet * highLevelDomainsOfAllSavedPasswordsExcludingNeverSaveMarkerPasswords; 
+(id)sharedStore;
+(void)removePassword:(id)arg1 ;
-(BOOL)safari_canSaveUser:(id)arg1 password:(id)arg2 forUserTypedSite:(id)arg3 ;
-(id)safari_saveUser:(id)arg1 password:(id)arg2 forUserTypedSite:(id)arg3 ;
-(id)init;
-(NSArray *)savedPasswordsExcludingNeverSaveMarkerPasswords;
-(id)_allInternetPasswordEntriesFromKeychain;
-(void)_cleanUpRedundantCredentialsWithoutUsernames;
-(void)_ensureDomainsToUsersExists;
-(id)_persistentIdentifierForUser:(id)arg1 host:(id)arg2 ;
-(id)savedPasswordForURLCredential:(id)arg1 protectionSpace:(id)arg2 ;
-(BOOL)hasPasswordsEligibleForAutoFill;
-(void)savedPasswordWithAllMetadataForURLCredential:(id)arg1 protectionSpace:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)savedPasswordForURL:(id)arg1 user:(id)arg2 password:(id)arg3 ;
-(id)savedPasswordsForPersistentIdentifiers:(id)arg1 ;
-(NSSet *)highLevelDomainsOfAllSavedPasswordsExcludingNeverSaveMarkerPasswords;
-(void)removeSite:(id)arg1 fromPassword:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)canChangeSavedPassword:(id)arg1 toUser:(id)arg2 password:(id)arg3 ;
-(BOOL)changeSavedPassword:(id)arg1 toUser:(id)arg2 password:(id)arg3 ;
-(BOOL)canSaveUser:(id)arg1 password:(id)arg2 forProtectionSpace:(id)arg3 highLevelDomain:(id)arg4 ;
-(id)saveUser:(id)arg1 password:(id)arg2 forProtectionSpace:(id)arg3 highLevelDomain:(id)arg4 ;
-(unsigned long long)numberOfSavedPasswordForHighLevelDomain:(id)arg1 ;
-(id)persistentIdentifierForSavedPassword:(id)arg1 ;
-(id)persistentIdentifierForCredential:(id)arg1 protectionSpace:(id)arg2 ;
-(id)_savedPasswords;
-(void)reset;
-(NSArray *)savedPasswords;
-(void)removePassword:(id)arg1 ;
-(void)dealloc;
-(void)_postSavedPasswordStoreDidChangeNotification;
-(id)_savedPasswordForProtectionSpace:(id)arg1 user:(id)arg2 password:(id)arg3 ;
-(void)_removePassword:(id)arg1 ;
@end

