/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)safari_saveUser:(id)arg1 password:(id)arg2 forUserTypedSite:(id)arg3 ;
-(BOOL)safari_canSaveUser:(id)arg1 password:(id)arg2 forUserTypedSite:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)reset;
-(BOOL)changeSavedPassword:(id)arg1 toUser:(id)arg2 password:(id)arg3 ;
-(NSArray *)savedPasswordsExcludingNeverSaveMarkerPasswords;
-(void)removePassword:(id)arg1 ;
-(NSArray *)savedPasswords;
-(BOOL)canChangeSavedPassword:(id)arg1 toUser:(id)arg2 password:(id)arg3 ;
-(void)removeSite:(id)arg1 fromPassword:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)savedPasswordForURL:(id)arg1 user:(id)arg2 password:(id)arg3 ;
-(id)_savedPasswords;
-(void)_postSavedPasswordStoreDidChangeNotification;
-(id)_allInternetPasswordEntriesFromKeychain;
-(void)_cleanUpRedundantCredentialsWithoutUsernames;
-(void)_removePassword:(id)arg1 ;
-(void)_ensureDomainsToUsersExists;
-(NSSet *)highLevelDomainsOfAllSavedPasswordsExcludingNeverSaveMarkerPasswords;
-(BOOL)canSaveUser:(id)arg1 password:(id)arg2 forProtectionSpace:(id)arg3 highLevelDomain:(id)arg4 ;
-(id)saveUser:(id)arg1 password:(id)arg2 forProtectionSpace:(id)arg3 highLevelDomain:(id)arg4 ;
-(id)persistentIdentifierForCredential:(id)arg1 protectionSpace:(id)arg2 ;
-(BOOL)hasPasswordsEligibleForAutoFill;
@end

